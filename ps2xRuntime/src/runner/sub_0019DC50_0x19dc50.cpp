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

// Function: sub_0019DC50
// Address: 0x19dc50 - 0x19dfb0
void sub_0019DC50_0x19dc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DC50_0x19dc50");
#endif

    switch (ctx->pc) {
        case 0x19dcd8u: goto label_19dcd8;
        case 0x19dce8u: goto label_19dce8;
        case 0x19dd18u: goto label_19dd18;
        case 0x19dd78u: goto label_19dd78;
        case 0x19dd90u: goto label_19dd90;
        case 0x19ddecu: goto label_19ddec;
        case 0x19de14u: goto label_19de14;
        case 0x19de34u: goto label_19de34;
        case 0x19df18u: goto label_19df18;
        case 0x19df30u: goto label_19df30;
        default: break;
    }

    ctx->pc = 0x19dc50u;

    // 0x19dc50: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x19dc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x19dc54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19dc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19dc58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19dc58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19dc5c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x19dc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x19dc60: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x19dc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x19dc64: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x19dc64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x19dc68: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x19dc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x19dc6c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x19dc6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x19dc70: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x19dc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x19dc74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19dc74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc78: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x19dc78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x19dc7c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19dc7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc80: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x19dc80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x19dc84: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x19dc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x19dc88: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x19dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x19dc8c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x19dc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x19dc90: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x19dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x19dc94: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x19dc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x19dc98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19dc9c: 0xe7ba00f0  swc1        $f26, 0xF0($sp)
    ctx->pc = 0x19dc9cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x19dca0: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x19dca0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x19dca4: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x19dca4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x19dca8: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x19dca8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x19dcac: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x19dcacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x19dcb0: 0xc600cf58  lwc1        $f0, -0x30A8($s0)
    ctx->pc = 0x19dcb0u;
    { uint32_t bits = FAST_READ32(0x50CF58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dcb4: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x19dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x19dcb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19dcb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19dcbc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19dcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x19dcc0: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x19dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x19dcc4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x19dcc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x19dcc8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x19dccc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x19dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x19dcd0: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x19DCD0u;
    SET_GPR_U32(ctx, 31, 0x19DCD8u);
    ctx->pc = 0x19DCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCD0u;
    // 0x19dcd4: 0xe600cf58  swc1        $f0, -0x30A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294954840), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x19DCD0u, 0x19DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DCD8u;
label_19dcd8:
    // 0x19dcd8: 0xc621cf50  lwc1        $f1, -0x30B0($s1)
    ctx->pc = 0x19dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294954832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dcdc: 0xc60ccf58  lwc1        $f12, -0x30A8($s0)
    ctx->pc = 0x19dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294954840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19dce0: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x19DCE0u;
    SET_GPR_U32(ctx, 31, 0x19DCE8u);
    ctx->pc = 0x19DCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCE0u;
    // 0x19dce4: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x19DCE0u, 0x19DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DCE8u;
label_19dce8:
    // 0x19dce8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x19dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dcec: 0xc621cf50  lwc1        $f1, -0x30B0($s1)
    ctx->pc = 0x19dcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294954832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dcf0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x19dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19dcf4: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x19DCF4u;
    {
        const bool branch_taken_0x19dcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCF4u;
        // 0x19dcf8: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dcf4) {
            ctx->pc = 0x19DE70u;
            goto label_19de70;
        }
    }
    ctx->pc = 0x19DCFCu;
    // 0x19dcfc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x19dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x19dd00: 0x26431cfc  addiu       $v1, $s2, 0x1CFC
    ctx->pc = 0x19dd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 7420));
    // 0x19dd04: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x19dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19dd08: 0x24151d08  addiu       $s5, $zero, 0x1D08
    ctx->pc = 0x19dd08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7432));
    // 0x19dd0c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x19dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x19dd10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19dd14: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x19dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_19dd18:
    // 0x19dd18: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x19dd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19dd1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19dd1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd20: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x19dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x19dd24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19dd28: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x19DD28u;
    {
        const bool branch_taken_0x19dd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD28u;
        // 0x19dd2c: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd28) {
            ctx->pc = 0x19DE5Cu;
            goto label_19de5c;
        }
    }
    ctx->pc = 0x19DD30u;
    // 0x19dd30: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x19dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19dd34: 0x26441d04  addiu       $a0, $s2, 0x1D04
    ctx->pc = 0x19dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7428));
    // 0x19dd38: 0x2838018  mult        $s0, $s4, $v1
    ctx->pc = 0x19dd38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x19dd3c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19dd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19dd40: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x19dd40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x19dd44: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x19dd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x19dd48: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x19dd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x19dd4c: 0x265e1cf8  addiu       $fp, $s2, 0x1CF8
    ctx->pc = 0x19dd4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 7416));
    // 0x19dd50: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x19dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x19dd54: 0x26571cf0  addiu       $s7, $s2, 0x1CF0
    ctx->pc = 0x19dd54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 7408));
    // 0x19dd58: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x19dd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x19dd5c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19dd5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x19dd60: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x19dd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x19dd64: 0x2b28821  addu        $s1, $s5, $s2
    ctx->pc = 0x19dd64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x19dd68: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x19dd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x19dd6c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x19dd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x19dd70: 0x26561cf4  addiu       $s6, $s2, 0x1CF4
    ctx->pc = 0x19dd70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 7412));
    // 0x19dd74: 0x0  nop
    ctx->pc = 0x19dd74u;
    // NOP
