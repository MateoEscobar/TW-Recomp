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

// Function: sub_0029CA28
// Address: 0x29ca28 - 0x29cbb8
void sub_0029CA28_0x29ca28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CA28_0x29ca28");
#endif

    switch (ctx->pc) {
        case 0x29ca28u: goto label_29ca28;
        case 0x29ca2cu: goto label_29ca2c;
        case 0x29ca30u: goto label_29ca30;
        case 0x29ca34u: goto label_29ca34;
        case 0x29ca38u: goto label_29ca38;
        case 0x29ca3cu: goto label_29ca3c;
        case 0x29ca40u: goto label_29ca40;
        case 0x29ca44u: goto label_29ca44;
        case 0x29ca48u: goto label_29ca48;
        case 0x29ca4cu: goto label_29ca4c;
        case 0x29ca50u: goto label_29ca50;
        case 0x29ca54u: goto label_29ca54;
        case 0x29ca58u: goto label_29ca58;
        case 0x29ca5cu: goto label_29ca5c;
        case 0x29ca60u: goto label_29ca60;
        case 0x29ca64u: goto label_29ca64;
        case 0x29ca68u: goto label_29ca68;
        case 0x29ca6cu: goto label_29ca6c;
        case 0x29ca70u: goto label_29ca70;
        case 0x29ca74u: goto label_29ca74;
        case 0x29ca78u: goto label_29ca78;
        case 0x29ca7cu: goto label_29ca7c;
        case 0x29ca80u: goto label_29ca80;
        case 0x29ca84u: goto label_29ca84;
        case 0x29ca88u: goto label_29ca88;
        case 0x29ca8cu: goto label_29ca8c;
        case 0x29ca90u: goto label_29ca90;
        case 0x29ca94u: goto label_29ca94;
        case 0x29ca98u: goto label_29ca98;
        case 0x29ca9cu: goto label_29ca9c;
        case 0x29caa0u: goto label_29caa0;
        case 0x29caa4u: goto label_29caa4;
        case 0x29caa8u: goto label_29caa8;
        case 0x29caacu: goto label_29caac;
        case 0x29cab0u: goto label_29cab0;
        case 0x29cab4u: goto label_29cab4;
        case 0x29cab8u: goto label_29cab8;
        case 0x29cabcu: goto label_29cabc;
        case 0x29cac0u: goto label_29cac0;
        case 0x29cac4u: goto label_29cac4;
        case 0x29cac8u: goto label_29cac8;
        case 0x29caccu: goto label_29cacc;
        case 0x29cad0u: goto label_29cad0;
        case 0x29cad4u: goto label_29cad4;
        case 0x29cad8u: goto label_29cad8;
        case 0x29cadcu: goto label_29cadc;
        case 0x29cae0u: goto label_29cae0;
        case 0x29cae4u: goto label_29cae4;
        case 0x29cae8u: goto label_29cae8;
        case 0x29caecu: goto label_29caec;
        case 0x29caf0u: goto label_29caf0;
        case 0x29caf4u: goto label_29caf4;
        case 0x29caf8u: goto label_29caf8;
        case 0x29cafcu: goto label_29cafc;
        case 0x29cb00u: goto label_29cb00;
        case 0x29cb04u: goto label_29cb04;
        case 0x29cb08u: goto label_29cb08;
        case 0x29cb0cu: goto label_29cb0c;
        case 0x29cb10u: goto label_29cb10;
        case 0x29cb14u: goto label_29cb14;
        case 0x29cb18u: goto label_29cb18;
        case 0x29cb1cu: goto label_29cb1c;
        case 0x29cb20u: goto label_29cb20;
        case 0x29cb24u: goto label_29cb24;
        case 0x29cb28u: goto label_29cb28;
        case 0x29cb2cu: goto label_29cb2c;
        case 0x29cb30u: goto label_29cb30;
        case 0x29cb34u: goto label_29cb34;
        case 0x29cb38u: goto label_29cb38;
        case 0x29cb3cu: goto label_29cb3c;
        case 0x29cb40u: goto label_29cb40;
        case 0x29cb44u: goto label_29cb44;
        case 0x29cb48u: goto label_29cb48;
        case 0x29cb4cu: goto label_29cb4c;
        case 0x29cb50u: goto label_29cb50;
        case 0x29cb54u: goto label_29cb54;
        case 0x29cb58u: goto label_29cb58;
        case 0x29cb5cu: goto label_29cb5c;
        case 0x29cb60u: goto label_29cb60;
        case 0x29cb64u: goto label_29cb64;
        case 0x29cb68u: goto label_29cb68;
        case 0x29cb6cu: goto label_29cb6c;
        case 0x29cb70u: goto label_29cb70;
        case 0x29cb74u: goto label_29cb74;
        case 0x29cb78u: goto label_29cb78;
        case 0x29cb7cu: goto label_29cb7c;
        case 0x29cb80u: goto label_29cb80;
        case 0x29cb84u: goto label_29cb84;
        case 0x29cb88u: goto label_29cb88;
        case 0x29cb8cu: goto label_29cb8c;
        case 0x29cb90u: goto label_29cb90;
        case 0x29cb94u: goto label_29cb94;
        case 0x29cb98u: goto label_29cb98;
        case 0x29cb9cu: goto label_29cb9c;
        case 0x29cba0u: goto label_29cba0;
        case 0x29cba4u: goto label_29cba4;
        case 0x29cba8u: goto label_29cba8;
        case 0x29cbacu: goto label_29cbac;
        case 0x29cbb0u: goto label_29cbb0;
        case 0x29cbb4u: goto label_29cbb4;
        default: break;
    }

    ctx->pc = 0x29ca28u;

