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

// Function: sub_001A8B48
// Address: 0x1a8b48 - 0x1a8e10
void sub_001A8B48_0x1a8b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8B48_0x1a8b48");
#endif

    switch (ctx->pc) {
        case 0x1a8b9cu: goto label_1a8b9c;
        case 0x1a8c78u: goto label_1a8c78;
        case 0x1a8ca8u: goto label_1a8ca8;
        case 0x1a8d54u: goto label_1a8d54;
        default: break;
    }

    ctx->pc = 0x1a8b48u;

    // 0x1a8b48: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1a8b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1a8b4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a8b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a8b50: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1a8b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1a8b54: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1a8b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1a8b58: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1a8b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1a8b5c: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1a8b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x1a8b60: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1a8b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x1a8b64: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1a8b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x1a8b68: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1a8b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x1a8b6c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1a8b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1a8b70: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1a8b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1a8b74: 0x14a20099  bne         $a1, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1A8B74u;
    {
        const bool branch_taken_0x1a8b74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B74u;
        // 0x1a8b78: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b74) {
            ctx->pc = 0x1A8DDCu;
            goto label_1a8ddc;
        }
    }
    ctx->pc = 0x1A8B7Cu;
    // 0x1a8b7c: 0x10800097  beqz        $a0, . + 4 + (0x97 << 2)
    ctx->pc = 0x1A8B7Cu;
    {
        const bool branch_taken_0x1a8b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B7Cu;
        // 0x1a8b80: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b7c) {
            ctx->pc = 0x1A8DDCu;
            goto label_1a8ddc;
        }
    }
    ctx->pc = 0x1A8B84u;
    // 0x1a8b84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a8b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b88: 0x245006a0  addiu       $s0, $v0, 0x6A0
    ctx->pc = 0x1a8b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1696));
    // 0x1a8b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b90: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1a8b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a8b94: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x1A8B94u;
    SET_GPR_U32(ctx, 31, 0x1A8B9Cu);
    ctx->pc = 0x1A8B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B94u;
    // 0x1a8b98: 0x3c170060  lui         $s7, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1A8B94u, 0x1A8B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B9Cu;
