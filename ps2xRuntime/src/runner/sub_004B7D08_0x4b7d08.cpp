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

// Function: sub_004B7D08
// Address: 0x4b7d08 - 0x4b7da0
void sub_004B7D08_0x4b7d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7D08_0x4b7d08");
#endif

    switch (ctx->pc) {
        case 0x4b7d3cu: goto label_4b7d3c;
        case 0x4b7d88u: goto label_4b7d88;
        default: break;
    }

    ctx->pc = 0x4b7d08u;

    // 0x4b7d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b7d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b7d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b7d10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b7d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b7d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b7d18: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B7D18u;
    {
        const bool branch_taken_0x4b7d18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7D18u;
        // 0x4b7d1c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7d18) {
            ctx->pc = 0x4B7D70u;
            goto label_4b7d70;
        }
    }
    ctx->pc = 0x4B7D20u;
    // 0x4b7d20: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x4b7d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4b7d24: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4b7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4b7d28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b7d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b7d2c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B7D2Cu;
    {
        const bool branch_taken_0x4b7d2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B7D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7D2Cu;
        // 0x4b7d30: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7d2c) {
            ctx->pc = 0x4B7D44u;
            goto label_4b7d44;
        }
    }
    ctx->pc = 0x4B7D34u;
    // 0x4b7d34: 0xc10c9f2  jal         func_4327C8
    ctx->pc = 0x4B7D34u;
    SET_GPR_U32(ctx, 31, 0x4B7D3Cu);
    ctx->pc = 0x4327C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4327C8u, 0x4B7D34u, 0x4B7D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7D3Cu;
label_4b7d3c:
    // 0x4b7d3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B7D3Cu;
    {
        const bool branch_taken_0x4b7d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7D3Cu;
        // 0x4b7d40: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7d3c) {
            ctx->pc = 0x4B7D54u;
            goto label_4b7d54;
        }
    }
    ctx->pc = 0x4B7D44u;
label_4b7d44:
    // 0x4b7d44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b7d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b7d48: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4b7d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b7d4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4b7d50: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b7d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4b7d54:
    // 0x4b7d54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b7d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b7d58: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B7D58u;
    {
        const bool branch_taken_0x4b7d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b7d58) {
            ctx->pc = 0x4B7D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B7D58u;
            // 0x4b7d5c: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B7D68u;
            goto label_4b7d68;
        }
    }
    ctx->pc = 0x4B7D60u;
    // 0x4b7d60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4B7D60u;
    {
        const bool branch_taken_0x4b7d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7D60u;
        // 0x4b7d64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7d60) {
            ctx->pc = 0x4B7D90u;
            goto label_4b7d90;
        }
    }
    ctx->pc = 0x4B7D68u;
label_4b7d68:
    // 0x4b7d68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4B7D68u;
    {
        const bool branch_taken_0x4b7d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7D68u;
        // 0x4b7d6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7d68) {
            ctx->pc = 0x4B7D90u;
            goto label_4b7d90;
        }
    }
    ctx->pc = 0x4B7D70u;
label_4b7d70:
    // 0x4b7d70: 0x8c870058  lw          $a3, 0x58($a0)
    ctx->pc = 0x4b7d70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4b7d74: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4b7d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4b7d78: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4b7d78u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x4b7d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b7d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7d80: 0xc10c6e2  jal         func_431B88
    ctx->pc = 0x4B7D80u;
    SET_GPR_U32(ctx, 31, 0x4B7D88u);
    ctx->pc = 0x4B7D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7D80u;
    // 0x4b7d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431B88u, 0x4B7D80u, 0x4B7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7D88u;
label_4b7d88:
    // 0x4b7d88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b7d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b7d8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4b7d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4b7d90:
    // 0x4b7d90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b7d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7d98: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7D98u;
        // 0x4b7d9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7DA0u;
}