label_19dd78:
    // 0x19dd78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x19dd7c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x19dd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19dd80: 0xc44ccf54  lwc1        $f12, -0x30AC($v0)
    ctx->pc = 0x19dd80u;
    { uint32_t bits = FAST_READ32(0x50CF54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19dd84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19dd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd88: 0xc0676fa  jal         func_19DBE8
    ctx->pc = 0x19DD88u;
    SET_GPR_U32(ctx, 31, 0x19DD90u);
    ctx->pc = 0x19DD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD88u;
    // 0x19dd8c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DBE8u, 0x19DD88u, 0x19DD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD90u;
label_19dd90:
    // 0x19dd90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19DD90u;
    {
        const bool branch_taken_0x19dd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD90u;
        // 0x19dd94: 0x26431d08  addiu       $v1, $s2, 0x1D08 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 7432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd90) {
            ctx->pc = 0x19DDACu;
            goto label_19ddac;
        }
    }
    ctx->pc = 0x19DD98u;
    // 0x19dd98: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19dd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dd9c: 0x461a0032  c.eq.s      $f0, $f26
    ctx->pc = 0x19dd9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dda0: 0x0  nop
    ctx->pc = 0x19dda0u;
    // NOP
    // 0x19dda4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DDA4u;
    {
        const bool branch_taken_0x19dda4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dda4) {
            ctx->pc = 0x19DDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DDA4u;
            // 0x19dda8: 0xe6390000  swc1        $f25, 0x0($s1) (Delay Slot)
            { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DDACu;
            goto label_19ddac;
        }
    }
    ctx->pc = 0x19DDACu;
label_19ddac:
    // 0x19ddac: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x19ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19ddb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19ddb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ddb4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19ddb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ddb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19ddb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ddbc: 0x0  nop
    ctx->pc = 0x19ddbcu;
    // NOP
    // 0x19ddc0: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x19DDC0u;
    {
        const bool branch_taken_0x19ddc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDC0u;
        // 0x19ddc4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ddc0) {
            ctx->pc = 0x19DE40u;
            goto label_19de40;
        }
    }
    ctx->pc = 0x19DDC8u;
    // 0x19ddc8: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x19ddc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x19ddcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19ddccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ddd0: 0x0  nop
    ctx->pc = 0x19ddd0u;
    // NOP
    // 0x19ddd4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19DDD4u;
    {
        const bool branch_taken_0x19ddd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDD4u;
        // 0x19ddd8: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ddd4) {
            ctx->pc = 0x19DDE0u;
            goto label_19dde0;
        }
    }
    ctx->pc = 0x19DDDCu;
    // 0x19dddc: 0xe4570000  swc1        $f23, 0x0($v0)
    ctx->pc = 0x19dddcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_19dde0:
    // 0x19dde0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19dde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dde4: 0xc0674c6  jal         func_19D318
    ctx->pc = 0x19DDE4u;
    SET_GPR_U32(ctx, 31, 0x19DDECu);
    ctx->pc = 0x19DDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DDE4u;
    // 0x19dde8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D318u, 0x19DDE4u, 0x19DDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDECu;
