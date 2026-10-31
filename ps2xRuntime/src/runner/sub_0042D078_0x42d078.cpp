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

// Function: sub_0042D078
// Address: 0x42d078 - 0x42d108
void sub_0042D078_0x42d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D078_0x42d078");
#endif

    switch (ctx->pc) {
        case 0x42d094u: goto label_42d094;
        case 0x42d0c0u: goto label_42d0c0;
        default: break;
    }

    ctx->pc = 0x42d078u;

    // 0x42d078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42d078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42d07c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x42d07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x42d080: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x42d080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42d084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42d088: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42d08c: 0xc10bafe  jal         func_42EBF8
    ctx->pc = 0x42D08Cu;
    SET_GPR_U32(ctx, 31, 0x42D094u);
    ctx->pc = 0x42D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D08Cu;
    // 0x42d090: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EBF8u, 0x42D08Cu, 0x42D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D094u;
label_42d094:
    // 0x42d094: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42d094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d098: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x42D098u;
    {
        const bool branch_taken_0x42d098 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x42d098) {
            ctx->pc = 0x42D09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42D098u;
            // 0x42d09c: 0x96040298  lhu         $a0, 0x298($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42D0A8u;
            goto label_42d0a8;
        }
    }
    ctx->pc = 0x42D0A0u;
    // 0x42d0a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x42D0A0u;
    {
        const bool branch_taken_0x42d0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D0A0u;
        // 0x42d0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d0a0) {
            ctx->pc = 0x42D0F0u;
            goto label_42d0f0;
        }
    }
    ctx->pc = 0x42D0A8u;
label_42d0a8:
    // 0x42d0a8: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x42d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x42d0ac: 0x8043029c  lb          $v1, 0x29C($v0)
    ctx->pc = 0x42d0acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x42d0b0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x42D0B0u;
    {
        const bool branch_taken_0x42d0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D0B0u;
        // 0x42d0b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d0b0) {
            ctx->pc = 0x42D0D4u;
            goto label_42d0d4;
        }
    }
    ctx->pc = 0x42D0B8u;
    // 0x42d0b8: 0xc10b3dc  jal         func_42CF70
    ctx->pc = 0x42D0B8u;
    SET_GPR_U32(ctx, 31, 0x42D0C0u);
    ctx->pc = 0x42D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D0B8u;
    // 0x42d0bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42CF70u, 0x42D0B8u, 0x42D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D0C0u;
label_42d0c0:
    // 0x42d0c0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x42d0c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42d0c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42d0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x42d0c8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x42d0c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x42d0cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x42D0CCu;
    {
        const bool branch_taken_0x42d0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D0CCu;
        // 0x42d0d0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d0cc) {
            ctx->pc = 0x42D0DCu;
            goto label_42d0dc;
        }
    }
    ctx->pc = 0x42D0D4u;
label_42d0d4:
    // 0x42d0d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x42d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x42d0d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_42d0dc:
    // 0x42d0dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x42d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42d0e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42d0e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d0e4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x42d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x42d0e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x42d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x42d0ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42d0f0:
    // 0x42d0f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42d0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42d0f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x42d0f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42d0f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42d0f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42d0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x42D0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D0FCu;
        // 0x42d100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42D104u;
    // 0x42d104: 0x0  nop
    ctx->pc = 0x42d104u;
    // NOP
    ctx->pc = 0x42d108u;
}