label_1a8b9c:
    // 0x1a8b9c: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x1a8b9cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x1a8ba0: 0x3c013ebd  lui         $at, 0x3EBD
    ctx->pc = 0x1a8ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16061 << 16));
    // 0x1a8ba4: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1a8ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1a8ba8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a8ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8bac: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1a8bacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1a8bb0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1a8bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1a8bb4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a8bb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1a8bb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a8bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8bbc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1a8bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1a8bc0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a8bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a8bc4: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x1a8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x1a8bc8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a8bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a8bcc: 0x3442bfbf  ori         $v0, $v0, 0xBFBF
    ctx->pc = 0x1a8bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49087);
    // 0x1a8bd0: 0x3c013efa  lui         $at, 0x3EFA
    ctx->pc = 0x1a8bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16122 << 16));
    // 0x1a8bd4: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1a8bd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1a8bd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a8bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8bdc: 0x3c038f00  lui         $v1, 0x8F00
    ctx->pc = 0x1a8bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36608 << 16));
    // 0x1a8be0: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x1a8be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x1a8be4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1a8be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1a8be8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a8be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8bec: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1a8becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1a8bf0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a8bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a8bf4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1a8bf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8bf8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1a8bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a8bfc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1a8bfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c00: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1a8c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1a8c04: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a8c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1a8c08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a8c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8c0c: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1a8c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a8c10: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1a8c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
    // 0x1a8c14: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1a8c14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1a8c18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a8c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8c1c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a8c1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c20: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a8c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a8c24: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x1a8c24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x1a8c28: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1a8c28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a8c2c: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x1a8c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x1a8c30: 0xc4c0d1f4  lwc1        $f0, -0x2E0C($a2)
    ctx->pc = 0x1a8c30u;
    { uint32_t bits = FAST_READ32(0x50D1F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8c34: 0xc4a1d1f8  lwc1        $f1, -0x2E08($a1)
    ctx->pc = 0x1a8c34u;
    { uint32_t bits = FAST_READ32(0x50D1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8c38: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x1a8c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x1a8c3c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a8c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1a8c40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1a8c48: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1a8c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a8c4c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1a8c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1a8c50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a8c50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c54: 0xc441d200  lwc1        $f1, -0x2E00($v0)
    ctx->pc = 0x1a8c54u;
    { uint32_t bits = FAST_READ32(0x50D200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8c58: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1a8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1a8c5c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x1a8c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c60: 0xc480d1fc  lwc1        $f0, -0x2E04($a0)
    ctx->pc = 0x1a8c60u;
    { uint32_t bits = FAST_READ32(0x50D1FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8c64: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1a8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1a8c68: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1a8c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1a8c6c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1a8c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a8c70: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1a8c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1a8c74: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x1a8c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_1a8c78:
    // 0x1a8c78: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1a8c78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8c7c: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x1a8c7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a8c80: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1a8c80u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1a8c84: 0x7ca40010  sq          $a0, 0x10($a1)
    ctx->pc = 0x1a8c84u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 4));
    // 0x1a8c88: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1a8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1a8c8c: 0x1447fffa  bne         $v0, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A8C8Cu;
    {
        const bool branch_taken_0x1a8c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1A8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C8Cu;
        // 0x1a8c90: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c8c) {
            ctx->pc = 0x1A8C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8c78;
        }
    }
    ctx->pc = 0x1A8C94u;
    // 0x1a8c94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a8c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c9c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1a8c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a8ca0: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x1A8CA0u;
    SET_GPR_U32(ctx, 31, 0x1A8CA8u);
    ctx->pc = 0x1A8CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8CA0u;
    // 0x1a8ca4: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1A8CA0u, 0x1A8CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8CA8u;
label_1a8ca8:
    // 0x1a8ca8: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x1a8ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
    // 0x1a8cac: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1a8cacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1a8cb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a8cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8cb4: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x1a8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x1a8cb8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1a8cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1a8cbc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a8cbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1a8cc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a8cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8cc4: 0x3442bfbf  ori         $v0, $v0, 0xBFBF
    ctx->pc = 0x1a8cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49087);
    // 0x1a8cc8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a8cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a8ccc: 0x3c038f00  lui         $v1, 0x8F00
    ctx->pc = 0x1a8cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36608 << 16));
    // 0x1a8cd0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a8cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a8cd4: 0x24040fa0  addiu       $a0, $zero, 0xFA0
    ctx->pc = 0x1a8cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x1a8cd8: 0x3c013efa  lui         $at, 0x3EFA
    ctx->pc = 0x1a8cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16122 << 16));
    // 0x1a8cdc: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1a8cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1a8ce0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a8ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8ce4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a8ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ce8: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x1a8ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x1a8cec: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1a8cecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1a8cf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a8cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8cf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a8cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8cf8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a8cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a8cfc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1a8cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a8d00: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1a8d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1a8d04: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a8d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1a8d08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a8d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8d0c: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1a8d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
    // 0x1a8d10: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1a8d10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1a8d14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a8d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8d18: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1a8d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a8d1c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1a8d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a8d20: 0xc6c1d1f4  lwc1        $f1, -0x2E0C($s6)
    ctx->pc = 0x1a8d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294955508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8d24: 0xc6a0d1f8  lwc1        $f0, -0x2E08($s5)
    ctx->pc = 0x1a8d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294955512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8d28: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1a8d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a8d2c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1a8d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1a8d30: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a8d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1a8d34: 0xc681d1fc  lwc1        $f1, -0x2E04($s4)
    ctx->pc = 0x1a8d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294955516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8d38: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1a8d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1a8d3c: 0xc660d200  lwc1        $f0, -0x2E00($s3)
    ctx->pc = 0x1a8d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8d40: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1a8d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1a8d44: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1a8d44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a8d48: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1a8d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1a8d4c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1a8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1a8d50: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1a8d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1a8d54:
    // 0x1a8d54: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1a8d54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8d58: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x1a8d58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a8d5c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1a8d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1a8d60: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x1a8d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a8d64: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x1a8d64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x1a8d68: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1a8d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1a8d6c: 0x14a8fff9  bne         $a1, $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A8D6Cu;
    {
        const bool branch_taken_0x1a8d6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x1A8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D6Cu;
        // 0x1a8d70: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d6c) {
            ctx->pc = 0x1A8D54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8d54;
        }
    }
    ctx->pc = 0x1A8D74u;
    // 0x1a8d74: 0x262807b0  addiu       $t0, $s1, 0x7B0
    ctx->pc = 0x1a8d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 1968));
    // 0x1a8d78: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1a8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1a8d7c: 0xa1020003  sb          $v0, 0x3($t0)
    ctx->pc = 0x1a8d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a8d80: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a8d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a8d84: 0x264607b8  addiu       $a2, $s2, 0x7B8
    ctx->pc = 0x1a8d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1976));
    // 0x1a8d88: 0x26ea07a0  addiu       $t2, $s7, 0x7A0
    ctx->pc = 0x1a8d88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 1952));
    // 0x1a8d8c: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x1a8d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a8d90: 0x240900b7  addiu       $t1, $zero, 0xB7
    ctx->pc = 0x1a8d90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x1a8d94: 0xa2e307a0  sb          $v1, 0x7A0($s7)
    ctx->pc = 0x1a8d94u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1952), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a8d98: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x1a8d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1a8d9c: 0xa1490001  sb          $t1, 0x1($t2)
    ctx->pc = 0x1a8d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x1a8da0: 0x27cb07a8  addiu       $t3, $fp, 0x7A8
    ctx->pc = 0x1a8da0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), 1960));
    // 0x1a8da4: 0xa1430003  sb          $v1, 0x3($t2)
    ctx->pc = 0x1a8da4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a8da8: 0x240500bf  addiu       $a1, $zero, 0xBF
    ctx->pc = 0x1a8da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x1a8dac: 0xa3c707a8  sb          $a3, 0x7A8($fp)
    ctx->pc = 0x1a8dacu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 1960), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a8db0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1a8db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1a8db4: 0xa1670002  sb          $a3, 0x2($t3)
    ctx->pc = 0x1a8db4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a8db8: 0xa1630003  sb          $v1, 0x3($t3)
    ctx->pc = 0x1a8db8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a8dbc: 0xa22507b0  sb          $a1, 0x7B0($s1)
    ctx->pc = 0x1a8dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1968), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a8dc0: 0xa1050002  sb          $a1, 0x2($t0)
    ctx->pc = 0x1a8dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a8dc4: 0xa24407b8  sb          $a0, 0x7B8($s2)
    ctx->pc = 0x1a8dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1976), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a8dc8: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x1a8dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a8dcc: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x1a8dccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8dd0: 0xa1670001  sb          $a3, 0x1($t3)
    ctx->pc = 0x1a8dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a8dd4: 0xa1050001  sb          $a1, 0x1($t0)
    ctx->pc = 0x1a8dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a8dd8: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x1a8dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
label_1a8ddc:
    // 0x1a8ddc: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1a8ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a8de0: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1a8de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a8de4: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1a8de4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a8de8: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1a8de8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a8dec: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1a8decu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a8df0: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1a8df0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a8df4: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1a8df4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a8df8: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1a8df8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a8dfc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1a8dfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a8e00: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a8e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a8e04: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E04u;
        // 0x1a8e08: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8E0Cu;
    // 0x1a8e0c: 0x0  nop
    ctx->pc = 0x1a8e0cu;
    // NOP
    ctx->pc = 0x1a8e10u;
}
