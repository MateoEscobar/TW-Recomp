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

// Function: sub_00284280
// Address: 0x284280 - 0x284340
void sub_00284280_0x284280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284280_0x284280");
#endif

    switch (ctx->pc) {
        case 0x2842b4u: goto label_2842b4;
        case 0x2842c4u: goto label_2842c4;
        case 0x2842ecu: goto label_2842ec;
        case 0x284300u: goto label_284300;
        case 0x284328u: goto label_284328;
        default: break;
    }

    ctx->pc = 0x284280u;

    // 0x284280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284284: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x284284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284288: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x284288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28428c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28428cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x284294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x284294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28429c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x28429cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x2842a0: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x2842a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2842a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2842a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2842a8: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x2842a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x2842ac: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x2842ACu;
    SET_GPR_U32(ctx, 31, 0x2842B4u);
    ctx->pc = 0x2842B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2842ACu;
    // 0x2842b0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2842ACu, 0x2842B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2842B4u;
label_2842b4:
    // 0x2842b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2842b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2842b8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2842b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2842bc: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x2842BCu;
    SET_GPR_U32(ctx, 31, 0x2842C4u);
    ctx->pc = 0x2842C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2842BCu;
    // 0x2842c0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x2842BCu, 0x2842C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2842C4u;
label_2842c4:
    // 0x2842c4: 0x820301b0  lb          $v1, 0x1B0($s0)
    ctx->pc = 0x2842c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2842c8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2842c8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2842cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2842CCu;
    {
        const bool branch_taken_0x2842cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2842D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2842CCu;
        // 0x2842d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842cc) {
            ctx->pc = 0x2842E4u;
            goto label_2842e4;
        }
    }
    ctx->pc = 0x2842D4u;
    // 0x2842d4: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x2842d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x2842d8: 0x90620154  lbu         $v0, 0x154($v1)
    ctx->pc = 0x2842d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x2842dc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2842dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2842e0: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x2842e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2842e4:
    // 0x2842e4: 0xc08bad0  jal         func_22EB40
    ctx->pc = 0x2842E4u;
    SET_GPR_U32(ctx, 31, 0x2842ECu);
    ctx->pc = 0x2842E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2842E4u;
    // 0x2842e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB40u, 0x2842E4u, 0x2842ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2842ECu;
label_2842ec:
    // 0x2842ec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2842ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2842f0: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x2842f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x2842f4: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x2842f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x2842f8: 0xc06ca28  jal         func_1B28A0
    ctx->pc = 0x2842F8u;
    SET_GPR_U32(ctx, 31, 0x284300u);
    ctx->pc = 0x2842FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2842F8u;
    // 0x2842fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28A0u, 0x2842F8u, 0x284300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284300u;
label_284300:
    // 0x284300: 0x820301b0  lb          $v1, 0x1B0($s0)
    ctx->pc = 0x284300u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x284304: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x284304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284308: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284308u;
    {
        const bool branch_taken_0x284308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284308u;
        // 0x28430c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284308) {
            ctx->pc = 0x284328u;
            goto label_284328;
        }
    }
    ctx->pc = 0x284310u;
    // 0x284310: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x284310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x284314: 0x2442deb8  addiu       $v0, $v0, -0x2148
    ctx->pc = 0x284314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x284318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28431c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x284320: 0xc062df4  jal         func_18B7D0
    ctx->pc = 0x284320u;
    SET_GPR_U32(ctx, 31, 0x284328u);
    ctx->pc = 0x284324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284320u;
    // 0x284324: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B7D0u, 0x284320u, 0x284328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284328u;
label_284328:
    // 0x284328: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x284328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28432c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28432cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284334: 0x3e00008  jr          $ra
    ctx->pc = 0x284334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284334u;
        // 0x284338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28433Cu;
    // 0x28433c: 0x0  nop
    ctx->pc = 0x28433cu;
    // NOP
    ctx->pc = 0x284340u;
}
