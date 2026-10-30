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

// Function: sub_003ECA88
// Address: 0x3eca88 - 0x3eccd8
void sub_003ECA88_0x3eca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ECA88_0x3eca88");
#endif

    switch (ctx->pc) {
        case 0x3eca88u: goto label_3eca88;
        case 0x3eca8cu: goto label_3eca8c;
        case 0x3eca90u: goto label_3eca90;
        case 0x3eca94u: goto label_3eca94;
        case 0x3eca98u: goto label_3eca98;
        case 0x3eca9cu: goto label_3eca9c;
        case 0x3ecaa0u: goto label_3ecaa0;
        case 0x3ecaa4u: goto label_3ecaa4;
        case 0x3ecaa8u: goto label_3ecaa8;
        case 0x3ecaacu: goto label_3ecaac;
        case 0x3ecab0u: goto label_3ecab0;
        case 0x3ecab4u: goto label_3ecab4;
        case 0x3ecab8u: goto label_3ecab8;
        case 0x3ecabcu: goto label_3ecabc;
        case 0x3ecac0u: goto label_3ecac0;
        case 0x3ecac4u: goto label_3ecac4;
        case 0x3ecac8u: goto label_3ecac8;
        case 0x3ecaccu: goto label_3ecacc;
        case 0x3ecad0u: goto label_3ecad0;
        case 0x3ecad4u: goto label_3ecad4;
        case 0x3ecad8u: goto label_3ecad8;
        case 0x3ecadcu: goto label_3ecadc;
        case 0x3ecae0u: goto label_3ecae0;
        case 0x3ecae4u: goto label_3ecae4;
        case 0x3ecae8u: goto label_3ecae8;
        case 0x3ecaecu: goto label_3ecaec;
        case 0x3ecaf0u: goto label_3ecaf0;
        case 0x3ecaf4u: goto label_3ecaf4;
        case 0x3ecaf8u: goto label_3ecaf8;
        case 0x3ecafcu: goto label_3ecafc;
        case 0x3ecb00u: goto label_3ecb00;
        case 0x3ecb04u: goto label_3ecb04;
        case 0x3ecb08u: goto label_3ecb08;
        case 0x3ecb0cu: goto label_3ecb0c;
        case 0x3ecb10u: goto label_3ecb10;
        case 0x3ecb14u: goto label_3ecb14;
        case 0x3ecb18u: goto label_3ecb18;
        case 0x3ecb1cu: goto label_3ecb1c;
        case 0x3ecb20u: goto label_3ecb20;
        case 0x3ecb24u: goto label_3ecb24;
        case 0x3ecb28u: goto label_3ecb28;
        case 0x3ecb2cu: goto label_3ecb2c;
        case 0x3ecb30u: goto label_3ecb30;
        case 0x3ecb34u: goto label_3ecb34;
        case 0x3ecb38u: goto label_3ecb38;
        case 0x3ecb3cu: goto label_3ecb3c;
        case 0x3ecb40u: goto label_3ecb40;
        case 0x3ecb44u: goto label_3ecb44;
        case 0x3ecb48u: goto label_3ecb48;
        case 0x3ecb4cu: goto label_3ecb4c;
        case 0x3ecb50u: goto label_3ecb50;
        case 0x3ecb54u: goto label_3ecb54;
        case 0x3ecb58u: goto label_3ecb58;
        case 0x3ecb5cu: goto label_3ecb5c;
        case 0x3ecb60u: goto label_3ecb60;
        case 0x3ecb64u: goto label_3ecb64;
        case 0x3ecb68u: goto label_3ecb68;
        case 0x3ecb6cu: goto label_3ecb6c;
        case 0x3ecb70u: goto label_3ecb70;
        case 0x3ecb74u: goto label_3ecb74;
        case 0x3ecb78u: goto label_3ecb78;
        case 0x3ecb7cu: goto label_3ecb7c;
        case 0x3ecb80u: goto label_3ecb80;
        case 0x3ecb84u: goto label_3ecb84;
        case 0x3ecb88u: goto label_3ecb88;
        case 0x3ecb8cu: goto label_3ecb8c;
        case 0x3ecb90u: goto label_3ecb90;
        case 0x3ecb94u: goto label_3ecb94;
        case 0x3ecb98u: goto label_3ecb98;
        case 0x3ecb9cu: goto label_3ecb9c;
        case 0x3ecba0u: goto label_3ecba0;
        case 0x3ecba4u: goto label_3ecba4;
        case 0x3ecba8u: goto label_3ecba8;
        case 0x3ecbacu: goto label_3ecbac;
        case 0x3ecbb0u: goto label_3ecbb0;
        case 0x3ecbb4u: goto label_3ecbb4;
        case 0x3ecbb8u: goto label_3ecbb8;
        case 0x3ecbbcu: goto label_3ecbbc;
        case 0x3ecbc0u: goto label_3ecbc0;
        case 0x3ecbc4u: goto label_3ecbc4;
        case 0x3ecbc8u: goto label_3ecbc8;
        case 0x3ecbccu: goto label_3ecbcc;
        case 0x3ecbd0u: goto label_3ecbd0;
        case 0x3ecbd4u: goto label_3ecbd4;
        case 0x3ecbd8u: goto label_3ecbd8;
        case 0x3ecbdcu: goto label_3ecbdc;
        case 0x3ecbe0u: goto label_3ecbe0;
        case 0x3ecbe4u: goto label_3ecbe4;
        case 0x3ecbe8u: goto label_3ecbe8;
        case 0x3ecbecu: goto label_3ecbec;
        case 0x3ecbf0u: goto label_3ecbf0;
        case 0x3ecbf4u: goto label_3ecbf4;
        case 0x3ecbf8u: goto label_3ecbf8;
        case 0x3ecbfcu: goto label_3ecbfc;
        case 0x3ecc00u: goto label_3ecc00;
        case 0x3ecc04u: goto label_3ecc04;
        case 0x3ecc08u: goto label_3ecc08;
        case 0x3ecc0cu: goto label_3ecc0c;
        case 0x3ecc10u: goto label_3ecc10;
        case 0x3ecc14u: goto label_3ecc14;
        case 0x3ecc18u: goto label_3ecc18;
        case 0x3ecc1cu: goto label_3ecc1c;
        case 0x3ecc20u: goto label_3ecc20;
        case 0x3ecc24u: goto label_3ecc24;
        case 0x3ecc28u: goto label_3ecc28;
        case 0x3ecc2cu: goto label_3ecc2c;
        case 0x3ecc30u: goto label_3ecc30;
        case 0x3ecc34u: goto label_3ecc34;
        case 0x3ecc38u: goto label_3ecc38;
        case 0x3ecc3cu: goto label_3ecc3c;
        case 0x3ecc40u: goto label_3ecc40;
        case 0x3ecc44u: goto label_3ecc44;
        case 0x3ecc48u: goto label_3ecc48;
        case 0x3ecc4cu: goto label_3ecc4c;
        case 0x3ecc50u: goto label_3ecc50;
        case 0x3ecc54u: goto label_3ecc54;
        case 0x3ecc58u: goto label_3ecc58;
        case 0x3ecc5cu: goto label_3ecc5c;
        case 0x3ecc60u: goto label_3ecc60;
        case 0x3ecc64u: goto label_3ecc64;
        case 0x3ecc68u: goto label_3ecc68;
        case 0x3ecc6cu: goto label_3ecc6c;
        case 0x3ecc70u: goto label_3ecc70;
        case 0x3ecc74u: goto label_3ecc74;
        case 0x3ecc78u: goto label_3ecc78;
        case 0x3ecc7cu: goto label_3ecc7c;
        case 0x3ecc80u: goto label_3ecc80;
        case 0x3ecc84u: goto label_3ecc84;
        case 0x3ecc88u: goto label_3ecc88;
        case 0x3ecc8cu: goto label_3ecc8c;
        case 0x3ecc90u: goto label_3ecc90;
        case 0x3ecc94u: goto label_3ecc94;
        case 0x3ecc98u: goto label_3ecc98;
        case 0x3ecc9cu: goto label_3ecc9c;
        case 0x3ecca0u: goto label_3ecca0;
        case 0x3ecca4u: goto label_3ecca4;
        case 0x3ecca8u: goto label_3ecca8;
        case 0x3eccacu: goto label_3eccac;
        case 0x3eccb0u: goto label_3eccb0;
        case 0x3eccb4u: goto label_3eccb4;
        case 0x3eccb8u: goto label_3eccb8;
        case 0x3eccbcu: goto label_3eccbc;
        case 0x3eccc0u: goto label_3eccc0;
        case 0x3eccc4u: goto label_3eccc4;
        case 0x3eccc8u: goto label_3eccc8;
        case 0x3eccccu: goto label_3ecccc;
        case 0x3eccd0u: goto label_3eccd0;
        case 0x3eccd4u: goto label_3eccd4;
        default: break;
    }

    ctx->pc = 0x3eca88u;

