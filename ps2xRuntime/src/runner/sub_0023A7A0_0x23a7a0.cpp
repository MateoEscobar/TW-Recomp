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

// Function: sub_0023A7A0
// Address: 0x23a7a0 - 0x23a970
void sub_0023A7A0_0x23a7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A7A0_0x23a7a0");
#endif

    ctx->pc = 0x23a7a0u;

    // 0x23a7a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a7a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a7a4: 0x0  nop
    ctx->pc = 0x23a7a4u;
    // NOP
    // 0x23a7a8: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x23a7a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a7ac: 0x0  nop
    ctx->pc = 0x23a7acu;
    // NOP
    // 0x23a7b0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x23A7B0u;
    {
        const bool branch_taken_0x23a7b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a7b0) {
            ctx->pc = 0x23A7F0u;
            goto label_23a7f0;
        }
    }
    ctx->pc = 0x23A7B8u;
    // 0x23a7b8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x23a7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x23a7bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a7c0: 0x0  nop
    ctx->pc = 0x23a7c0u;
    // NOP
    // 0x23a7c4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x23a7c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a7c8: 0x0  nop
    ctx->pc = 0x23a7c8u;
    // NOP
    // 0x23a7cc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23A7CCu;
    {
        const bool branch_taken_0x23a7cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7CCu;
        // 0x23a7d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7cc) {
            ctx->pc = 0x23A7ECu;
            goto label_23a7ec;
        }
    }
    ctx->pc = 0x23A7D4u;
    // 0x23a7d4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x23a7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x23a7d8: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x23a7d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x23a7dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a7e0: 0x0  nop
    ctx->pc = 0x23a7e0u;
    // NOP
    // 0x23a7e4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x23a7e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x23a7e8: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x23a7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
label_23a7ec:
    // 0x23a7ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a7ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a7f0:
    // 0x23a7f0: 0x0  nop
    ctx->pc = 0x23a7f0u;
    // NOP
    // 0x23a7f4: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x23a7f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a7f8: 0x0  nop
    ctx->pc = 0x23a7f8u;
    // NOP
    // 0x23a7fc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x23A7FCu;
    {
        const bool branch_taken_0x23a7fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a7fc) {
            ctx->pc = 0x23A838u;
            goto label_23a838;
        }
    }
    ctx->pc = 0x23A804u;
    // 0x23a804: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x23a804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x23a808: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a80c: 0x0  nop
    ctx->pc = 0x23a80cu;
    // NOP
    // 0x23a810: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x23a810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a814: 0x0  nop
    ctx->pc = 0x23a814u;
    // NOP
    // 0x23a818: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23A818u;
    {
        const bool branch_taken_0x23a818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A818u;
        // 0x23a81c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a818) {
            ctx->pc = 0x23A838u;
            goto label_23a838;
        }
    }
    ctx->pc = 0x23A820u;
    // 0x23a820: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x23a820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x23a824: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x23a824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x23a828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a82c: 0x0  nop
    ctx->pc = 0x23a82cu;
    // NOP
    // 0x23a830: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x23a830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x23a834: 0xe44001b8  swc1        $f0, 0x1B8($v0)
    ctx->pc = 0x23a834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 440), bits); }
label_23a838:
    // 0x23a838: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a83c: 0x0  nop
    ctx->pc = 0x23a83cu;
    // NOP
    // 0x23a840: 0x460e0036  c.le.s      $f0, $f14
    ctx->pc = 0x23a840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a844: 0x0  nop
    ctx->pc = 0x23a844u;
    // NOP
    // 0x23a848: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x23A848u;
    {
        const bool branch_taken_0x23a848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a848) {
            ctx->pc = 0x23A888u;
            goto label_23a888;
        }
    }
    ctx->pc = 0x23A850u;
    // 0x23a850: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x23a850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x23a854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a858: 0x0  nop
    ctx->pc = 0x23a858u;
    // NOP
    // 0x23a85c: 0x46007034  c.lt.s      $f14, $f0
    ctx->pc = 0x23a85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a860: 0x0  nop
    ctx->pc = 0x23a860u;
    // NOP
    // 0x23a864: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23A864u;
    {
        const bool branch_taken_0x23a864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A864u;
        // 0x23a868: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a864) {
            ctx->pc = 0x23A884u;
            goto label_23a884;
        }
    }
    ctx->pc = 0x23A86Cu;
    // 0x23a86c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x23a86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x23a870: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x23a870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x23a874: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a878: 0x0  nop
    ctx->pc = 0x23a878u;
    // NOP
    // 0x23a87c: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x23a87cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x23a880: 0xe44001c0  swc1        $f0, 0x1C0($v0)
    ctx->pc = 0x23a880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 448), bits); }
