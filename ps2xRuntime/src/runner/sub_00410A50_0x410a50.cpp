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

// Function: sub_00410A50
// Address: 0x410a50 - 0x410b70
void sub_00410A50_0x410a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410A50_0x410a50");
#endif

    switch (ctx->pc) {
        case 0x410a50u: goto label_410a50;
        case 0x410a54u: goto label_410a54;
        case 0x410a58u: goto label_410a58;
        case 0x410a5cu: goto label_410a5c;
        case 0x410a60u: goto label_410a60;
        case 0x410a64u: goto label_410a64;
        case 0x410a68u: goto label_410a68;
        case 0x410a6cu: goto label_410a6c;
        case 0x410a70u: goto label_410a70;
        case 0x410a74u: goto label_410a74;
        case 0x410a78u: goto label_410a78;
        case 0x410a7cu: goto label_410a7c;
        case 0x410a80u: goto label_410a80;
        case 0x410a84u: goto label_410a84;
        case 0x410a88u: goto label_410a88;
        case 0x410a8cu: goto label_410a8c;
        case 0x410a90u: goto label_410a90;
        case 0x410a94u: goto label_410a94;
        case 0x410a98u: goto label_410a98;
        case 0x410a9cu: goto label_410a9c;
        case 0x410aa0u: goto label_410aa0;
        case 0x410aa4u: goto label_410aa4;
        case 0x410aa8u: goto label_410aa8;
        case 0x410aacu: goto label_410aac;
        case 0x410ab0u: goto label_410ab0;
        case 0x410ab4u: goto label_410ab4;
        case 0x410ab8u: goto label_410ab8;
        case 0x410abcu: goto label_410abc;
        case 0x410ac0u: goto label_410ac0;
        case 0x410ac4u: goto label_410ac4;
        case 0x410ac8u: goto label_410ac8;
        case 0x410accu: goto label_410acc;
        case 0x410ad0u: goto label_410ad0;
        case 0x410ad4u: goto label_410ad4;
        case 0x410ad8u: goto label_410ad8;
        case 0x410adcu: goto label_410adc;
        case 0x410ae0u: goto label_410ae0;
        case 0x410ae4u: goto label_410ae4;
        case 0x410ae8u: goto label_410ae8;
        case 0x410aecu: goto label_410aec;
        case 0x410af0u: goto label_410af0;
        case 0x410af4u: goto label_410af4;
        case 0x410af8u: goto label_410af8;
        case 0x410afcu: goto label_410afc;
        case 0x410b00u: goto label_410b00;
        case 0x410b04u: goto label_410b04;
        case 0x410b08u: goto label_410b08;
        case 0x410b0cu: goto label_410b0c;
        case 0x410b10u: goto label_410b10;
        case 0x410b14u: goto label_410b14;
        case 0x410b18u: goto label_410b18;
        case 0x410b1cu: goto label_410b1c;
        case 0x410b20u: goto label_410b20;
        case 0x410b24u: goto label_410b24;
        case 0x410b28u: goto label_410b28;
        case 0x410b2cu: goto label_410b2c;
        case 0x410b30u: goto label_410b30;
        case 0x410b34u: goto label_410b34;
        case 0x410b38u: goto label_410b38;
        case 0x410b3cu: goto label_410b3c;
        case 0x410b40u: goto label_410b40;
        case 0x410b44u: goto label_410b44;
        case 0x410b48u: goto label_410b48;
        case 0x410b4cu: goto label_410b4c;
        case 0x410b50u: goto label_410b50;
        case 0x410b54u: goto label_410b54;
        case 0x410b58u: goto label_410b58;
        case 0x410b5cu: goto label_410b5c;
        case 0x410b60u: goto label_410b60;
        case 0x410b64u: goto label_410b64;
        case 0x410b68u: goto label_410b68;
        case 0x410b6cu: goto label_410b6c;
        default: break;
    }

    ctx->pc = 0x410a50u;