label_3eca88:
    // 0x3eca88: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3eca88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3eca8c:
    // 0x3eca8c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3eca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3eca90:
    // 0x3eca90: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3eca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3eca94:
    // 0x3eca94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3eca94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eca98:
    // 0x3eca98: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3eca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3eca9c:
    // 0x3eca9c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3eca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3ecaa0:
    // 0x3ecaa0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3ecaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3ecaa4:
    // 0x3ecaa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ecaa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ecaa8:
    // 0x3ecaa8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ecaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3ecaac:
    // 0x3ecaac: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3ecaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3ecab0:
    // 0x3ecab0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3ecab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3ecab4:
    // 0x3ecab4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3ecab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_3ecab8:
    // 0x3ecab8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3ecab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3ecabc:
    // 0x3ecabc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ecabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ecac0:
    // 0x3ecac0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3ecac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ecac4:
    // 0x3ecac4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ecac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ecac8:
    // 0x3ecac8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ecac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ecacc:
    // 0x3ecacc: 0x40f809  jalr        $v0
label_3ecad0:
    if (ctx->pc == 0x3ECAD0u) {
        ctx->pc = 0x3ECAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECACCu;
        // 0x3ecad0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECAD4u;
        goto label_3ecad4;
    }
    ctx->pc = 0x3ECACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ECAD4u);
        ctx->pc = 0x3ECAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECACCu;
        // 0x3ecad0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECACCu, 0x3ECAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ECAD4u;
