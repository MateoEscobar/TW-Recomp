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

// Function: sub_003611D0
// Address: 0x3611d0 - 0x361280
void sub_003611D0_0x3611d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003611D0_0x3611d0");
#endif

    switch (ctx->pc) {
        case 0x3611fcu: goto label_3611fc;
        case 0x361204u: goto label_361204;
        case 0x361218u: goto label_361218;
        case 0x361220u: goto label_361220;
        case 0x361234u: goto label_361234;
        case 0x361248u: goto label_361248;
        case 0x36125cu: goto label_36125c;
        default: break;
    }

    ctx->pc = 0x3611d0u;

    // 0x3611d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3611d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3611d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3611d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3611d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3611d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3611dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3611dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3611e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3611e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3611e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3611e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3611e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3611e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3611ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3611ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3611f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3611f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3611f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3611F4u;
    SET_GPR_U32(ctx, 31, 0x3611FCu);
    ctx->pc = 0x3611F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3611F4u;
    // 0x3611f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3611F4u, 0x3611FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3611FCu;
label_3611fc:
    // 0x3611fc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3611FCu;
    SET_GPR_U32(ctx, 31, 0x361204u);
    ctx->pc = 0x361200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3611FCu;
    // 0x361200: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3611FCu, 0x361204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361204u;
label_361204:
    // 0x361204: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361208: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x361208u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36120c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361210: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361210u;
    SET_GPR_U32(ctx, 31, 0x361218u);
    ctx->pc = 0x361214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361210u;
    // 0x361214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361210u, 0x361218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361218u;
label_361218:
    // 0x361218: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361218u;
    SET_GPR_U32(ctx, 31, 0x361220u);
    ctx->pc = 0x36121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361218u;
    // 0x36121c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361218u, 0x361220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361220u;
label_361220:
    // 0x361220: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x361220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361228: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x361228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36122c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36122Cu;
    SET_GPR_U32(ctx, 31, 0x361234u);
    ctx->pc = 0x361230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36122Cu;
    // 0x361230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36122Cu, 0x361234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361234u;
label_361234:
    // 0x361234: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x361234u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x361238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36123c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36123cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x361240: 0xc102488  jal         func_409220
    ctx->pc = 0x361240u;
    SET_GPR_U32(ctx, 31, 0x361248u);
    ctx->pc = 0x361244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361240u;
    // 0x361244: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x361240u, 0x361248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361248u;
label_361248:
    // 0x361248: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x361248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36124c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36124cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361250: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x361250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361254: 0xc0b923a  jal         func_2E48E8
    ctx->pc = 0x361254u;
    SET_GPR_U32(ctx, 31, 0x36125Cu);
    ctx->pc = 0x361258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361254u;
    // 0x361258: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E48E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E48E8u, 0x361254u, 0x36125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36125Cu;
label_36125c:
    // 0x36125c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36125cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361260: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361264: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x361264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x361268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36126c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x36126cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361274: 0x3e00008  jr          $ra
    ctx->pc = 0x361274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361274u;
        // 0x361278: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36127Cu;
    // 0x36127c: 0x0  nop
    ctx->pc = 0x36127cu;
    // NOP
    ctx->pc = 0x361280u;
}
