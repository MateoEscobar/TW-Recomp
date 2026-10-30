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

// Function: sub_00178178
// Address: 0x178178 - 0x178208
void sub_00178178_0x178178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178178_0x178178");
#endif

    switch (ctx->pc) {
        case 0x1781a8u: goto label_1781a8;
        case 0x1781bcu: goto label_1781bc;
        case 0x1781d0u: goto label_1781d0;
        case 0x1781e4u: goto label_1781e4;
        default: break;
    }

    ctx->pc = 0x178178u;

    // 0x178178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17817c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17817cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x178180: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x178180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x178184: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x178184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178188: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x178188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17818c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17818cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178190: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x178190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178194: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x178194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17819c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x17819cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781a0: 0xc05fce0  jal         func_17F380
    ctx->pc = 0x1781A0u;
    SET_GPR_U32(ctx, 31, 0x1781A8u);
    ctx->pc = 0x1781A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781A0u;
    // 0x1781a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F380u, 0x1781A0u, 0x1781A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781A8u;
label_1781a8:
    // 0x1781a8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1781a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1781ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1781acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781b0: 0x24638b28  addiu       $v1, $v1, -0x74D8
    ctx->pc = 0x1781b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937384));
    // 0x1781b4: 0xc06610a  jal         func_198428
    ctx->pc = 0x1781B4u;
    SET_GPR_U32(ctx, 31, 0x1781BCu);
    ctx->pc = 0x1781B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781B4u;
    // 0x1781b8: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198428u, 0x1781B4u, 0x1781BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781BCu;
label_1781bc:
    // 0x1781bc: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1781bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x1781c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1781c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781c4: 0x24a583a8  addiu       $a1, $a1, -0x7C58
    ctx->pc = 0x1781c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935464));
    // 0x1781c8: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x1781C8u;
    SET_GPR_U32(ctx, 31, 0x1781D0u);
    ctx->pc = 0x1781CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781C8u;
    // 0x1781cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x1781C8u, 0x1781D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781D0u;
label_1781d0:
    // 0x1781d0: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x1781d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x1781d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1781d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781d8: 0x24a54c18  addiu       $a1, $a1, 0x4C18
    ctx->pc = 0x1781d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19480));
    // 0x1781dc: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x1781DCu;
    SET_GPR_U32(ctx, 31, 0x1781E4u);
    ctx->pc = 0x1781E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781DCu;
    // 0x1781e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x1781DCu, 0x1781E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781E4u;
label_1781e4:
    // 0x1781e4: 0xae32002c  sw          $s2, 0x2C($s1)
    ctx->pc = 0x1781e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 18));
    // 0x1781e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1781e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1781ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1781f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1781f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1781f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1781f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1781f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1781f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1781fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1781FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781FCu;
        // 0x178200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1781FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178204u;
    // 0x178204: 0x0  nop
    ctx->pc = 0x178204u;
    // NOP
    ctx->pc = 0x178208u;
}