label_3ecad4:
    // 0x3ecad4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ecad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ecad8:
    // 0x3ecad8: 0xc0ea13a  jal         func_3A84E8
label_3ecadc:
    if (ctx->pc == 0x3ECADCu) {
        ctx->pc = 0x3ECADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAD8u;
        // 0x3ecadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECAE0u;
        goto label_3ecae0;
    }
    ctx->pc = 0x3ECAD8u;
    SET_GPR_U32(ctx, 31, 0x3ECAE0u);
    ctx->pc = 0x3ECADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECAD8u;
    // 0x3ecadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3ECAD8u, 0x3ECAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECAE0u;
label_3ecae0:
    // 0x3ecae0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ecae0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ecae4:
    // 0x3ecae4: 0xc0ea146  jal         func_3A8518
label_3ecae8:
    if (ctx->pc == 0x3ECAE8u) {
        ctx->pc = 0x3ECAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAE4u;
        // 0x3ecae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECAECu;
        goto label_3ecaec;
    }
    ctx->pc = 0x3ECAE4u;
    SET_GPR_U32(ctx, 31, 0x3ECAECu);
    ctx->pc = 0x3ECAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECAE4u;
    // 0x3ecae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ECAE4u, 0x3ECAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECAECu;
label_3ecaec:
    // 0x3ecaec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ecaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ecaf0:
    // 0x3ecaf0: 0xc0ea146  jal         func_3A8518
