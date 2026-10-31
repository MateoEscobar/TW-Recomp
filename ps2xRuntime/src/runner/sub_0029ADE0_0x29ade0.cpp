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

// Function: sub_0029ADE0
// Address: 0x29ade0 - 0x29afe0
void sub_0029ADE0_0x29ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029ADE0_0x29ade0");
#endif

    switch (ctx->pc) {
        case 0x29ade0u: goto label_29ade0;
        case 0x29ade4u: goto label_29ade4;
        case 0x29ade8u: goto label_29ade8;
        case 0x29adecu: goto label_29adec;
        case 0x29adf0u: goto label_29adf0;
        case 0x29adf4u: goto label_29adf4;
        case 0x29adf8u: goto label_29adf8;
        case 0x29adfcu: goto label_29adfc;
        case 0x29ae00u: goto label_29ae00;
        case 0x29ae04u: goto label_29ae04;
        case 0x29ae08u: goto label_29ae08;
        case 0x29ae0cu: goto label_29ae0c;
        case 0x29ae10u: goto label_29ae10;
        case 0x29ae14u: goto label_29ae14;
        case 0x29ae18u: goto label_29ae18;
        case 0x29ae1cu: goto label_29ae1c;
        case 0x29ae20u: goto label_29ae20;
        case 0x29ae24u: goto label_29ae24;
        case 0x29ae28u: goto label_29ae28;
        case 0x29ae2cu: goto label_29ae2c;
        case 0x29ae30u: goto label_29ae30;
        case 0x29ae34u: goto label_29ae34;
        case 0x29ae38u: goto label_29ae38;
        case 0x29ae3cu: goto label_29ae3c;
        case 0x29ae40u: goto label_29ae40;
        case 0x29ae44u: goto label_29ae44;
        case 0x29ae48u: goto label_29ae48;
        case 0x29ae4cu: goto label_29ae4c;
        case 0x29ae50u: goto label_29ae50;
        case 0x29ae54u: goto label_29ae54;
        case 0x29ae58u: goto label_29ae58;
        case 0x29ae5cu: goto label_29ae5c;
        case 0x29ae60u: goto label_29ae60;
        case 0x29ae64u: goto label_29ae64;
        case 0x29ae68u: goto label_29ae68;
        case 0x29ae6cu: goto label_29ae6c;
        case 0x29ae70u: goto label_29ae70;
        case 0x29ae74u: goto label_29ae74;
        case 0x29ae78u: goto label_29ae78;
        case 0x29ae7cu: goto label_29ae7c;
        case 0x29ae80u: goto label_29ae80;
        case 0x29ae84u: goto label_29ae84;
        case 0x29ae88u: goto label_29ae88;
        case 0x29ae8cu: goto label_29ae8c;
        case 0x29ae90u: goto label_29ae90;
        case 0x29ae94u: goto label_29ae94;
        case 0x29ae98u: goto label_29ae98;
        case 0x29ae9cu: goto label_29ae9c;
        case 0x29aea0u: goto label_29aea0;
        case 0x29aea4u: goto label_29aea4;
        case 0x29aea8u: goto label_29aea8;
        case 0x29aeacu: goto label_29aeac;
        case 0x29aeb0u: goto label_29aeb0;
        case 0x29aeb4u: goto label_29aeb4;
        case 0x29aeb8u: goto label_29aeb8;
        case 0x29aebcu: goto label_29aebc;
        case 0x29aec0u: goto label_29aec0;
        case 0x29aec4u: goto label_29aec4;
        case 0x29aec8u: goto label_29aec8;
        case 0x29aeccu: goto label_29aecc;
        case 0x29aed0u: goto label_29aed0;
        case 0x29aed4u: goto label_29aed4;
        case 0x29aed8u: goto label_29aed8;
        case 0x29aedcu: goto label_29aedc;
        case 0x29aee0u: goto label_29aee0;
        case 0x29aee4u: goto label_29aee4;
        case 0x29aee8u: goto label_29aee8;
        case 0x29aeecu: goto label_29aeec;
        case 0x29aef0u: goto label_29aef0;
        case 0x29aef4u: goto label_29aef4;
        case 0x29aef8u: goto label_29aef8;
        case 0x29aefcu: goto label_29aefc;
        case 0x29af00u: goto label_29af00;
        case 0x29af04u: goto label_29af04;
        case 0x29af08u: goto label_29af08;
        case 0x29af0cu: goto label_29af0c;
        case 0x29af10u: goto label_29af10;
        case 0x29af14u: goto label_29af14;
        case 0x29af18u: goto label_29af18;
        case 0x29af1cu: goto label_29af1c;
        case 0x29af20u: goto label_29af20;
        case 0x29af24u: goto label_29af24;
        case 0x29af28u: goto label_29af28;
        case 0x29af2cu: goto label_29af2c;
        case 0x29af30u: goto label_29af30;
        case 0x29af34u: goto label_29af34;
        case 0x29af38u: goto label_29af38;
        case 0x29af3cu: goto label_29af3c;
        case 0x29af40u: goto label_29af40;
        case 0x29af44u: goto label_29af44;
        case 0x29af48u: goto label_29af48;
        case 0x29af4cu: goto label_29af4c;
        case 0x29af50u: goto label_29af50;
        case 0x29af54u: goto label_29af54;
        case 0x29af58u: goto label_29af58;
        case 0x29af5cu: goto label_29af5c;
        case 0x29af60u: goto label_29af60;
        case 0x29af64u: goto label_29af64;
        case 0x29af68u: goto label_29af68;
        case 0x29af6cu: goto label_29af6c;
        case 0x29af70u: goto label_29af70;
        case 0x29af74u: goto label_29af74;
        case 0x29af78u: goto label_29af78;
        case 0x29af7cu: goto label_29af7c;
        case 0x29af80u: goto label_29af80;
        case 0x29af84u: goto label_29af84;
        case 0x29af88u: goto label_29af88;
        case 0x29af8cu: goto label_29af8c;
        case 0x29af90u: goto label_29af90;
        case 0x29af94u: goto label_29af94;
        case 0x29af98u: goto label_29af98;
        case 0x29af9cu: goto label_29af9c;
        case 0x29afa0u: goto label_29afa0;
        case 0x29afa4u: goto label_29afa4;
        case 0x29afa8u: goto label_29afa8;
        case 0x29afacu: goto label_29afac;
        case 0x29afb0u: goto label_29afb0;
        case 0x29afb4u: goto label_29afb4;
        case 0x29afb8u: goto label_29afb8;
        case 0x29afbcu: goto label_29afbc;
        case 0x29afc0u: goto label_29afc0;
        case 0x29afc4u: goto label_29afc4;
        case 0x29afc8u: goto label_29afc8;
        case 0x29afccu: goto label_29afcc;
        case 0x29afd0u: goto label_29afd0;
        case 0x29afd4u: goto label_29afd4;
        case 0x29afd8u: goto label_29afd8;
        case 0x29afdcu: goto label_29afdc;
        default: break;
    }

    ctx->pc = 0x29ade0u;