label_19ddec:
    // 0x19ddec: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x19ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x19ddf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ddf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ddf4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x19ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19ddf8: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x19ddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19ddfc: 0x3d01821  addu        $v1, $fp, $s0
    ctx->pc = 0x19ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x19de00: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x19de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19de04: 0x4614b302  mul.s       $f12, $f22, $f20
    ctx->pc = 0x19de04u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x19de08: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x19de08u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x19de0c: 0xc06746c  jal         func_19D1B0
    ctx->pc = 0x19DE0Cu;
    SET_GPR_U32(ctx, 31, 0x19DE14u);
    ctx->pc = 0x19DE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE0Cu;
    // 0x19de10: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1B0u, 0x19DE0Cu, 0x19DE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE14u;
label_19de14:
    // 0x19de14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19de14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19de18: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x19de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x19de1c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19de1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19de20: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x19de20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x19de24: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x19de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19de28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19de28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de2c: 0xc06746c  jal         func_19D1B0
    ctx->pc = 0x19DE2Cu;
    SET_GPR_U32(ctx, 31, 0x19DE34u);
    ctx->pc = 0x19DE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE2Cu;
    // 0x19de30: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1B0u, 0x19DE2Cu, 0x19DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE34u;
label_19de34:
    // 0x19de34: 0x2d01021  addu        $v0, $s6, $s0
    ctx->pc = 0x19de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x19de38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19de38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19de3c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x19de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_19de40:
    // 0x19de40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19de40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19de44: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x19de44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x19de48: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x19de48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x19de4c: 0x26b5001c  addiu       $s5, $s5, 0x1C
    ctx->pc = 0x19de4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x19de50: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x19de50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19de54: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x19DE54u;
    {
        const bool branch_taken_0x19de54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE54u;
        // 0x19de58: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de54) {
            ctx->pc = 0x19DD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dd78;
        }
    }
    ctx->pc = 0x19DE5Cu;
label_19de5c:
    // 0x19de5c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x19de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x19de60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19de64: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19de64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19de68: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x19DE68u;
    {
        const bool branch_taken_0x19de68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE68u;
        // 0x19de6c: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de68) {
            ctx->pc = 0x19DD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dd18;
        }
    }
    ctx->pc = 0x19DE70u;
label_19de70:
    // 0x19de70: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x19de70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x19de74: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x19de74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x19de78: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19de78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x19de7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19de7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19de80: 0xc480cf54  lwc1        $f0, -0x30AC($a0)
    ctx->pc = 0x19de80u;
    { uint32_t bits = FAST_READ32(0x50CF54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19de84: 0x8e433310  lw          $v1, 0x3310($s2)
    ctx->pc = 0x19de84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 13072)));
    // 0x19de88: 0x2484cf54  addiu       $a0, $a0, -0x30AC
    ctx->pc = 0x19de88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954836));
    // 0x19de8c: 0x8e423314  lw          $v0, 0x3314($s2)
    ctx->pc = 0x19de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 13076)));
    // 0x19de90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19de90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19de94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19de98: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19de98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x19de9c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19DE9Cu;
    {
        const bool branch_taken_0x19de9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE9Cu;
        // 0x19dea0: 0xe460cf54  swc1        $f0, -0x30AC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954836), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de9c) {
            ctx->pc = 0x19DEB8u;
            goto label_19deb8;
        }
    }
    ctx->pc = 0x19DEA4u;
    // 0x19dea4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19dea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19dea8: 0x0  nop
    ctx->pc = 0x19dea8u;
    // NOP
    // 0x19deac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19deacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19deb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19DEB0u;
    {
        const bool branch_taken_0x19deb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEB0u;
        // 0x19deb4: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19deb0) {
            ctx->pc = 0x19DED8u;
            goto label_19ded8;
        }
    }
    ctx->pc = 0x19DEB8u;