label_3ecaf4:
    if (ctx->pc == 0x3ECAF4u) {
        ctx->pc = 0x3ECAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAF0u;
        // 0x3ecaf4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECAF8u;
        goto label_3ecaf8;
    }
    ctx->pc = 0x3ECAF0u;
    SET_GPR_U32(ctx, 31, 0x3ECAF8u);
    ctx->pc = 0x3ECAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECAF0u;
    // 0x3ecaf4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ECAF0u, 0x3ECAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECAF8u;
label_3ecaf8:
    // 0x3ecaf8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ecaf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ecafc:
    // 0x3ecafc: 0xc0ea146  jal         func_3A8518
label_3ecb00:
    if (ctx->pc == 0x3ECB00u) {
        ctx->pc = 0x3ECB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAFCu;
        // 0x3ecb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECB04u;
        goto label_3ecb04;
    }
    ctx->pc = 0x3ECAFCu;
    SET_GPR_U32(ctx, 31, 0x3ECB04u);
    ctx->pc = 0x3ECB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECAFCu;
    // 0x3ecb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ECAFCu, 0x3ECB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECB04u;
label_3ecb04:
    // 0x3ecb04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ecb04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ecb08:
    // 0x3ecb08: 0xc0ea146  jal         func_3A8518
label_3ecb0c:
    if (ctx->pc == 0x3ECB0Cu) {
        ctx->pc = 0x3ECB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB08u;
        // 0x3ecb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECB10u;
        goto label_3ecb10;
    }
    ctx->pc = 0x3ECB08u;
    SET_GPR_U32(ctx, 31, 0x3ECB10u);
    ctx->pc = 0x3ECB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECB08u;
    // 0x3ecb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ECB08u, 0x3ECB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECB10u;
label_3ecb10:
    // 0x3ecb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ecb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ecb14:
    // 0x3ecb14: 0xc0ea146  jal         func_3A8518
label_3ecb18:
    if (ctx->pc == 0x3ECB18u) {
        ctx->pc = 0x3ECB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB14u;
        // 0x3ecb18: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECB1Cu;
        goto label_3ecb1c;
    }
    ctx->pc = 0x3ECB14u;
    SET_GPR_U32(ctx, 31, 0x3ECB1Cu);
    ctx->pc = 0x3ECB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECB14u;
    // 0x3ecb18: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ECB14u, 0x3ECB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECB1Cu;
label_3ecb1c:
    // 0x3ecb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ecb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ecb20:
    // 0x3ecb20: 0xc0ea146  jal         func_3A8518
label_3ecb24:
    if (ctx->pc == 0x3ECB24u) {
        ctx->pc = 0x3ECB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB20u;
        // 0x3ecb24: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECB28u;
        goto label_3ecb28;
    }
    ctx->pc = 0x3ECB20u;
    SET_GPR_U32(ctx, 31, 0x3ECB28u);
    ctx->pc = 0x3ECB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECB20u;
    // 0x3ecb24: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ECB20u, 0x3ECB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECB28u;
label_3ecb28:
    // 0x3ecb28: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3ecb28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ecb2c:
    // 0x3ecb2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ecb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ecb30:
    // 0x3ecb30: 0xc0ea12a  jal         func_3A84A8
label_3ecb34:
    if (ctx->pc == 0x3ECB34u) {
        ctx->pc = 0x3ECB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB30u;
        // 0x3ecb34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECB38u;
        goto label_3ecb38;
    }
    ctx->pc = 0x3ECB30u;
    SET_GPR_U32(ctx, 31, 0x3ECB38u);
    ctx->pc = 0x3ECB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECB30u;
    // 0x3ecb34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ECB30u, 0x3ECB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECB38u;