label_29ca28:
    // 0x29ca28: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x29ca28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_29ca2c:
    // 0x29ca2c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_29ca30:
    // 0x29ca30: 0x7fb00270  sq          $s0, 0x270($sp)
    ctx->pc = 0x29ca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 16));
label_29ca34:
    // 0x29ca34: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29ca34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ca38:
    // 0x29ca38: 0x7fb30240  sq          $s3, 0x240($sp)
    ctx->pc = 0x29ca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 19));
label_29ca3c:
    // 0x29ca3c: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x29ca3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_29ca40:
    // 0x29ca40: 0x7fb50220  sq          $s5, 0x220($sp)
    ctx->pc = 0x29ca40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 21));
label_29ca44:
    // 0x29ca44: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29ca44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ca48:
    // 0x29ca48: 0x7fb70200  sq          $s7, 0x200($sp)
    ctx->pc = 0x29ca48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 23));
label_29ca4c:
    // 0x29ca4c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x29ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_29ca50:
    // 0x29ca50: 0x7fbe01f0  sq          $fp, 0x1F0($sp)
    ctx->pc = 0x29ca50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 30));
label_29ca54:
    // 0x29ca54: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x29ca54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29ca58:
    // 0x29ca58: 0xe7b40280  swc1        $f20, 0x280($sp)
    ctx->pc = 0x29ca58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_29ca5c:
    // 0x29ca5c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x29ca5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ca60:
    // 0x29ca60: 0x7fb10260  sq          $s1, 0x260($sp)
    ctx->pc = 0x29ca60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 17));
label_29ca64:
    // 0x29ca64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29ca64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29ca68:
    // 0x29ca68: 0x7fb20250  sq          $s2, 0x250($sp)
    ctx->pc = 0x29ca68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 18));
label_29ca6c:
    // 0x29ca6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29ca6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29ca70:
    // 0x29ca70: 0x7fb40230  sq          $s4, 0x230($sp)
    ctx->pc = 0x29ca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 20));
label_29ca74:
    // 0x29ca74: 0x7fb60210  sq          $s6, 0x210($sp)
    ctx->pc = 0x29ca74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 22));
label_29ca78:
    // 0x29ca78: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x29ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
label_29ca7c:
    // 0x29ca7c: 0xe7b50288  swc1        $f21, 0x288($sp)
    ctx->pc = 0x29ca7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_29ca80:
    // 0x29ca80: 0x86670092  lh          $a3, 0x92($s3)
    ctx->pc = 0x29ca80u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_29ca84:
    // 0x29ca84: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x29ca84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_29ca88:
    // 0x29ca88: 0xc089d2a  jal         func_2274A8