label_29ade0:
    // 0x29ade0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x29ade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_29ade4:
    // 0x29ade4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ade8:
    // 0x29ade8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x29ade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_29adec:
    // 0x29adec: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x29adecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_29adf0:
    // 0x29adf0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x29adf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_29adf4:
    // 0x29adf4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x29adf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_29adf8:
    // 0x29adf8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29adf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_29adfc:
    // 0x29adfc: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x29adfcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_29ae00:
    // 0x29ae00: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x29ae00u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_29ae04:
    // 0x29ae04: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x29ae04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_29ae08:
    // 0x29ae08: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x29ae08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_29ae0c:
    // 0x29ae0c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x29ae0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_29ae10:
    // 0x29ae10: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x29ae10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_29ae14:
    // 0x29ae14: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x29ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_29ae18:
    // 0x29ae18: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
label_29ae1c:
    if (ctx->pc == 0x29AE1Cu) {
        ctx->pc = 0x29AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE18u;
        // 0x29ae1c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AE20u;
        goto label_29ae20;
    }
    ctx->pc = 0x29AE18u;
    {
        const bool branch_taken_0x29ae18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29ae18) {
            ctx->pc = 0x29AE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AE18u;
            // 0x29ae1c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AE30u;
            goto label_29ae30;
        }
    }
    ctx->pc = 0x29AE20u;
label_29ae20:
    // 0x29ae20: 0xc0a6d0a  jal         func_29B428
