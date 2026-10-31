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

// Function: sub_004DCE18
// Address: 0x4dce18 - 0x4dce88
void sub_004DCE18_0x4dce18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCE18_0x4dce18");
#endif

    switch (ctx->pc) {
        case 0x4dce18u: goto label_4dce18;
        case 0x4dce1cu: goto label_4dce1c;
        case 0x4dce20u: goto label_4dce20;
        case 0x4dce24u: goto label_4dce24;
        case 0x4dce28u: goto label_4dce28;
        case 0x4dce2cu: goto label_4dce2c;
        case 0x4dce30u: goto label_4dce30;
        case 0x4dce34u: goto label_4dce34;
        case 0x4dce38u: goto label_4dce38;
        case 0x4dce3cu: goto label_4dce3c;
        case 0x4dce40u: goto label_4dce40;
        case 0x4dce44u: goto label_4dce44;
        case 0x4dce48u: goto label_4dce48;
        case 0x4dce4cu: goto label_4dce4c;
        case 0x4dce50u: goto label_4dce50;
        case 0x4dce54u: goto label_4dce54;
        case 0x4dce58u: goto label_4dce58;
        case 0x4dce5cu: goto label_4dce5c;
        case 0x4dce60u: goto label_4dce60;
        case 0x4dce64u: goto label_4dce64;
        case 0x4dce68u: goto label_4dce68;
        case 0x4dce6cu: goto label_4dce6c;
        case 0x4dce70u: goto label_4dce70;
        case 0x4dce74u: goto label_4dce74;
        case 0x4dce78u: goto label_4dce78;
        case 0x4dce7cu: goto label_4dce7c;
        case 0x4dce80u: goto label_4dce80;
        case 0x4dce84u: goto label_4dce84;
        default: break;
    }

    ctx->pc = 0x4dce18u;

label_4dce18:
    // 0x4dce18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dce18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dce1c:
    // 0x4dce1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dce1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dce20:
    // 0x4dce20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dce24:
    // 0x4dce24: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4dce24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4dce28:
    // 0x4dce28: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4dce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4dce2c:
    // 0x4dce2c: 0x40f809  jalr        $v0
label_4dce30:
    if (ctx->pc == 0x4DCE30u) {
        ctx->pc = 0x4DCE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCE2Cu;
        // 0x4dce30: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCE34u;
        goto label_4dce34;
    }
    ctx->pc = 0x4DCE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DCE34u);
        ctx->pc = 0x4DCE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCE2Cu;
        // 0x4dce30: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCE2Cu, 0x4DCE34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DCE34u;
label_4dce34:
    // 0x4dce34: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x4dce34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4dce38:
    // 0x4dce38: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4dce38u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_4dce3c:
    // 0x4dce3c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_4dce40:
    if (ctx->pc == 0x4DCE40u) {
        ctx->pc = 0x4DCE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCE3Cu;
        // 0x4dce40: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCE44u;
        goto label_4dce44;
    }
    ctx->pc = 0x4DCE3Cu;
    {
        const bool branch_taken_0x4dce3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dce3c) {
            ctx->pc = 0x4DCE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DCE3Cu;
            // 0x4dce40: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DCE44u;
            goto label_4dce44;
        }
    }
    ctx->pc = 0x4DCE44u;
label_4dce44:
    // 0x4dce44: 0x1012  mflo        $v0
    ctx->pc = 0x4dce44u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_4dce48:
    // 0x4dce48: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_4dce4c:
    if (ctx->pc == 0x4DCE4Cu) {
        ctx->pc = 0x4DCE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCE48u;
        // 0x4dce4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCE50u;
        goto label_4dce50;
    }
    ctx->pc = 0x4DCE48u;
    {
        const bool branch_taken_0x4dce48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4DCE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCE48u;
        // 0x4dce4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dce48) {
            ctx->pc = 0x4DCE64u;
            goto label_4dce64;
        }
    }
    ctx->pc = 0x4DCE50u;
label_4dce50:
    // 0x4dce50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4dce50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dce54:
    // 0x4dce54: 0x0  nop
    ctx->pc = 0x4dce54u;
    // NOP
label_4dce58:
    // 0x4dce58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4dce58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4dce5c:
    // 0x4dce5c: 0x10000008  b           . + 4 + (0x8 << 2)
label_4dce60:
    if (ctx->pc == 0x4DCE60u) {
        ctx->pc = 0x4DCE64u;
        goto label_4dce64;
    }
    ctx->pc = 0x4DCE5Cu;
    {
        const bool branch_taken_0x4dce5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dce5c) {
            ctx->pc = 0x4DCE80u;
            goto label_4dce80;
        }
    }
    ctx->pc = 0x4DCE64u;
label_4dce64:
    // 0x4dce64: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4dce64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4dce68:
    // 0x4dce68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4dce68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4dce6c:
    // 0x4dce6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4dce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4dce70:
    // 0x4dce70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4dce70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dce74:
    // 0x4dce74: 0x0  nop
    ctx->pc = 0x4dce74u;
    // NOP
label_4dce78:
    // 0x4dce78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4dce78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4dce7c:
    // 0x4dce7c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4dce7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4dce80:
    // 0x4dce80: 0x3e00008  jr          $ra
label_4dce84:
    if (ctx->pc == 0x4DCE84u) {
        ctx->pc = 0x4DCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCE80u;
        // 0x4dce84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCE88u;
        goto label_fallthrough_0x4dce80;
    }
    ctx->pc = 0x4DCE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCE80u;
        // 0x4dce84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dce80:
    ctx->pc = 0x4DCE88u;
}