label_410a50:
    // 0x410a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x410a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_410a54:
    // 0x410a54: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x410a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_410a58:
    // 0x410a58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x410a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_410a5c:
    // 0x410a5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x410a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_410a60:
    // 0x410a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x410a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410a64:
    // 0x410a64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x410a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_410a68:
    // 0x410a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x410a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_410a6c:
    // 0x410a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x410a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410a70:
    // 0x410a70: 0xc11ef80  jal         func_47BE00
label_410a74:
    if (ctx->pc == 0x410A74u) {
        ctx->pc = 0x410A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A70u;
        // 0x410a74: 0x26052164  addiu       $a1, $s0, 0x2164 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8548));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410A78u;
        goto label_410a78;
    }
    ctx->pc = 0x410A70u;
    SET_GPR_U32(ctx, 31, 0x410A78u);
    ctx->pc = 0x410A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410A70u;
    // 0x410a74: 0x26052164  addiu       $a1, $s0, 0x2164 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x410A70u, 0x410A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410A78u;
label_410a78:
    // 0x410a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x410a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410a7c:
    // 0x410a7c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x410a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_410a80:
    // 0x410a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x410a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410a84:
    // 0x410a84: 0xc11eeae  jal         func_47BAB8
label_410a88:
    if (ctx->pc == 0x410A88u) {
        ctx->pc = 0x410A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A84u;
        // 0x410a88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410A8Cu;
        goto label_410a8c;
    }
    ctx->pc = 0x410A84u;
    SET_GPR_U32(ctx, 31, 0x410A8Cu);
    ctx->pc = 0x410A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410A84u;
    // 0x410a88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x410A84u, 0x410A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410A8Cu;
label_410a8c:
    // 0x410a8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_410a90:
    if (ctx->pc == 0x410A90u) {
        ctx->pc = 0x410A94u;
        goto label_410a94;
    }
    ctx->pc = 0x410A8Cu;
    {
        const bool branch_taken_0x410a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x410a8c) {
            ctx->pc = 0x410AA0u;
            goto label_410aa0;
        }
    }
    ctx->pc = 0x410A94u;
label_410a94:
    // 0x410a94: 0xc12043e  jal         func_4810F8
label_410a98:
    if (ctx->pc == 0x410A98u) {
        ctx->pc = 0x410A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A94u;
        // 0x410a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410A9Cu;
        goto label_410a9c;
    }
    ctx->pc = 0x410A94u;
    SET_GPR_U32(ctx, 31, 0x410A9Cu);
    ctx->pc = 0x410A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410A94u;
    // 0x410a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4810F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4810F8u, 0x410A94u, 0x410A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410A9Cu;
label_410a9c:
    // 0x410a9c: 0xae022158  sw          $v0, 0x2158($s0)
    ctx->pc = 0x410a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8536), GPR_U32(ctx, 2));
label_410aa0:
    // 0x410aa0: 0xc1223e4  jal         func_488F90
label_410aa4:
    if (ctx->pc == 0x410AA4u) {
        ctx->pc = 0x410AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AA0u;
        // 0x410aa4: 0x8e042158  lw          $a0, 0x2158($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410AA8u;
        goto label_410aa8;
    }
    ctx->pc = 0x410AA0u;
    SET_GPR_U32(ctx, 31, 0x410AA8u);
    ctx->pc = 0x410AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410AA0u;
    // 0x410aa4: 0x8e042158  lw          $a0, 0x2158($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488F90u, 0x410AA0u, 0x410AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410AA8u;
label_410aa8:
    // 0x410aa8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x410aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410aac:
    // 0x410aac: 0xc1223e4  jal         func_488F90
label_410ab0:
    if (ctx->pc == 0x410AB0u) {
        ctx->pc = 0x410AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AACu;
        // 0x410ab0: 0xae022158  sw          $v0, 0x2158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410AB4u;
        goto label_410ab4;
    }
    ctx->pc = 0x410AACu;
    SET_GPR_U32(ctx, 31, 0x410AB4u);
    ctx->pc = 0x410AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410AACu;
    // 0x410ab0: 0xae022158  sw          $v0, 0x2158($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488F90u, 0x410AACu, 0x410AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410AB4u;