label_29ca8c:
    if (ctx->pc == 0x29CA8Cu) {
        ctx->pc = 0x29CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA88u;
        // 0x29ca8c: 0xf03821  addu        $a3, $a3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA90u;
        goto label_29ca90;
    }
    ctx->pc = 0x29CA88u;
    SET_GPR_U32(ctx, 31, 0x29CA90u);
    ctx->pc = 0x29CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA88u;
    // 0x29ca8c: 0xf03821  addu        $a3, $a3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x29CA88u, 0x29CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA90u;
label_29ca90:
    // 0x29ca90: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29ca90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ca94:
    // 0x29ca94: 0xc087502  jal         func_21D408
label_29ca98:
    if (ctx->pc == 0x29CA98u) {
        ctx->pc = 0x29CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA94u;
        // 0x29ca98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA9Cu;
        goto label_29ca9c;
    }
    ctx->pc = 0x29CA94u;
    SET_GPR_U32(ctx, 31, 0x29CA9Cu);
    ctx->pc = 0x29CA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA94u;
    // 0x29ca98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29CA94u, 0x29CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA9Cu;
label_29ca9c:
    // 0x29ca9c: 0xc454012c  lwc1        $f20, 0x12C($v0)
    ctx->pc = 0x29ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29caa0:
    // 0x29caa0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x29caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29caa4:
    // 0x29caa4: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x29caa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_29caa8:
    // 0x29caa8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29caac:
    if (ctx->pc == 0x29CAACu) {
        ctx->pc = 0x29CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAA8u;
        // 0x29caac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAB0u;
        goto label_29cab0;
    }
    ctx->pc = 0x29CAA8u;
    {
        const bool branch_taken_0x29caa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAA8u;
        // 0x29caac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29caa8) {
            ctx->pc = 0x29CABCu;
            goto label_29cabc;
        }
    }
    ctx->pc = 0x29CAB0u;
label_29cab0:
    // 0x29cab0: 0xc0e1a34  jal         func_3868D0
label_29cab4:
    if (ctx->pc == 0x29CAB4u) {
        ctx->pc = 0x29CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAB0u;
        // 0x29cab4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAB8u;
        goto label_29cab8;
    }
    ctx->pc = 0x29CAB0u;
    SET_GPR_U32(ctx, 31, 0x29CAB8u);
    ctx->pc = 0x29CAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CAB0u;
    // 0x29cab4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x29CAB0u, 0x29CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CAB8u;
label_29cab8:
    // 0x29cab8: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x29cab8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29cabc:
    // 0x29cabc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x29cabcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cac0:
    // 0x29cac0: 0x12a0002e  beqz        $s5, . + 4 + (0x2E << 2)
label_29cac4:
    if (ctx->pc == 0x29CAC4u) {
        ctx->pc = 0x29CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAC0u;
        // 0x29cac4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAC8u;
        goto label_29cac8;
    }
    ctx->pc = 0x29CAC0u;
    {
        const bool branch_taken_0x29cac0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAC0u;
        // 0x29cac4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cac0) {
            ctx->pc = 0x29CB7Cu;
            goto label_29cb7c;
        }
    }
    ctx->pc = 0x29CAC8u;
label_29cac8:
    // 0x29cac8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x29cac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_29cacc:
    // 0x29cacc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29caccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_29cad0:
    // 0x29cad0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x29cad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29cad4:
    // 0x29cad4: 0x0  nop
    ctx->pc = 0x29cad4u;
    // NOP
label_29cad8:
    // 0x29cad8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x29cad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29cadc:
    // 0x29cadc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29cae0:
    // 0x29cae0: 0x2e0f809  jalr        $s7
label_29cae4:
    if (ctx->pc == 0x29CAE4u) {
        ctx->pc = 0x29CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAE0u;
        // 0x29cae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAE8u;
        goto label_29cae8;
    }
    ctx->pc = 0x29CAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x29CAE8u);
        ctx->pc = 0x29CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAE0u;
        // 0x29cae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CAE0u, 0x29CAE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CAE8u;