label_29ae24:
    if (ctx->pc == 0x29AE24u) {
        ctx->pc = 0x29AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE20u;
        // 0x29ae24: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AE28u;
        goto label_29ae28;
    }
    ctx->pc = 0x29AE20u;
    SET_GPR_U32(ctx, 31, 0x29AE28u);
    ctx->pc = 0x29AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AE20u;
    // 0x29ae24: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B428u, 0x29AE20u, 0x29AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE28u;
label_29ae28:
    // 0x29ae28: 0x10000060  b           . + 4 + (0x60 << 2)
label_29ae2c:
    if (ctx->pc == 0x29AE2Cu) {
        ctx->pc = 0x29AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE28u;
        // 0x29ae2c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AE30u;
        goto label_29ae30;
    }
    ctx->pc = 0x29AE28u;
    {
        const bool branch_taken_0x29ae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE28u;
        // 0x29ae2c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae28) {
            ctx->pc = 0x29AFACu;
            goto label_29afac;
        }
    }
    ctx->pc = 0x29AE30u;
label_29ae30:
    // 0x29ae30: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_29ae34:
    // 0x29ae34: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_29ae38:
    // 0x29ae38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29ae38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ae3c:
    // 0x29ae3c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x29ae3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29ae40:
    // 0x29ae40: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_29ae44:
    // 0x29ae44: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x29ae44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_29ae48:
    // 0x29ae48: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x29ae48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_29ae4c:
    // 0x29ae4c: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x29ae4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_29ae50:
    // 0x29ae50: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29ae50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_29ae54:
    // 0x29ae54: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29ae54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_29ae58:
    // 0x29ae58: 0x4600b646  mov.s       $f25, $f22
    ctx->pc = 0x29ae58u;
    ctx->f[25] = FPU_MOV_S(ctx->f[22]);
label_29ae5c:
    // 0x29ae5c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_29ae60:
    // 0x29ae60: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x29ae60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_29ae64:
    // 0x29ae64: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x29ae64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_29ae68:
    // 0x29ae68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29ae6c:
    // 0x29ae6c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x29ae6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_29ae70:
    // 0x29ae70: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x29ae70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_29ae74:
    // 0x29ae74: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29ae74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_29ae78:
    // 0x29ae78: 0xc0a68f0  jal         func_29A3C0
label_29ae7c:
    if (ctx->pc == 0x29AE7Cu) {
        ctx->pc = 0x29AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE78u;
        // 0x29ae7c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AE80u;
        goto label_29ae80;
    }
    ctx->pc = 0x29AE78u;
    SET_GPR_U32(ctx, 31, 0x29AE80u);
    ctx->pc = 0x29AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AE78u;
    // 0x29ae7c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A3C0u, 0x29AE78u, 0x29AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE80u;
label_29ae80:
    // 0x29ae80: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x29ae80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29ae84:
    // 0x29ae84: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x29ae84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29ae88:
    // 0x29ae88: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x29ae88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29ae8c:
    // 0x29ae8c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29ae90:
    // 0x29ae90: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29ae90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29ae94:
    // 0x29ae94: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29ae94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29ae98:
    // 0x29ae98: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29ae98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29ae9c:
    // 0x29ae9c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29ae9cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_29aea0:
    // 0x29aea0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x29aea0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_29aea4:
    // 0x29aea4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x29aea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29aea8:
    // 0x29aea8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x29aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_29aeac:
    // 0x29aeac: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x29aeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_29aeb0:
    // 0x29aeb0: 0xc0cd766  jal         func_335D98
label_29aeb4:
    if (ctx->pc == 0x29AEB4u) {
        ctx->pc = 0x29AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEB0u;
        // 0x29aeb4: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AEB8u;
        goto label_29aeb8;
    }
    ctx->pc = 0x29AEB0u;
    SET_GPR_U32(ctx, 31, 0x29AEB8u);
    ctx->pc = 0x29AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AEB0u;
    // 0x29aeb4: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x29AEB0u, 0x29AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AEB8u;
label_29aeb8:
    // 0x29aeb8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x29aeb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_29aebc:
    // 0x29aebc: 0xc0cd7a8  jal         func_335EA0
label_29aec0:
    if (ctx->pc == 0x29AEC0u) {
        ctx->pc = 0x29AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEBCu;
        // 0x29aec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AEC4u;
        goto label_29aec4;
    }
    ctx->pc = 0x29AEBCu;
    SET_GPR_U32(ctx, 31, 0x29AEC4u);
    ctx->pc = 0x29AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AEBCu;
    // 0x29aec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x29AEBCu, 0x29AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AEC4u;
