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

// Function: sub_003781D8
// Address: 0x3781d8 - 0x378278
void sub_003781D8_0x3781d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003781D8_0x3781d8");
#endif

    switch (ctx->pc) {
        case 0x378204u: goto label_378204;
        case 0x37820cu: goto label_37820c;
        case 0x378220u: goto label_378220;
        case 0x378228u: goto label_378228;
        case 0x37823cu: goto label_37823c;
        case 0x378244u: goto label_378244;
        case 0x378254u: goto label_378254;
        default: break;
    }

    ctx->pc = 0x3781d8u;

    // 0x3781d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3781d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3781dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3781dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3781e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3781e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3781e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3781e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3781e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3781e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3781ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3781ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3781f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3781f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3781f4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3781f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3781f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3781f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3781fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3781FCu;
    SET_GPR_U32(ctx, 31, 0x378204u);
    ctx->pc = 0x378200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3781FCu;
    // 0x378200: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3781FCu, 0x378204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378204u;
label_378204:
    // 0x378204: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378204u;
    SET_GPR_U32(ctx, 31, 0x37820Cu);
    ctx->pc = 0x378208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378204u;
    // 0x378208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378204u, 0x37820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37820Cu;
label_37820c:
    // 0x37820c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37820cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378210: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x378210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378214: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378218: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378218u;
    SET_GPR_U32(ctx, 31, 0x378220u);
    ctx->pc = 0x37821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378218u;
    // 0x37821c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378218u, 0x378220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378220u;
label_378220:
    // 0x378220: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378220u;
    SET_GPR_U32(ctx, 31, 0x378228u);
    ctx->pc = 0x378224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378220u;
    // 0x378224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378220u, 0x378228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378228u;
label_378228:
    // 0x378228: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37822c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37822cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x378230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378234: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378234u;
    SET_GPR_U32(ctx, 31, 0x37823Cu);
    ctx->pc = 0x378238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378234u;
    // 0x378238: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378234u, 0x37823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37823Cu;
label_37823c:
    // 0x37823c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37823Cu;
    SET_GPR_U32(ctx, 31, 0x378244u);
    ctx->pc = 0x378240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37823Cu;
    // 0x378240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37823Cu, 0x378244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378244u;
label_378244:
    // 0x378244: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x378244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x378248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37824c: 0xc05e5d6  jal         func_179758
    ctx->pc = 0x37824Cu;
    SET_GPR_U32(ctx, 31, 0x378254u);
    ctx->pc = 0x378250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37824Cu;
    // 0x378250: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179758u, 0x37824Cu, 0x378254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378254u;
label_378254:
    // 0x378254: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x378254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x378258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37825c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37825cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378260: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x378260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378264: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x378264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37826c: 0x3e00008  jr          $ra
    ctx->pc = 0x37826Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37826Cu;
        // 0x378270: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37826Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378274u;
    // 0x378274: 0x0  nop
    ctx->pc = 0x378274u;
    // NOP
    ctx->pc = 0x378278u;
}
