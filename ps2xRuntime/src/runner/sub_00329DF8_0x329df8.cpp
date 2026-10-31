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

// Function: sub_00329DF8
// Address: 0x329df8 - 0x329ec8
void sub_00329DF8_0x329df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329DF8_0x329df8");
#endif

    switch (ctx->pc) {
        case 0x329e18u: goto label_329e18;
        case 0x329e24u: goto label_329e24;
        case 0x329eb8u: goto label_329eb8;
        default: break;
    }

    ctx->pc = 0x329df8u;

    // 0x329df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x329dfc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x329dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329e04: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x329e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x329e08: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x329E08u;
    {
        const bool branch_taken_0x329e08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x329E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E08u;
        // 0x329e0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e08) {
            ctx->pc = 0x329EACu;
            goto label_329eac;
        }
    }
    ctx->pc = 0x329E10u;
    // 0x329e10: 0x8ce30040  lw          $v1, 0x40($a3)
    ctx->pc = 0x329e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x329e14: 0x0  nop
    ctx->pc = 0x329e14u;
    // NOP
label_329e18:
    // 0x329e18: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x329e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x329e1c: 0x24890001  addiu       $t1, $a0, 0x1
    ctx->pc = 0x329e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x329e20: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x329e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_329e24:
    // 0x329e24: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x329e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x329e28: 0x50c0001c  beql        $a2, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x329E28u;
    {
        const bool branch_taken_0x329e28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x329e28) {
            ctx->pc = 0x329E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329E28u;
            // 0x329e2c: 0x8ce20038  lw          $v0, 0x38($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329E9Cu;
            goto label_329e9c;
        }
    }
    ctx->pc = 0x329E30u;
    // 0x329e30: 0x84c2000a  lh          $v0, 0xA($a2)
    ctx->pc = 0x329e30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x329e34: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x329E34u;
    {
        const bool branch_taken_0x329e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329e34) {
            ctx->pc = 0x329E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329E34u;
            // 0x329e38: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329E50u;
            goto label_329e50;
        }
    }
    ctx->pc = 0x329E3Cu;
    // 0x329e3c: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x329E3Cu;
    {
        const bool branch_taken_0x329e3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x329e3c) {
            ctx->pc = 0x329E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329E3Cu;
            // 0x329e40: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329E50u;
            goto label_329e50;
        }
    }
    ctx->pc = 0x329E44u;
    // 0x329e44: 0x24c8000c  addiu       $t0, $a2, 0xC
    ctx->pc = 0x329e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x329e48: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x329E48u;
    {
        const bool branch_taken_0x329e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E48u;
        // 0x329e4c: 0xa4c0000a  sh          $zero, 0xA($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e48) {
            ctx->pc = 0x329E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329e24;
        }
    }
    ctx->pc = 0x329E50u;
label_329e50:
    // 0x329e50: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x329e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x329e54: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x329e54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x329e58: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x329e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x329e5c: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x329e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x329e60: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x329e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x329e64: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x329e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x329e68: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x329e68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x329e6c: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x329e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x329e70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x329e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x329e74: 0xac86003c  sw          $a2, 0x3C($a0)
    ctx->pc = 0x329e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
    // 0x329e78: 0x8ce20060  lw          $v0, 0x60($a3)
    ctx->pc = 0x329e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x329e7c: 0x94c40008  lhu         $a0, 0x8($a2)
    ctx->pc = 0x329e7cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x329e80: 0x8ce3003c  lw          $v1, 0x3C($a3)
    ctx->pc = 0x329e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x329e84: 0x2442ffef  addiu       $v0, $v0, -0x11
    ctx->pc = 0x329e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967279));
    // 0x329e88: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x329e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x329e8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x329e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x329e90: 0xace20060  sw          $v0, 0x60($a3)
    ctx->pc = 0x329e90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 2));
    // 0x329e94: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x329E94u;
    {
        const bool branch_taken_0x329e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E94u;
        // 0x329e98: 0xace3003c  sw          $v1, 0x3C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e94) {
            ctx->pc = 0x329E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329e24;
        }
    }
    ctx->pc = 0x329E9Cu;
label_329e9c:
    // 0x329e9c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x329e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329ea0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x329ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x329ea4: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x329EA4u;
    {
        const bool branch_taken_0x329ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329ea4) {
            ctx->pc = 0x329EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329EA4u;
            // 0x329ea8: 0x8ce30040  lw          $v1, 0x40($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329e18;
        }
    }
    ctx->pc = 0x329EACu;
label_329eac:
    // 0x329eac: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x329eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329eb0: 0xc0ca742  jal         func_329D08
    ctx->pc = 0x329EB0u;
    SET_GPR_U32(ctx, 31, 0x329EB8u);
    ctx->pc = 0x329EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329EB0u;
    // 0x329eb4: 0x24850038  addiu       $a1, $a0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329D08u, 0x329EB0u, 0x329EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329EB8u;
label_329eb8:
    // 0x329eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x329EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EBCu;
        // 0x329ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329EC4u;
    // 0x329ec4: 0x0  nop
    ctx->pc = 0x329ec4u;
    // NOP
    ctx->pc = 0x329ec8u;
}