label_3ecb38:
    // 0x3ecb38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ecb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ecb3c:
    // 0x3ecb3c: 0xc0e858c  jal         func_3A1630
label_3ecb40:
    if (ctx->pc == 0x3ECB40u) {
        ctx->pc = 0x3ECB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB3Cu;
        // 0x3ecb40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECB44u;
        goto label_3ecb44;
    }
    ctx->pc = 0x3ECB3Cu;
    SET_GPR_U32(ctx, 31, 0x3ECB44u);
    ctx->pc = 0x3ECB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECB3Cu;
    // 0x3ecb40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3ECB3Cu, 0x3ECB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECB44u;
label_3ecb44:
    // 0x3ecb44: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3ecb44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ecb48:
    // 0x3ecb48: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3ecb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_3ecb4c:
    // 0x3ecb4c: 0x2822824  and         $a1, $s4, $v0
    ctx->pc = 0x3ecb4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_3ecb50:
    // 0x3ecb50: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3ecb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3ecb54:
    // 0x3ecb54: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x3ecb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
label_3ecb58:
    // 0x3ecb58: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3ecb58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3ecb5c:
    // 0x3ecb5c: 0x7e640010  sq          $a0, 0x10($s3)
    ctx->pc = 0x3ecb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 4));
label_3ecb60:
    // 0x3ecb60: 0xae7100c4  sw          $s1, 0xC4($s3)
    ctx->pc = 0x3ecb60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 17));
label_3ecb64:
    // 0x3ecb64: 0xe67400c0  swc1        $f20, 0xC0($s3)
    ctx->pc = 0x3ecb64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_3ecb68:
    // 0x3ecb68: 0xae6000bc  sw          $zero, 0xBC($s3)
    ctx->pc = 0x3ecb68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
label_3ecb6c:
    // 0x3ecb6c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_3ecb70:
    if (ctx->pc == 0x3ECB70u) {
        ctx->pc = 0x3ECB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB6Cu;
        // 0x3ecb70: 0xae6000b0  sw          $zero, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECB74u;
        goto label_3ecb74;
    }
    ctx->pc = 0x3ECB6Cu;
    {
        const bool branch_taken_0x3ecb6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3ECB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB6Cu;
        // 0x3ecb70: 0xae6000b0  sw          $zero, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecb6c) {
            ctx->pc = 0x3ECB88u;
            goto label_3ecb88;
        }
    }
    ctx->pc = 0x3ECB74u;
label_3ecb74:
    // 0x3ecb74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3ecb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ecb78:
    // 0x3ecb78: 0x0  nop
    ctx->pc = 0x3ecb78u;
    // NOP
label_3ecb7c:
    // 0x3ecb7c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3ecb7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3ecb80:
    // 0x3ecb80: 0x10000009  b           . + 4 + (0x9 << 2)
label_3ecb84:
    if (ctx->pc == 0x3ECB84u) {
        ctx->pc = 0x3ECB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB80u;
        // 0x3ecb84: 0x141402  srl         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECB88u;
        goto label_3ecb88;
    }
    ctx->pc = 0x3ECB80u;
    {
        const bool branch_taken_0x3ecb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB80u;
        // 0x3ecb84: 0x141402  srl         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecb80) {
            ctx->pc = 0x3ECBA8u;
            goto label_3ecba8;
        }
    }
    ctx->pc = 0x3ECB88u;
label_3ecb88:
    // 0x3ecb88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ecb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ecb8c:
    // 0x3ecb8c: 0x51e42  srl         $v1, $a1, 25
    ctx->pc = 0x3ecb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 25));
label_3ecb90:
    // 0x3ecb90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ecb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ecb94:
    // 0x3ecb94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3ecb94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ecb98:
    // 0x3ecb98: 0x0  nop
    ctx->pc = 0x3ecb98u;
    // NOP
