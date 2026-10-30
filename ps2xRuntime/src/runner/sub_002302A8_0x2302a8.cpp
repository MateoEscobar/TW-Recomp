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

// Function: sub_002302A8
// Address: 0x2302a8 - 0x230328
void sub_002302A8_0x2302a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002302A8_0x2302a8");
#endif

    switch (ctx->pc) {
        case 0x2302c4u: goto label_2302c4;
        case 0x2302d4u: goto label_2302d4;
        case 0x2302e4u: goto label_2302e4;
        case 0x23030cu: goto label_23030c;
        default: break;
    }

    ctx->pc = 0x2302a8u;

    // 0x2302a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2302a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2302ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2302acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2302b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2302b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302b4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2302B4u;
    {
        const bool branch_taken_0x2302b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302B4u;
        // 0x2302b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302b4) {
            ctx->pc = 0x230318u;
            goto label_230318;
        }
    }
    ctx->pc = 0x2302BCu;
    // 0x2302bc: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x2302BCu;
    SET_GPR_U32(ctx, 31, 0x2302C4u);
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2302BCu, 0x2302C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302C4u;
label_2302c4:
    // 0x2302c4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2302C4u;
    {
        const bool branch_taken_0x2302c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2302c4) {
            ctx->pc = 0x2302C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2302C4u;
            // 0x2302c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23031Cu;
            goto label_23031c;
        }
    }
    ctx->pc = 0x2302CCu;
    // 0x2302cc: 0xc089f86  jal         func_227E18
    ctx->pc = 0x2302CCu;
    SET_GPR_U32(ctx, 31, 0x2302D4u);
    ctx->pc = 0x2302D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2302CCu;
    // 0x2302d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x2302CCu, 0x2302D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302D4u;
label_2302d4:
    // 0x2302d4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2302D4u;
    {
        const bool branch_taken_0x2302d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2302d4) {
            ctx->pc = 0x2302D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2302D4u;
            // 0x2302d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23031Cu;
            goto label_23031c;
        }
    }
    ctx->pc = 0x2302DCu;
    // 0x2302dc: 0xc0960cc  jal         func_258330
    ctx->pc = 0x2302DCu;
    SET_GPR_U32(ctx, 31, 0x2302E4u);
    ctx->pc = 0x2302E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2302DCu;
    // 0x2302e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258330u, 0x2302DCu, 0x2302E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302E4u;
label_2302e4:
    // 0x2302e4: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2302e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2302e8: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2302e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2302ec: 0x8e0600d4  lw          $a2, 0xD4($s0)
    ctx->pc = 0x2302ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2302f0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2302f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2302f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2302f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2302f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2302f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302fc: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2302fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    // 0x230300: 0xa4c50118  sh          $a1, 0x118($a2)
    ctx->pc = 0x230300u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 280), (uint16_t)GPR_U32(ctx, 5));
    // 0x230304: 0xc0899f2  jal         func_2267C8
    ctx->pc = 0x230304u;
    SET_GPR_U32(ctx, 31, 0x23030Cu);
    ctx->pc = 0x230308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230304u;
    // 0x230308: 0xa60505d2  sh          $a1, 0x5D2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1490), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267C8u, 0x230304u, 0x23030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23030Cu;
label_23030c:
    // 0x23030c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x23030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x230310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230314: 0xa4620144  sh          $v0, 0x144($v1)
    ctx->pc = 0x230314u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 324), (uint16_t)GPR_U32(ctx, 2));
label_230318:
    // 0x230318: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x230318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23031c:
    // 0x23031c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23031cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230320: 0x3e00008  jr          $ra
    ctx->pc = 0x230320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230320u;
        // 0x230324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230328u;
}
