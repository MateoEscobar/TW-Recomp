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

// Function: sub_0028DE48
// Address: 0x28de48 - 0x28de98
void sub_0028DE48_0x28de48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DE48_0x28de48");
#endif

    switch (ctx->pc) {
        case 0x28de48u: goto label_28de48;
        case 0x28de4cu: goto label_28de4c;
        case 0x28de50u: goto label_28de50;
        case 0x28de54u: goto label_28de54;
        case 0x28de58u: goto label_28de58;
        case 0x28de5cu: goto label_28de5c;
        case 0x28de60u: goto label_28de60;
        case 0x28de64u: goto label_28de64;
        case 0x28de68u: goto label_28de68;
        case 0x28de6cu: goto label_28de6c;
        case 0x28de70u: goto label_28de70;
        case 0x28de74u: goto label_28de74;
        case 0x28de78u: goto label_28de78;
        case 0x28de7cu: goto label_28de7c;
        case 0x28de80u: goto label_28de80;
        case 0x28de84u: goto label_28de84;
        case 0x28de88u: goto label_28de88;
        case 0x28de8cu: goto label_28de8c;
        case 0x28de90u: goto label_28de90;
        case 0x28de94u: goto label_28de94;
        default: break;
    }

    ctx->pc = 0x28de48u;

label_28de48:
    // 0x28de48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28de48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_28de4c:
    // 0x28de4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28de4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28de50:
    // 0x28de50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28de50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28de54:
    // 0x28de54: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_28de58:
    if (ctx->pc == 0x28DE58u) {
        ctx->pc = 0x28DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE54u;
        // 0x28de58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DE5Cu;
        goto label_28de5c;
    }
    ctx->pc = 0x28DE54u;
    {
        const bool branch_taken_0x28de54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE54u;
        // 0x28de58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de54) {
            ctx->pc = 0x28DE84u;
            goto label_28de84;
        }
    }
    ctx->pc = 0x28DE5Cu;
label_28de5c:
    // 0x28de5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28de60:
    // 0x28de60: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28de60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_28de64:
    // 0x28de64: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x28de64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28de68:
    // 0x28de68: 0x40f809  jalr        $v0
label_28de6c:
    if (ctx->pc == 0x28DE6Cu) {
        ctx->pc = 0x28DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE68u;
        // 0x28de6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DE70u;
        goto label_28de70;
    }
    ctx->pc = 0x28DE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28DE70u);
        ctx->pc = 0x28DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE68u;
        // 0x28de6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DE68u, 0x28DE70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28DE70u;
label_28de70:
    // 0x28de70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28de70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28de74:
    // 0x28de74: 0xc0a3782  jal         func_28DE08
label_28de78:
    if (ctx->pc == 0x28DE78u) {
        ctx->pc = 0x28DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE74u;
        // 0x28de78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DE7Cu;
        goto label_28de7c;
    }
    ctx->pc = 0x28DE74u;
    SET_GPR_U32(ctx, 31, 0x28DE7Cu);
    ctx->pc = 0x28DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DE74u;
    // 0x28de78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x28DE74u, 0x28DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE7Cu;
label_28de7c:
    // 0x28de7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28de80:
    if (ctx->pc == 0x28DE80u) {
        ctx->pc = 0x28DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE7Cu;
        // 0x28de80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DE84u;
        goto label_28de84;
    }
    ctx->pc = 0x28DE7Cu;
    {
        const bool branch_taken_0x28de7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE7Cu;
        // 0x28de80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de7c) {
            ctx->pc = 0x28DE8Cu;
            goto label_28de8c;
        }
    }
    ctx->pc = 0x28DE84u;
label_28de84:
    // 0x28de84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28de84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28de88:
    // 0x28de88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28de88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28de8c:
    // 0x28de8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28de8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28de90:
    // 0x28de90: 0x3e00008  jr          $ra
label_28de94:
    if (ctx->pc == 0x28DE94u) {
        ctx->pc = 0x28DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE90u;
        // 0x28de94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DE98u;
        goto label_fallthrough_0x28de90;
    }
    ctx->pc = 0x28DE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE90u;
        // 0x28de94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28de90:
    ctx->pc = 0x28DE98u;
}