label_29cae8:
    // 0x29cae8: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_29caec:
    if (ctx->pc == 0x29CAECu) {
        ctx->pc = 0x29CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAE8u;
        // 0x29caec: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAF0u;
        goto label_29caf0;
    }
    ctx->pc = 0x29CAE8u;
    {
        const bool branch_taken_0x29cae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cae8) {
            ctx->pc = 0x29CAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CAE8u;
            // 0x29caec: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CB70u;
            goto label_29cb70;
        }
    }
    ctx->pc = 0x29CAF0u;
label_29caf0:
    // 0x29caf0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x29caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29caf4:
    // 0x29caf4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x29caf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29caf8:
    // 0x29caf8: 0x0  nop
    ctx->pc = 0x29caf8u;
    // NOP
label_29cafc:
    // 0x29cafc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_29cb00:
    if (ctx->pc == 0x29CB00u) {
        ctx->pc = 0x29CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAFCu;
        // 0x29cb00: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB04u;
        goto label_29cb04;
    }
    ctx->pc = 0x29CAFCu;
    {
        const bool branch_taken_0x29cafc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAFCu;
        // 0x29cb00: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cafc) {
            ctx->pc = 0x29CB28u;
            goto label_29cb28;
        }
    }
    ctx->pc = 0x29CB04u;
label_29cb04:
    // 0x29cb04: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x29cb04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_29cb08:
    // 0x29cb08: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_29cb0c:
    // 0x29cb0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29cb10:
    // 0x29cb10: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x29cb10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_29cb14:
    // 0x29cb14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29cb14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_29cb18:
    // 0x29cb18: 0xc0889c4  jal         func_222710
label_29cb1c:
    if (ctx->pc == 0x29CB1Cu) {
        ctx->pc = 0x29CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB18u;
        // 0x29cb1c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB20u;
        goto label_29cb20;
    }
    ctx->pc = 0x29CB18u;
    SET_GPR_U32(ctx, 31, 0x29CB20u);
    ctx->pc = 0x29CB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB18u;
    // 0x29cb1c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222710u, 0x29CB18u, 0x29CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB20u;
label_29cb20:
    // 0x29cb20: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_29cb24:
    if (ctx->pc == 0x29CB24u) {
        ctx->pc = 0x29CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB20u;
        // 0x29cb24: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB28u;
        goto label_29cb28;
    }
    ctx->pc = 0x29CB20u;
    {
        const bool branch_taken_0x29cb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cb20) {
            ctx->pc = 0x29CB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CB20u;
            // 0x29cb24: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CB70u;
            goto label_29cb70;
        }
    }
    ctx->pc = 0x29CB28u;
label_29cb28:
    // 0x29cb28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29cb2c:
    // 0x29cb2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29cb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29cb30:
    // 0x29cb30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29cb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cb34:
    // 0x29cb34: 0xc0888a2  jal         func_222288
label_29cb38:
    if (ctx->pc == 0x29CB38u) {
        ctx->pc = 0x29CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB34u;
        // 0x29cb38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB3Cu;
        goto label_29cb3c;
    }
    ctx->pc = 0x29CB34u;
    SET_GPR_U32(ctx, 31, 0x29CB3Cu);
    ctx->pc = 0x29CB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB34u;
    // 0x29cb38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x29CB34u, 0x29CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB3Cu;
label_29cb3c:
    // 0x29cb3c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_29cb40:
    if (ctx->pc == 0x29CB40u) {
        ctx->pc = 0x29CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB3Cu;
        // 0x29cb40: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB44u;
        goto label_29cb44;
    }
    ctx->pc = 0x29CB3Cu;
    {
        const bool branch_taken_0x29cb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB3Cu;
        // 0x29cb40: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb3c) {
            ctx->pc = 0x29CB6Cu;
            goto label_29cb6c;
        }
    }
    ctx->pc = 0x29CB44u;
label_29cb44:
    // 0x29cb44: 0xc137826  jal         func_4DE098