label_19deb8:
    // 0x19deb8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19debc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19debcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19dec0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19dec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19dec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19dec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19dec8: 0x0  nop
    ctx->pc = 0x19dec8u;
    // NOP
    // 0x19decc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19deccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19ded0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19ded0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x19ded4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x19ded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ded8:
    // 0x19ded8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19ded8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dedc: 0x0  nop
    ctx->pc = 0x19dedcu;
    // NOP
    // 0x19dee0: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x19DEE0u;
    {
        const bool branch_taken_0x19dee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEE0u;
        // 0x19dee4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dee0) {
            ctx->pc = 0x19DF64u;
            goto label_19df64;
        }
    }
    ctx->pc = 0x19DEE8u;
    // 0x19dee8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x19dee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19deec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19deecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x19def0: 0xac60cf54  sw          $zero, -0x30AC($v1)
    ctx->pc = 0x19def0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50CF54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50CF54u, _value); } while (0);
    // 0x19def4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x19def4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19def8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19def8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19defc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19DEFCu;
    {
        const bool branch_taken_0x19defc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEFCu;
        // 0x19df00: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19defc) {
            ctx->pc = 0x19DF58u;
            goto label_19df58;
        }
    }
    ctx->pc = 0x19DF04u;
    // 0x19df04: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x19df04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19df08: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x19df08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df0c: 0x24051d08  addiu       $a1, $zero, 0x1D08
    ctx->pc = 0x19df0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7432));
    // 0x19df10: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x19df10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19df14: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x19df14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19df18:
    // 0x19df18: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x19DF18u;
    {
        const bool branch_taken_0x19df18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF18u;
        // 0x19df1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df18) {
            ctx->pc = 0x19DF48u;
            goto label_19df48;
        }
    }
    ctx->pc = 0x19DF20u;
    // 0x19df20: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19df20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19df24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19df24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19df28: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x19df28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x19df2c: 0x0  nop
    ctx->pc = 0x19df2cu;
    // NOP
label_19df30:
    // 0x19df30: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19df30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x19df34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19df34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19df38: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x19df38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x19df3c: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x19df3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x19df40: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x19DF40u;
    {
        const bool branch_taken_0x19df40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF40u;
        // 0x19df44: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df40) {
            ctx->pc = 0x19DF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19df30;
        }
    }
    ctx->pc = 0x19DF48u;
label_19df48:
    // 0x19df48: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x19df48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df4c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x19df4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x19df50: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x19DF50u;
    {
        const bool branch_taken_0x19df50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF50u;
        // 0x19df54: 0x24670001  addiu       $a3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df50) {
            ctx->pc = 0x19DF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19df18;
        }
    }
    ctx->pc = 0x19DF58u;
label_19df58:
    // 0x19df58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19df5c: 0xae4232f4  sw          $v0, 0x32F4($s2)
    ctx->pc = 0x19df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 13044), GPR_U32(ctx, 2));
    // 0x19df60: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x19df60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_19df64:
    // 0x19df64: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x19df64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19df68: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x19df68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19df6c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x19df6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19df70: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x19df70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19df74: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x19df74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19df78: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x19df78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19df7c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x19df7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19df80: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x19df80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19df84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19df84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19df88: 0xc7ba00f0  lwc1        $f26, 0xF0($sp)
    ctx->pc = 0x19df88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x19df8c: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x19df8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x19df90: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x19df90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x19df94: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x19df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x19df98: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x19df98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x19df9c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x19df9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19dfa0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x19dfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19dfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x19DFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFA4u;
        // 0x19dfa8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DFACu;
    // 0x19dfac: 0x0  nop
    ctx->pc = 0x19dfacu;
    // NOP
    ctx->pc = 0x19dfb0u;
}