label_410ab4:
    // 0x410ab4: 0xae00215c  sw          $zero, 0x215C($s0)
    ctx->pc = 0x410ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8540), GPR_U32(ctx, 0));
label_410ab8:
    // 0x410ab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x410ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410abc:
    // 0x410abc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x410abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_410ac0:
    // 0x410ac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x410ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410ac4:
    // 0x410ac4: 0xc11eeae  jal         func_47BAB8
label_410ac8:
    if (ctx->pc == 0x410AC8u) {
        ctx->pc = 0x410AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AC4u;
        // 0x410ac8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410ACCu;
        goto label_410acc;
    }
    ctx->pc = 0x410AC4u;
    SET_GPR_U32(ctx, 31, 0x410ACCu);
    ctx->pc = 0x410AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410AC4u;
    // 0x410ac8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x410AC4u, 0x410ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410ACCu;
label_410acc:
    // 0x410acc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_410ad0:
    if (ctx->pc == 0x410AD0u) {
        ctx->pc = 0x410AD4u;
        goto label_410ad4;
    }
    ctx->pc = 0x410ACCu;
    {
        const bool branch_taken_0x410acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x410acc) {
            ctx->pc = 0x410AE0u;
            goto label_410ae0;
        }
    }
    ctx->pc = 0x410AD4u;
label_410ad4:
    // 0x410ad4: 0xc11a0fc  jal         func_4683F0
label_410ad8:
    if (ctx->pc == 0x410AD8u) {
        ctx->pc = 0x410AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AD4u;
        // 0x410ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410ADCu;
        goto label_410adc;
    }
    ctx->pc = 0x410AD4u;
    SET_GPR_U32(ctx, 31, 0x410ADCu);
    ctx->pc = 0x410AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410AD4u;
    // 0x410ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4683F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4683F0u, 0x410AD4u, 0x410ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410ADCu;
label_410adc:
    // 0x410adc: 0xae02215c  sw          $v0, 0x215C($s0)
    ctx->pc = 0x410adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8540), GPR_U32(ctx, 2));
label_410ae0:
    // 0x410ae0: 0xc12fbda  jal         func_4BEF68
label_410ae4:
    if (ctx->pc == 0x410AE4u) {
        ctx->pc = 0x410AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AE0u;
        // 0x410ae4: 0x8e04215c  lw          $a0, 0x215C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410AE8u;
        goto label_410ae8;
    }
    ctx->pc = 0x410AE0u;
    SET_GPR_U32(ctx, 31, 0x410AE8u);
    ctx->pc = 0x410AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410AE0u;
    // 0x410ae4: 0x8e04215c  lw          $a0, 0x215C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BEF68u, 0x410AE0u, 0x410AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410AE8u;
label_410ae8:
    // 0x410ae8: 0x8e04215c  lw          $a0, 0x215C($s0)
    ctx->pc = 0x410ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8540)));
label_410aec:
    // 0x410aec: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x410aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_410af0:
    // 0x410af0: 0xae002150  sw          $zero, 0x2150($s0)
    ctx->pc = 0x410af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8528), GPR_U32(ctx, 0));
label_410af4:
    // 0x410af4: 0x24a51b20  addiu       $a1, $a1, 0x1B20
    ctx->pc = 0x410af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6944));
label_410af8:
    // 0x410af8: 0xc11c766  jal         func_471D98
label_410afc:
    if (ctx->pc == 0x410AFCu) {
        ctx->pc = 0x410AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AF8u;
        // 0x410afc: 0xae022160  sw          $v0, 0x2160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410B00u;
        goto label_410b00;
    }
    ctx->pc = 0x410AF8u;
    SET_GPR_U32(ctx, 31, 0x410B00u);
    ctx->pc = 0x410AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410AF8u;
    // 0x410afc: 0xae022160  sw          $v0, 0x2160($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8544), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D98u, 0x410AF8u, 0x410B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410B00u;