label_29cb48:
    if (ctx->pc == 0x29CB48u) {
        ctx->pc = 0x29CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB44u;
        // 0x29cb48: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB4Cu;
        goto label_29cb4c;
    }
    ctx->pc = 0x29CB44u;
    SET_GPR_U32(ctx, 31, 0x29CB4Cu);
    ctx->pc = 0x29CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB44u;
    // 0x29cb48: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x29CB44u, 0x29CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB4Cu;
label_29cb4c:
    // 0x29cb4c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x29cb4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_29cb50:
    // 0x29cb50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29cb54:
    // 0x29cb54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29cb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29cb58:
    // 0x29cb58: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29cb58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29cb5c:
    // 0x29cb5c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29cb60:
    // 0x29cb60: 0x40f809  jalr        $v0
label_29cb64:
    if (ctx->pc == 0x29CB64u) {
        ctx->pc = 0x29CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB60u;
        // 0x29cb64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB68u;
        goto label_29cb68;
    }
    ctx->pc = 0x29CB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29CB68u);
        ctx->pc = 0x29CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB60u;
        // 0x29cb64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CB60u, 0x29CB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CB68u;
label_29cb68:
    // 0x29cb68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29cb6c:
    // 0x29cb6c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x29cb6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_29cb70:
    // 0x29cb70: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x29cb70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_29cb74:
    // 0x29cb74: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_29cb78:
    if (ctx->pc == 0x29CB78u) {
        ctx->pc = 0x29CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB74u;
        // 0x29cb78: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB7Cu;
        goto label_29cb7c;
    }
    ctx->pc = 0x29CB74u;
    {
        const bool branch_taken_0x29cb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB74u;
        // 0x29cb78: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb74) {
            ctx->pc = 0x29CAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cad8;
        }
    }
    ctx->pc = 0x29CB7Cu;
label_29cb7c:
    // 0x29cb7c: 0x7bb00270  lq          $s0, 0x270($sp)
    ctx->pc = 0x29cb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_29cb80:
    // 0x29cb80: 0x7bb10260  lq          $s1, 0x260($sp)
    ctx->pc = 0x29cb80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_29cb84:
    // 0x29cb84: 0x7bb20250  lq          $s2, 0x250($sp)
    ctx->pc = 0x29cb84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_29cb88:
    // 0x29cb88: 0x7bb30240  lq          $s3, 0x240($sp)
    ctx->pc = 0x29cb88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_29cb8c:
    // 0x29cb8c: 0x7bb40230  lq          $s4, 0x230($sp)
    ctx->pc = 0x29cb8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_29cb90:
    // 0x29cb90: 0x7bb50220  lq          $s5, 0x220($sp)
    ctx->pc = 0x29cb90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_29cb94:
    // 0x29cb94: 0x7bb60210  lq          $s6, 0x210($sp)
    ctx->pc = 0x29cb94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_29cb98:
    // 0x29cb98: 0x7bb70200  lq          $s7, 0x200($sp)
    ctx->pc = 0x29cb98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_29cb9c:
    // 0x29cb9c: 0x7bbe01f0  lq          $fp, 0x1F0($sp)
    ctx->pc = 0x29cb9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_29cba0:
    // 0x29cba0: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x29cba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
label_29cba4:
    // 0x29cba4: 0xc7b50288  lwc1        $f21, 0x288($sp)
    ctx->pc = 0x29cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_29cba8:
    // 0x29cba8: 0xc7b40280  lwc1        $f20, 0x280($sp)
    ctx->pc = 0x29cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29cbac:
    // 0x29cbac: 0x3e00008  jr          $ra
label_29cbb0:
    if (ctx->pc == 0x29CBB0u) {
        ctx->pc = 0x29CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBACu;
        // 0x29cbb0: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CBB4u;
        goto label_29cbb4;
    }
    ctx->pc = 0x29CBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBACu;
        // 0x29cbb0: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CBB4u;
label_29cbb4:
    // 0x29cbb4: 0x0  nop
    ctx->pc = 0x29cbb4u;
    // NOP
    ctx->pc = 0x29cbb8u;
}