label_3ecb9c:
    // 0x3ecb9c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3ecb9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3ecba0:
    // 0x3ecba0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3ecba0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3ecba4:
    // 0x3ecba4: 0x141402  srl         $v0, $s4, 16
    ctx->pc = 0x3ecba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 16));
label_3ecba8:
    // 0x3ecba8: 0x3283ff00  andi        $v1, $s4, 0xFF00
    ctx->pc = 0x3ecba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65280);
label_3ecbac:
    // 0x3ecbac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ecbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3ecbb0:
    // 0x3ecbb0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3ecbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_3ecbb4:
    // 0x3ecbb4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3ecbb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3ecbb8:
    // 0x3ecbb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ecbb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ecbbc:
    // 0x3ecbbc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3ecbbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3ecbc0:
    // 0x3ecbc0: 0x0  nop
    ctx->pc = 0x3ecbc0u;
    // NOP
label_3ecbc4:
    // 0x3ecbc4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3ecbc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3ecbc8:
    // 0x3ecbc8: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3ecbc8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_3ecbcc:
    // 0x3ecbcc: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x3ecbccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_3ecbd0:
    // 0x3ecbd0: 0x0  nop
    ctx->pc = 0x3ecbd0u;
    // NOP
label_3ecbd4:
    // 0x3ecbd4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3ecbd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_3ecbd8:
    // 0x3ecbd8: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x3ecbd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_3ecbdc:
    // 0x3ecbdc: 0x44971800  mtc1        $s7, $f3
    ctx->pc = 0x3ecbdcu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3ecbe0:
    // 0x3ecbe0: 0x0  nop
    ctx->pc = 0x3ecbe0u;
    // NOP
label_3ecbe4:
    // 0x3ecbe4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3ecbe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3ecbe8:
    // 0x3ecbe8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ecbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ecbec:
    // 0x3ecbec: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3ecbecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3ecbf0:
    // 0x3ecbf0: 0x8c46b734  lw          $a2, -0x48CC($v0)
    ctx->pc = 0x3ecbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_3ecbf4:
    // 0x3ecbf4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3ecbf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3ecbf8:
    // 0x3ecbf8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ecbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ecbfc:
    // 0x3ecbfc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ecbfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ecc00:
    // 0x3ecc00: 0x0  nop
    ctx->pc = 0x3ecc00u;
    // NOP
label_3ecc04:
    // 0x3ecc04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ecc04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ecc08:
    // 0x3ecc08: 0xae55000c  sw          $s5, 0xC($s2)
    ctx->pc = 0x3ecc08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 21));
label_3ecc0c:
    // 0x3ecc0c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3ecc0cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3ecc10:
    // 0x3ecc10: 0xae540010  sw          $s4, 0x10($s2)
    ctx->pc = 0x3ecc10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 20));
label_3ecc14:
    // 0x3ecc14: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x3ecc14u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_3ecc18:
    // 0x3ecc18: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x3ecc18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
label_3ecc1c:
    // 0x3ecc1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3ecc1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3ecc20:
    // 0x3ecc20: 0xae560008  sw          $s6, 0x8($s2)
    ctx->pc = 0x3ecc20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 22));
label_3ecc24:
    // 0x3ecc24: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3ecc24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3ecc28:
    // 0x3ecc28: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x3ecc28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_3ecc2c:
    // 0x3ecc2c: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ecc2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ecc30:
    // 0x3ecc30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ecc30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3ecc34:
    // 0x3ecc34: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ecc34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ecc38:
    // 0x3ecc38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3ecc38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3ecc3c:
    // 0x3ecc3c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3ecc3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_3ecc40:
    // 0x3ecc40: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ecc40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ecc44:
    // 0x3ecc44: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3ecc44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3ecc48:
    // 0x3ecc48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ecc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ecc4c:
    // 0x3ecc4c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3ecc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_3ecc50:
    // 0x3ecc50: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3ecc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_3ecc54:
    // 0x3ecc54: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ecc54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ecc58:
    // 0x3ecc58: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3ecc58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3ecc5c:
    // 0x3ecc5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ecc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ecc60:
    // 0x3ecc60: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3ecc60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3ecc64:
    // 0x3ecc64: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3ecc64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_3ecc68:
    // 0x3ecc68: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3ecc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3ecc6c:
    // 0x3ecc6c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3ecc6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3ecc70:
    // 0x3ecc70: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x3ecc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3ecc74:
    // 0x3ecc74: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x3ecc74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_3ecc78:
    // 0x3ecc78: 0x8cc20048  lw          $v0, 0x48($a2)
    ctx->pc = 0x3ecc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