label_23a884:
    // 0x23a884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a888:
    // 0x23a888: 0x0  nop
    ctx->pc = 0x23a888u;
    // NOP
    // 0x23a88c: 0x460f0036  c.le.s      $f0, $f15
    ctx->pc = 0x23a88cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a890: 0x0  nop
    ctx->pc = 0x23a890u;
    // NOP
    // 0x23a894: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x23A894u;
    {
        const bool branch_taken_0x23a894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a894) {
            ctx->pc = 0x23A8D0u;
            goto label_23a8d0;
        }
    }
    ctx->pc = 0x23A89Cu;
    // 0x23a89c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x23a89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x23a8a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a8a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a8a4: 0x0  nop
    ctx->pc = 0x23a8a4u;
    // NOP
    // 0x23a8a8: 0x46007834  c.lt.s      $f15, $f0
    ctx->pc = 0x23a8a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a8ac: 0x0  nop
    ctx->pc = 0x23a8acu;
    // NOP
    // 0x23a8b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23A8B0u;
    {
        const bool branch_taken_0x23a8b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8B0u;
        // 0x23a8b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8b0) {
            ctx->pc = 0x23A8D0u;
            goto label_23a8d0;
        }
    }
    ctx->pc = 0x23A8B8u;
    // 0x23a8b8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x23a8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x23a8bc: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x23a8bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x23a8c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a8c4: 0x0  nop
    ctx->pc = 0x23a8c4u;
    // NOP
    // 0x23a8c8: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x23a8c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x23a8cc: 0xe44001c8  swc1        $f0, 0x1C8($v0)
    ctx->pc = 0x23a8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 456), bits); }
label_23a8d0:
    // 0x23a8d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a8d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a8d4: 0x0  nop
    ctx->pc = 0x23a8d4u;
    // NOP
    // 0x23a8d8: 0x46100036  c.le.s      $f0, $f16
    ctx->pc = 0x23a8d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a8dc: 0x0  nop
    ctx->pc = 0x23a8dcu;
    // NOP
    // 0x23a8e0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x23A8E0u;
    {
        const bool branch_taken_0x23a8e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a8e0) {
            ctx->pc = 0x23A920u;
            goto label_23a920;
        }
    }
    ctx->pc = 0x23A8E8u;
    // 0x23a8e8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x23a8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x23a8ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a8ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a8f0: 0x0  nop
    ctx->pc = 0x23a8f0u;
    // NOP
    // 0x23a8f4: 0x46008034  c.lt.s      $f16, $f0
    ctx->pc = 0x23a8f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a8f8: 0x0  nop
    ctx->pc = 0x23a8f8u;
    // NOP
    // 0x23a8fc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23A8FCu;
    {
        const bool branch_taken_0x23a8fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8FCu;
        // 0x23a900: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8fc) {
            ctx->pc = 0x23A91Cu;
            goto label_23a91c;
        }
    }
    ctx->pc = 0x23A904u;
    // 0x23a904: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x23a904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x23a908: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x23a908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x23a90c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a910: 0x0  nop
    ctx->pc = 0x23a910u;
    // NOP
    // 0x23a914: 0x46008002  mul.s       $f0, $f16, $f0
    ctx->pc = 0x23a914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[0]);
    // 0x23a918: 0xe44001d0  swc1        $f0, 0x1D0($v0)
    ctx->pc = 0x23a918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 464), bits); }
label_23a91c:
    // 0x23a91c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a91cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a920:
    // 0x23a920: 0x0  nop
    ctx->pc = 0x23a920u;
    // NOP
    // 0x23a924: 0x46110036  c.le.s      $f0, $f17
    ctx->pc = 0x23a924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a928: 0x0  nop
    ctx->pc = 0x23a928u;
    // NOP
    // 0x23a92c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x23A92Cu;
    {
        const bool branch_taken_0x23a92c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a92c) {
            ctx->pc = 0x23A968u;
            goto label_23a968;
        }
    }
    ctx->pc = 0x23A934u;
    // 0x23a934: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x23a934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x23a938: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a93c: 0x0  nop
    ctx->pc = 0x23a93cu;
    // NOP
    // 0x23a940: 0x46008834  c.lt.s      $f17, $f0
    ctx->pc = 0x23a940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a944: 0x0  nop
    ctx->pc = 0x23a944u;
    // NOP
    // 0x23a948: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23A948u;
    {
        const bool branch_taken_0x23a948 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A948u;
        // 0x23a94c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a948) {
            ctx->pc = 0x23A968u;
            goto label_23a968;
        }
    }
    ctx->pc = 0x23A950u;
    // 0x23a950: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x23a950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x23a954: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x23a954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x23a958: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a95c: 0x0  nop
    ctx->pc = 0x23a95cu;
    // NOP
    // 0x23a960: 0x46008802  mul.s       $f0, $f17, $f0
    ctx->pc = 0x23a960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[0]);
    // 0x23a964: 0xe44001d8  swc1        $f0, 0x1D8($v0)
    ctx->pc = 0x23a964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 472), bits); }
label_23a968:
    // 0x23a968: 0x3e00008  jr          $ra
    ctx->pc = 0x23A968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A970u;
}
