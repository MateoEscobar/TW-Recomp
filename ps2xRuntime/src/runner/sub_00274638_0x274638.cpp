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

// Function: sub_00274638
// Address: 0x274638 - 0x274710
void sub_00274638_0x274638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274638_0x274638");
#endif

    switch (ctx->pc) {
        case 0x274650u: goto label_274650;
        default: break;
    }

    ctx->pc = 0x274638u;

    // 0x274638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27463c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x274640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274648: 0xc09ce76  jal         func_2739D8
    ctx->pc = 0x274648u;
    SET_GPR_U32(ctx, 31, 0x274650u);
    ctx->pc = 0x27464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274648u;
    // 0x27464c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2739D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2739D8u, 0x274648u, 0x274650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274650u;
label_274650:
    // 0x274650: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x274650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274654: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x274654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x274658: 0x8e040518  lw          $a0, 0x518($s0)
    ctx->pc = 0x274658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x27465c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x27465cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x274660: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x274660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x274664: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x274664u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x274668: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x274668u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x27466c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x27466Cu;
    {
        const bool branch_taken_0x27466c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27466c) {
            ctx->pc = 0x2746F8u;
            goto label_2746f8;
        }
    }
    ctx->pc = 0x274674u;
    // 0x274674: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274674u;
    {
        const bool branch_taken_0x274674 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x274678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274674u;
        // 0x274678: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274674) {
            ctx->pc = 0x274690u;
            goto label_274690;
        }
    }
    ctx->pc = 0x27467Cu;
    // 0x27467c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27467cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274680: 0x0  nop
    ctx->pc = 0x274680u;
    // NOP
    // 0x274684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274688: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x274688u;
    {
        const bool branch_taken_0x274688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274688) {
            ctx->pc = 0x2746A8u;
            goto label_2746a8;
        }
    }
    ctx->pc = 0x274690u;
label_274690:
    // 0x274690: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x274690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x274694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x274694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x274698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27469c: 0x0  nop
    ctx->pc = 0x27469cu;
    // NOP
    // 0x2746a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2746a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2746a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2746a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2746a8:
    // 0x2746a8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2746A8u;
    {
        const bool branch_taken_0x2746a8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2746ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746A8u;
        // 0x2746ac: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746a8) {
            ctx->pc = 0x2746C4u;
            goto label_2746c4;
        }
    }
    ctx->pc = 0x2746B0u;
    // 0x2746b0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2746b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2746b4: 0x0  nop
    ctx->pc = 0x2746b4u;
    // NOP
    // 0x2746b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2746b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2746bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2746BCu;
    {
        const bool branch_taken_0x2746bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2746bc) {
            ctx->pc = 0x2746DCu;
            goto label_2746dc;
        }
    }
    ctx->pc = 0x2746C4u;
label_2746c4:
    // 0x2746c4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2746c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2746c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2746c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2746cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2746ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2746d0: 0x0  nop
    ctx->pc = 0x2746d0u;
    // NOP
    // 0x2746d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2746d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2746d8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2746d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2746dc:
    // 0x2746dc: 0x0  nop
    ctx->pc = 0x2746dcu;
    // NOP
    // 0x2746e0: 0x0  nop
    ctx->pc = 0x2746e0u;
    // NOP
    // 0x2746e4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2746e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2746e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2746e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2746ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2746ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2746f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2746F0u;
    {
        const bool branch_taken_0x2746f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746F0u;
        // 0x2746f4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746f0) {
            ctx->pc = 0x274700u;
            goto label_274700;
        }
    }
    ctx->pc = 0x2746F8u;
label_2746f8:
    // 0x2746f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2746f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2746fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2746fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_274700:
    // 0x274700: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x274700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274708: 0x3e00008  jr          $ra
    ctx->pc = 0x274708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274708u;
        // 0x27470c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274710u;
}