label_29aec4:
    // 0x29aec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29aec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29aec8:
    // 0x29aec8: 0xc086c40  jal         func_21B100
label_29aecc:
    if (ctx->pc == 0x29AECCu) {
        ctx->pc = 0x29AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEC8u;
        // 0x29aecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AED0u;
        goto label_29aed0;
    }
    ctx->pc = 0x29AEC8u;
    SET_GPR_U32(ctx, 31, 0x29AED0u);
    ctx->pc = 0x29AECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AEC8u;
    // 0x29aecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x29AEC8u, 0x29AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AED0u;
label_29aed0:
    // 0x29aed0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x29aed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29aed4:
    // 0x29aed4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29aed4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29aed8:
    // 0x29aed8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x29aed8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29aedc:
    // 0x29aedc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29aedcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29aee0:
    // 0x29aee0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x29aee0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_29aee4:
    // 0x29aee4: 0x4a0003bf  vwaitq
    ctx->pc = 0x29aee4u;
    // VWAITQ (Q already resolved in this runtime)
label_29aee8:
    // 0x29aee8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x29aee8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29aeec:
    // 0x29aeec: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x29aeecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_29aef0:
    // 0x29aef0: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x29aef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_29aef4:
    // 0x29aef4: 0x0  nop
    ctx->pc = 0x29aef4u;
    // NOP
label_29aef8:
    // 0x29aef8: 0xc7ae0028  lwc1        $f14, 0x28($sp)
    ctx->pc = 0x29aef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_29aefc:
    // 0x29aefc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x29aefcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_29af00:
    // 0x29af00: 0x3c01c0fa  lui         $at, 0xC0FA
    ctx->pc = 0x29af00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49402 << 16));
label_29af04:
    // 0x29af04: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x29af04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_29af08:
    // 0x29af08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29af08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29af0c:
    // 0x29af0c: 0xc0cde2c  jal         func_3378B0
label_29af10:
    if (ctx->pc == 0x29AF10u) {
        ctx->pc = 0x29AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF0Cu;
        // 0x29af10: 0x46007387  neg.s       $f14, $f14 (Delay Slot)
        ctx->f[14] = FPU_NEG_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AF14u;
        goto label_29af14;
    }
    ctx->pc = 0x29AF0Cu;
    SET_GPR_U32(ctx, 31, 0x29AF14u);
    ctx->pc = 0x29AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF0Cu;
    // 0x29af10: 0x46007387  neg.s       $f14, $f14 (Delay Slot)
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3378B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3378B0u, 0x29AF0Cu, 0x29AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF14u;
label_29af14:
    // 0x29af14: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x29af14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29af18:
    // 0x29af18: 0x0  nop
    ctx->pc = 0x29af18u;
    // NOP
label_29af1c:
    // 0x29af1c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_29af20:
    if (ctx->pc == 0x29AF20u) {
        ctx->pc = 0x29AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF1Cu;
        // 0x29af20: 0xc6400188  lwc1        $f0, 0x188($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AF24u;
        goto label_29af24;
    }
    ctx->pc = 0x29AF1Cu;
    {
        const bool branch_taken_0x29af1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29af1c) {
            ctx->pc = 0x29AF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AF1Cu;
            // 0x29af20: 0xc6400188  lwc1        $f0, 0x188($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AF40u;
            goto label_29af40;
        }
    }
    ctx->pc = 0x29AF24u;
label_29af24:
    // 0x29af24: 0x0  nop
    ctx->pc = 0x29af24u;
    // NOP
label_29af28:
    // 0x29af28: 0x0  nop
    ctx->pc = 0x29af28u;
    // NOP
label_29af2c:
    // 0x29af2c: 0x4600a583  div.s       $f22, $f20, $f0
    ctx->pc = 0x29af2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_29af30:
    // 0x29af30: 0x4618b036  c.le.s      $f22, $f24
    ctx->pc = 0x29af30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29af34:
    // 0x29af34: 0x0  nop
    ctx->pc = 0x29af34u;
    // NOP
