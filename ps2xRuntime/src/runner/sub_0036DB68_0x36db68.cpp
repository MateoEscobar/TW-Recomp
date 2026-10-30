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

// Function: sub_0036DB68
// Address: 0x36db68 - 0x36dbe0
void sub_0036DB68_0x36db68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DB68_0x36db68");
#endif

    switch (ctx->pc) {
        case 0x36db90u: goto label_36db90;
        case 0x36db98u: goto label_36db98;
        case 0x36dbacu: goto label_36dbac;
        case 0x36dbb4u: goto label_36dbb4;
        case 0x36dbc0u: goto label_36dbc0;
        default: break;
    }

    ctx->pc = 0x36db68u;

    // 0x36db68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36db68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36db6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36db6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36db70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36db70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36db74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36db74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36db78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36db78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36db7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36db80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36db84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36db88: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DB88u;
    SET_GPR_U32(ctx, 31, 0x36DB90u);
    ctx->pc = 0x36DB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DB88u;
    // 0x36db8c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DB88u, 0x36DB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB90u;
label_36db90:
    // 0x36db90: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36DB90u;
    SET_GPR_U32(ctx, 31, 0x36DB98u);
    ctx->pc = 0x36DB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DB90u;
    // 0x36db94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36DB90u, 0x36DB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB98u;
label_36db98:
    // 0x36db98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36db98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36db9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36dba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dba4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DBA4u;
    SET_GPR_U32(ctx, 31, 0x36DBACu);
    ctx->pc = 0x36DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DBA4u;
    // 0x36dba8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DBA4u, 0x36DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DBACu;
label_36dbac:
    // 0x36dbac: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36DBACu;
    SET_GPR_U32(ctx, 31, 0x36DBB4u);
    ctx->pc = 0x36DBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DBACu;
    // 0x36dbb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36DBACu, 0x36DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DBB4u;
label_36dbb4:
    // 0x36dbb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36dbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dbb8: 0xc0e89a2  jal         func_3A2688
    ctx->pc = 0x36DBB8u;
    SET_GPR_U32(ctx, 31, 0x36DBC0u);
    ctx->pc = 0x36DBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DBB8u;
    // 0x36dbbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2688u, 0x36DBB8u, 0x36DBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DBC0u;
label_36dbc0:
    // 0x36dbc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36dbc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36dbc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36dbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dbc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36dbc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36dbcc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36dbccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dbd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36dbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x36DBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBD4u;
        // 0x36dbd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DBDCu;
    // 0x36dbdc: 0x0  nop
    ctx->pc = 0x36dbdcu;
    // NOP
    ctx->pc = 0x36dbe0u;
}