label_3ecc7c:
    // 0x3ecc7c: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_3ecc80:
    if (ctx->pc == 0x3ECC80u) {
        ctx->pc = 0x3ECC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC7Cu;
        // 0x3ecc80: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECC84u;
        goto label_3ecc84;
    }
    ctx->pc = 0x3ECC7Cu;
    {
        const bool branch_taken_0x3ecc7c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC7Cu;
        // 0x3ecc80: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc7c) {
            ctx->pc = 0x3ECC94u;
            goto label_3ecc94;
        }
    }
    ctx->pc = 0x3ECC84u;
label_3ecc84:
    // 0x3ecc84: 0xae5e001c  sw          $fp, 0x1C($s2)
    ctx->pc = 0x3ecc84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 30));
label_3ecc88:
    // 0x3ecc88: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3ecc88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3ecc8c:
    // 0x3ecc8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ecc90:
    if (ctx->pc == 0x3ECC90u) {
        ctx->pc = 0x3ECC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC8Cu;
        // 0x3ecc90: 0xae6300b4  sw          $v1, 0xB4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECC94u;
        goto label_3ecc94;
    }
    ctx->pc = 0x3ECC8Cu;
    {
        const bool branch_taken_0x3ecc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC8Cu;
        // 0x3ecc90: 0xae6300b4  sw          $v1, 0xB4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc8c) {
            ctx->pc = 0x3ECCA0u;
            goto label_3ecca0;
        }
    }
    ctx->pc = 0x3ECC94u;
label_3ecc94:
    // 0x3ecc94: 0xae470004  sw          $a3, 0x4($s2)
    ctx->pc = 0x3ecc94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 7));
label_3ecc98:
    // 0x3ecc98: 0xae56001c  sw          $s6, 0x1C($s2)
    ctx->pc = 0x3ecc98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 22));
label_3ecc9c:
    // 0x3ecc9c: 0xae7400b4  sw          $s4, 0xB4($s3)
    ctx->pc = 0x3ecc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 20));
label_3ecca0:
    // 0x3ecca0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3ecca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ecca4:
    // 0x3ecca4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3ecca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ecca8:
    // 0x3ecca8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3ecca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3eccac:
    // 0x3eccac: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3eccacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3eccb0:
    // 0x3eccb0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3eccb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eccb4:
    // 0x3eccb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3eccb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3eccb8:
    // 0x3eccb8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3eccb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3eccbc:
    // 0x3eccbc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3eccbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3eccc0:
    // 0x3eccc0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3eccc0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eccc4:
    // 0x3eccc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3eccc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eccc8:
    // 0x3eccc8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3eccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ecccc:
    // 0x3ecccc: 0x3e00008  jr          $ra
label_3eccd0:
    if (ctx->pc == 0x3ECCD0u) {
        ctx->pc = 0x3ECCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECCCCu;
        // 0x3eccd0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECCD4u;
        goto label_3eccd4;
    }
    ctx->pc = 0x3ECCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECCCCu;
        // 0x3eccd0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ECCD4u;
label_3eccd4:
    // 0x3eccd4: 0x0  nop
    ctx->pc = 0x3eccd4u;
    // NOP
    ctx->pc = 0x3eccd8u;
}
