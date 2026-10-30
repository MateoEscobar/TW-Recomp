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

// Function: sub_004AC198
// Address: 0x4ac198 - 0x4ac258
void sub_004AC198_0x4ac198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC198_0x4ac198");
#endif

    switch (ctx->pc) {
        case 0x4ac1e0u: goto label_4ac1e0;
        case 0x4ac204u: goto label_4ac204;
        case 0x4ac21cu: goto label_4ac21c;
        default: break;
    }

    ctx->pc = 0x4ac198u;

    // 0x4ac198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ac198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ac19c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ac19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ac1a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ac1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ac1a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ac1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ac1a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac1ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ac1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ac1b0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ac1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ac1b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC1B4u;
    {
        const bool branch_taken_0x4ac1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC1B4u;
        // 0x4ac1b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac1b4) {
            ctx->pc = 0x4AC1CCu;
            goto label_4ac1cc;
        }
    }
    ctx->pc = 0x4AC1BCu;
    // 0x4ac1bc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4ac1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4ac1c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ac1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac1c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4AC1C4u;
    {
        const bool branch_taken_0x4ac1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC1C4u;
        // 0x4ac1c8: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac1c4) {
            ctx->pc = 0x4AC208u;
            goto label_4ac208;
        }
    }
    ctx->pc = 0x4AC1CCu;
label_4ac1cc:
    // 0x4ac1cc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4ac1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4ac1d0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC1D0u;
    {
        const bool branch_taken_0x4ac1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac1d0) {
            ctx->pc = 0x4AC1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC1D0u;
            // 0x4ac1d4: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC1E8u;
            goto label_4ac1e8;
        }
    }
    ctx->pc = 0x4AC1D8u;
    // 0x4ac1d8: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AC1D8u;
    SET_GPR_U32(ctx, 31, 0x4AC1E0u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AC1D8u, 0x4AC1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC1E0u;
label_4ac1e0:
    // 0x4ac1e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ac1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ac1e4: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4ac1e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4ac1e8:
    // 0x4ac1e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4ac1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4ac1ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4ac1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ac1f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4ac1f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ac1f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC1F4u;
    {
        const bool branch_taken_0x4ac1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC1F4u;
        // 0x4ac1f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac1f4) {
            ctx->pc = 0x4AC208u;
            goto label_4ac208;
        }
    }
    ctx->pc = 0x4AC1FCu;
    // 0x4ac1fc: 0xc12b69e  jal         func_4ADA78
    ctx->pc = 0x4AC1FCu;
    SET_GPR_U32(ctx, 31, 0x4AC204u);
    ctx->pc = 0x4AC200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC1FCu;
    // 0x4ac200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA78u, 0x4AC1FCu, 0x4AC204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC204u;
label_4ac204:
    // 0x4ac204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ac204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ac208:
    // 0x4ac208: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x4AC208u;
    {
        const bool branch_taken_0x4ac208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC208u;
        // 0x4ac20c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac208) {
            ctx->pc = 0x4AC240u;
            goto label_4ac240;
        }
    }
    ctx->pc = 0x4AC210u;
    // 0x4ac210: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ac210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ac214: 0xc12cc70  jal         func_4B31C0
    ctx->pc = 0x4AC214u;
    SET_GPR_U32(ctx, 31, 0x4AC21Cu);
    ctx->pc = 0x4AC218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC214u;
    // 0x4ac218: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4AC214u, 0x4AC21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC21Cu;
label_4ac21c:
    // 0x4ac21c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4ac21cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac220: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ac220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ac224: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC224u;
    {
        const bool branch_taken_0x4ac224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ac224) {
            ctx->pc = 0x4AC228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC224u;
            // 0x4ac228: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC23Cu;
            goto label_4ac23c;
        }
    }
    ctx->pc = 0x4AC22Cu;
    // 0x4ac22c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ac22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ac230: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ac230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ac234: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x4ac234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x4ac238: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ac238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_4ac23c:
    // 0x4ac23c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ac240:
    // 0x4ac240: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ac240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac244: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ac244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac24c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC24Cu;
        // 0x4ac250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC254u;
    // 0x4ac254: 0x0  nop
    ctx->pc = 0x4ac254u;
    // NOP
    ctx->pc = 0x4ac258u;
}
