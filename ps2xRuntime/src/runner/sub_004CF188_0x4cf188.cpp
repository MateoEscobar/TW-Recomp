#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CF188
// Address: 0x4cf188 - 0x4cf280
void sub_004CF188_0x4cf188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF188_0x4cf188");
#endif

    switch (ctx->pc) {
        case 0x4cf1e0u: goto label_4cf1e0;
        case 0x4cf1f8u: goto label_4cf1f8;
        default: break;
    }

    ctx->pc = 0x4cf188u;

    // 0x4cf188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cf188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4cf18c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4cf18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4cf190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cf190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cf194: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cf194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cf198: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cf198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf19c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cf19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cf1a0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4cf1a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf1a4: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CF1A4u;
    {
        const bool branch_taken_0x4cf1a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF1A4u;
        // 0x4cf1a8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf1a4) {
            ctx->pc = 0x4CF1B8u;
            goto label_4cf1b8;
        }
    }
    ctx->pc = 0x4CF1ACu;
    // 0x4cf1ac: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x4cf1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x4cf1b0: 0x54450001  bnel        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x4CF1B0u;
    {
        const bool branch_taken_0x4cf1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4cf1b0) {
            ctx->pc = 0x4CF1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CF1B0u;
            // 0x4cf1b4: 0xae25004c  sw          $a1, 0x4C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CF1B8u;
            goto label_4cf1b8;
        }
    }
    ctx->pc = 0x4CF1B8u;
label_4cf1b8:
    // 0x4cf1b8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x4cf1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x4cf1bc: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x4cf1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x4cf1c0: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x4cf1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x4cf1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cf1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf1c8: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x4cf1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x4cf1cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4cf1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4cf1d0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x4cf1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x4cf1d4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4cf1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x4cf1d8: 0xc133470  jal         func_4CD1C0
    ctx->pc = 0x4CF1D8u;
    SET_GPR_U32(ctx, 31, 0x4CF1E0u);
    ctx->pc = 0x4CF1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF1D8u;
    // 0x4cf1dc: 0xae060010  sw          $a2, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD1C0u, 0x4CF1D8u, 0x4CF1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF1E0u;
label_4cf1e0:
    // 0x4cf1e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4CF1E0u;
    {
        const bool branch_taken_0x4cf1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF1E0u;
        // 0x4cf1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf1e0) {
            ctx->pc = 0x4CF228u;
            goto label_4cf228;
        }
    }
    ctx->pc = 0x4CF1E8u;
    // 0x4cf1e8: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x4cf1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x4cf1ec: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x4cf1ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4cf1f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CF1F0u;
    {
        const bool branch_taken_0x4cf1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf1f0) {
            ctx->pc = 0x4CF214u;
            goto label_4cf214;
        }
    }
    ctx->pc = 0x4CF1F8u;
label_4cf1f8:
    // 0x4cf1f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4cf1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cf1fc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x4cf1fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4cf200: 0x0  nop
    ctx->pc = 0x4cf200u;
    // NOP
    // 0x4cf204: 0x0  nop
    ctx->pc = 0x4cf204u;
    // NOP
    // 0x4cf208: 0x0  nop
    ctx->pc = 0x4cf208u;
    // NOP
    // 0x4cf20c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CF20Cu;
    {
        const bool branch_taken_0x4cf20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cf20c) {
            ctx->pc = 0x4CF1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cf1f8;
        }
    }
    ctx->pc = 0x4CF214u;
label_4cf214:
    // 0x4cf214: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4cf214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cf218: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4cf218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4cf21c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4CF21Cu;
    {
        const bool branch_taken_0x4cf21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4CF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF21Cu;
        // 0x4cf220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf21c) {
            ctx->pc = 0x4CF228u;
            goto label_4cf228;
        }
    }
    ctx->pc = 0x4CF224u;
    // 0x4cf224: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4cf224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4cf228:
    // 0x4cf228: 0x10b20002  beq         $a1, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x4CF228u;
    {
        const bool branch_taken_0x4cf228 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x4CF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF228u;
        // 0x4cf22c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf228) {
            ctx->pc = 0x4CF234u;
            goto label_4cf234;
        }
    }
    ctx->pc = 0x4CF230u;
    // 0x4cf230: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x4cf230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_4cf234:
    // 0x4cf234: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x4cf234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x4cf238: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x4cf238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x4cf23c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4cf23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cf240: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x4cf240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x4cf244: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x4cf244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x4cf248: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x4cf248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x4cf24c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4cf24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4cf250: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4cf250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4cf254: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4CF254u;
    {
        const bool branch_taken_0x4cf254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF254u;
        // 0x4cf258: 0xae240050  sw          $a0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf254) {
            ctx->pc = 0x4CF260u;
            goto label_4cf260;
        }
    }
    ctx->pc = 0x4CF25Cu;
    // 0x4cf25c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x4cf25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_4cf260:
    // 0x4cf260: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x4cf260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x4cf264: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4cf264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cf268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf26c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cf26cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cf270: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cf270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cf274: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4cf274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cf278: 0x3e00008  jr          $ra
    ctx->pc = 0x4CF278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF278u;
        // 0x4cf27c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CF278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CF280u;
}