label_410b00:
    // 0x410b00: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x410b00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_410b04:
    // 0x410b04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x410b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_410b08:
    // 0x410b08: 0x24a51010  addiu       $a1, $a1, 0x1010
    ctx->pc = 0x410b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4112));
label_410b0c:
    // 0x410b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x410b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_410b10:
    // 0x410b10: 0xc11c72c  jal         func_471CB0
label_410b14:
    if (ctx->pc == 0x410B14u) {
        ctx->pc = 0x410B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410B10u;
        // 0x410b14: 0xae02215c  sw          $v0, 0x215C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410B18u;
        goto label_410b18;
    }
    ctx->pc = 0x410B10u;
    SET_GPR_U32(ctx, 31, 0x410B18u);
    ctx->pc = 0x410B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410B10u;
    // 0x410b14: 0xae02215c  sw          $v0, 0x215C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8540), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471CB0u, 0x410B10u, 0x410B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410B18u;
label_410b18:
    // 0x410b18: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x410b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_410b1c:
    // 0x410b1c: 0xae02215c  sw          $v0, 0x215C($s0)
    ctx->pc = 0x410b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8540), GPR_U32(ctx, 2));
label_410b20:
    // 0x410b20: 0x8c85cdb4  lw          $a1, -0x324C($a0)
    ctx->pc = 0x410b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_410b24:
    // 0x410b24: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x410b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_410b28:
    // 0x410b28: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x410b28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_410b2c:
    // 0x410b2c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x410b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_410b30:
    // 0x410b30: 0x40f809  jalr        $v0
label_410b34:
    if (ctx->pc == 0x410B34u) {
        ctx->pc = 0x410B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410B30u;
        // 0x410b34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410B38u;
        goto label_410b38;
    }
    ctx->pc = 0x410B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410B38u);
        ctx->pc = 0x410B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410B30u;
        // 0x410b34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410B30u, 0x410B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410B38u;
label_410b38:
    // 0x410b38: 0x8e04215c  lw          $a0, 0x215C($s0)
    ctx->pc = 0x410b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8540)));
label_410b3c:
    // 0x410b3c: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x410b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_410b40:
    // 0x410b40: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x410b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_410b44:
    // 0x410b44: 0xc11c6da  jal         func_471B68
label_410b48:
    if (ctx->pc == 0x410B48u) {
        ctx->pc = 0x410B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410B44u;
        // 0x410b48: 0x24a58190  addiu       $a1, $a1, -0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410B4Cu;
        goto label_410b4c;
    }
    ctx->pc = 0x410B44u;
    SET_GPR_U32(ctx, 31, 0x410B4Cu);
    ctx->pc = 0x410B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410B44u;
    // 0x410b48: 0x24a58190  addiu       $a1, $a1, -0x7E70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471B68u, 0x410B44u, 0x410B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410B4Cu;
label_410b4c:
    // 0x410b4c: 0x8e032164  lw          $v1, 0x2164($s0)
    ctx->pc = 0x410b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8548)));
label_410b50:
    // 0x410b50: 0xae02215c  sw          $v0, 0x215C($s0)
    ctx->pc = 0x410b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8540), GPR_U32(ctx, 2));
label_410b54:
    // 0x410b54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x410b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_410b58:
    // 0x410b58: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x410b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_410b5c:
    // 0x410b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x410b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410b60:
    // 0x410b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x410b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_410b64:
    // 0x410b64: 0x3e00008  jr          $ra
label_410b68:
    if (ctx->pc == 0x410B68u) {
        ctx->pc = 0x410B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410B64u;
        // 0x410b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410B6Cu;
        goto label_410b6c;
    }
    ctx->pc = 0x410B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410B64u;
        // 0x410b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x410B6Cu;
label_410b6c:
    // 0x410b6c: 0x0  nop
    ctx->pc = 0x410b6cu;
    // NOP
    ctx->pc = 0x410b70u;
}