label_29af38:
    // 0x29af38: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_29af3c:
    if (ctx->pc == 0x29AF3Cu) {
        ctx->pc = 0x29AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF38u;
        // 0x29af3c: 0xc6400188  lwc1        $f0, 0x188($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AF40u;
        goto label_29af40;
    }
    ctx->pc = 0x29AF38u;
    {
        const bool branch_taken_0x29af38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF38u;
        // 0x29af3c: 0xc6400188  lwc1        $f0, 0x188($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af38) {
            ctx->pc = 0x29AF58u;
            goto label_29af58;
        }
    }
    ctx->pc = 0x29AF40u;
label_29af40:
    // 0x29af40: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x29af40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29af44:
    // 0x29af44: 0x0  nop
    ctx->pc = 0x29af44u;
    // NOP
label_29af48:
    // 0x29af48: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_29af4c:
    if (ctx->pc == 0x29AF4Cu) {
        ctx->pc = 0x29AF50u;
        goto label_29af50;
    }
    ctx->pc = 0x29AF48u;
    {
        const bool branch_taken_0x29af48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29af48) {
            ctx->pc = 0x29AF58u;
            goto label_29af58;
        }
    }
    ctx->pc = 0x29AF50u;
label_29af50:
    // 0x29af50: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_29af54:
    if (ctx->pc == 0x29AF54u) {
        ctx->pc = 0x29AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF50u;
        // 0x29af54: 0x4617ad40  add.s       $f21, $f21, $f23 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AF58u;
        goto label_29af58;
    }
    ctx->pc = 0x29AF50u;
    {
        const bool branch_taken_0x29af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF50u;
        // 0x29af54: 0x4617ad40  add.s       $f21, $f21, $f23 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af50) {
            ctx->pc = 0x29AEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29aef8;
        }
    }
    ctx->pc = 0x29AF58u;
label_29af58:
    // 0x29af58: 0x0  nop
    ctx->pc = 0x29af58u;
    // NOP
label_29af5c:
    // 0x29af5c: 0x0  nop
    ctx->pc = 0x29af5cu;
    // NOP
label_29af60:
    // 0x29af60: 0x4614b003  div.s       $f0, $f22, $f20
    ctx->pc = 0x29af60u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
label_29af64:
    // 0x29af64: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x29af64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_29af68:
    // 0x29af68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29af68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29af6c:
    // 0x29af6c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x29af6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29af70:
    // 0x29af70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29af70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_29af74:
    // 0x29af74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29af74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29af78:
    // 0x29af78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29af78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29af7c:
    // 0x29af7c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x29af7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_29af80:
    // 0x29af80: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x29af80u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_29af84:
    // 0x29af84: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29af84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_29af88:
    // 0x29af88: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x29af88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_29af8c:
    // 0x29af8c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x29af8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_29af90:
    // 0x29af90: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x29af90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_29af94:
    // 0x29af94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29af94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29af98:
    // 0x29af98: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x29af98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_29af9c:
    // 0x29af9c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x29af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_29afa0:
    // 0x29afa0: 0x40f809  jalr        $v0
label_29afa4:
    if (ctx->pc == 0x29AFA4u) {
        ctx->pc = 0x29AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AFA0u;
        // 0x29afa4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AFA8u;
        goto label_29afa8;
    }
    ctx->pc = 0x29AFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29AFA8u);
        ctx->pc = 0x29AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AFA0u;
        // 0x29afa4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AFA0u, 0x29AFA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29AFA8u;
label_29afa8:
    // 0x29afa8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x29afa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_29afac:
    // 0x29afac: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x29afacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_29afb0:
    // 0x29afb0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x29afb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_29afb4:
    // 0x29afb4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x29afb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_29afb8:
    // 0x29afb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29afb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29afbc:
    // 0x29afbc: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x29afbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_29afc0:
    // 0x29afc0: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x29afc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_29afc4:
    // 0x29afc4: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x29afc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_29afc8:
    // 0x29afc8: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x29afc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_29afcc:
    // 0x29afcc: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x29afccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_29afd0:
    // 0x29afd0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x29afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29afd4:
    // 0x29afd4: 0x3e00008  jr          $ra
label_29afd8:
    if (ctx->pc == 0x29AFD8u) {
        ctx->pc = 0x29AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AFD4u;
        // 0x29afd8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AFDCu;
        goto label_29afdc;
    }
    ctx->pc = 0x29AFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AFD4u;
        // 0x29afd8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AFDCu;
label_29afdc:
    // 0x29afdc: 0x0  nop
    ctx->pc = 0x29afdcu;
    // NOP
    ctx->pc = 0x29afe0u;
}
