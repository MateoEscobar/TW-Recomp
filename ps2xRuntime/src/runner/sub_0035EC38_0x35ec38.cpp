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

// Function: sub_0035EC38
// Address: 0x35ec38 - 0x35ecb0
void sub_0035EC38_0x35ec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EC38_0x35ec38");
#endif

    switch (ctx->pc) {
        case 0x35ec60u: goto label_35ec60;
        case 0x35ec68u: goto label_35ec68;
        case 0x35ec7cu: goto label_35ec7c;
        case 0x35ec84u: goto label_35ec84;
        case 0x35ec90u: goto label_35ec90;
        default: break;
    }

    ctx->pc = 0x35ec38u;

    // 0x35ec38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35ec38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35ec3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ec40: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35ec40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35ec44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35ec44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35ec48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35ec48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35ec4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35ec50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35ec54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ec58: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EC58u;
    SET_GPR_U32(ctx, 31, 0x35EC60u);
    ctx->pc = 0x35EC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC58u;
    // 0x35ec5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EC58u, 0x35EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EC60u;
label_35ec60:
    // 0x35ec60: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EC60u;
    SET_GPR_U32(ctx, 31, 0x35EC68u);
    ctx->pc = 0x35EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC60u;
    // 0x35ec64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EC60u, 0x35EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EC68u;
label_35ec68:
    // 0x35ec68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35ec68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35ec6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ec70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec74: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EC74u;
    SET_GPR_U32(ctx, 31, 0x35EC7Cu);
    ctx->pc = 0x35EC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC74u;
    // 0x35ec78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EC74u, 0x35EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EC7Cu;
label_35ec7c:
    // 0x35ec7c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35EC7Cu;
    SET_GPR_U32(ctx, 31, 0x35EC84u);
    ctx->pc = 0x35EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC7Cu;
    // 0x35ec80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35EC7Cu, 0x35EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EC84u;
label_35ec84:
    // 0x35ec84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35ec84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec88: 0xc0a4904  jal         func_292410
    ctx->pc = 0x35EC88u;
    SET_GPR_U32(ctx, 31, 0x35EC90u);
    ctx->pc = 0x35EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC88u;
    // 0x35ec8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292410u, 0x35EC88u, 0x35EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EC90u;
label_35ec90:
    // 0x35ec90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35ec90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35ec94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ec94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35ec98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ec9c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35ec9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35eca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35eca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35eca4: 0x3e00008  jr          $ra
    ctx->pc = 0x35ECA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ECA4u;
        // 0x35eca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ECA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ECACu;
    // 0x35ecac: 0x0  nop
    ctx->pc = 0x35ecacu;
    // NOP
    ctx->pc = 0x35ecb0u;
}
