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

// Function: sub_001E6F50
// Address: 0x1e6f50 - 0x1e72c0
void sub_001E6F50_0x1e6f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6F50_0x1e6f50");
#endif

    switch (ctx->pc) {
        case 0x1e720cu: goto label_1e720c;
        case 0x1e7278u: goto label_1e7278;
        case 0x1e728cu: goto label_1e728c;
        default: break;
    }

    ctx->pc = 0x1e6f50u;

    // 0x1e6f50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e6f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e6f54: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1e6f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1e6f58: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e6f58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1e6f5c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1e6f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1e6f60: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1e6f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1e6f64: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1e6f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1e6f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f6c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e6f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1e6f70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e6f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e6f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e6f78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e6f78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f7c: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1e6f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x1e6f80: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e6f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1e6f84: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e6f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e6f88: 0x2e430008  sltiu       $v1, $s2, 0x8
    ctx->pc = 0x1e6f88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e6f8c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1e6f8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e6f90: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1e6f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1e6f94: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e6f94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1e6f98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e6f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6f9c: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1e6f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1e6fa0: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x1e6fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x1e6fa4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e6fa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e6fa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e6fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e6fac: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1e6facu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e6fb0: 0x3c01bcdd  lui         $at, 0xBCDD
    ctx->pc = 0x1e6fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48349 << 16));
    // 0x1e6fb4: 0x34212f1b  ori         $at, $at, 0x2F1B
    ctx->pc = 0x1e6fb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12059);
    // 0x1e6fb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e6fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e6fbc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1e6fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1e6fc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e6fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e6fc4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e6fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e6fc8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e6fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1e6fcc: 0xe6050418  swc1        $f5, 0x418($s0)
    ctx->pc = 0x1e6fccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1048), bits); }
    // 0x1e6fd0: 0xe604041c  swc1        $f4, 0x41C($s0)
    ctx->pc = 0x1e6fd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1052), bits); }
    // 0x1e6fd4: 0xe6000420  swc1        $f0, 0x420($s0)
    ctx->pc = 0x1e6fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1056), bits); }
    // 0x1e6fd8: 0xe6010424  swc1        $f1, 0x424($s0)
    ctx->pc = 0x1e6fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1060), bits); }
    // 0x1e6fdc: 0xe6020428  swc1        $f2, 0x428($s0)
    ctx->pc = 0x1e6fdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1064), bits); }
    // 0x1e6fe0: 0xe6030430  swc1        $f3, 0x430($s0)
    ctx->pc = 0x1e6fe0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1072), bits); }
    // 0x1e6fe4: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x1E6FE4u;
    {
        const bool branch_taken_0x1e6fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FE4u;
        // 0x1e6fe8: 0xae00042c  sw          $zero, 0x42C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1068), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6fe4) {
            ctx->pc = 0x1E71A8u;
            goto label_1e71a8;
        }
    }
    ctx->pc = 0x1E6FECu;
    // 0x1e6fec: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1e6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1e6ff0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e6ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e6ff4: 0x24426900  addiu       $v0, $v0, 0x6900
    ctx->pc = 0x1e6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
    // 0x1e6ff8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e6ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e6ffc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e6ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7000: 0x800008  jr          $a0
    ctx->pc = 0x1E7000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7008u: goto label_1e7008;
            case 0x1E7050u: goto label_1e7050;
            case 0x1E7094u: goto label_1e7094;
            case 0x1E70C8u: goto label_1e70c8;
            case 0x1E70DCu: goto label_1e70dc;
            case 0x1E7120u: goto label_1e7120;
            case 0x1E713Cu: goto label_1e713c;
            case 0x1E717Cu: goto label_1e717c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7000u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E7008u;
label_1e7008:
    // 0x1e7008: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1e7008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e700c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7010: 0x3c013cd4  lui         $at, 0x3CD4
    ctx->pc = 0x1e7010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15572 << 16));
    // 0x1e7014: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1e7014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1e7018: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e7018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e701c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7020: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e7020u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e7024: 0x3c01bce5  lui         $at, 0xBCE5
    ctx->pc = 0x1e7024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48357 << 16));
    // 0x1e7028: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1e7028u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x1e702c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e702cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e7030: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e7030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e7034: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x1e7034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x1e7038: 0xe6030428  swc1        $f3, 0x428($s0)
    ctx->pc = 0x1e7038u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1064), bits); }
    // 0x1e703c: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x1e703cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1e7040: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e7040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e7044: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1e7044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    // 0x1e7048: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1E7048u;
    {
        const bool branch_taken_0x1e7048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7048u;
        // 0x1e704c: 0xae020208  sw          $v0, 0x208($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7048) {
            ctx->pc = 0x1E71B4u;
            goto label_1e71b4;
        }
    }
    ctx->pc = 0x1E7050u;
label_1e7050:
    // 0x1e7050: 0x3c013be5  lui         $at, 0x3BE5
    ctx->pc = 0x1e7050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15333 << 16));
    // 0x1e7054: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1e7054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x1e7058: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e705c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1e705cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1e7060: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e7060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1e7064: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e7064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7068: 0x3c01ba83  lui         $at, 0xBA83
    ctx->pc = 0x1e7068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47747 << 16));
    // 0x1e706c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1e706cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1e7070: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e7070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e7074: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1e7074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1e7078: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e7078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1e707c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e707cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e7080: 0xe6000428  swc1        $f0, 0x428($s0)
    ctx->pc = 0x1e7080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1064), bits); }
    // 0x1e7084: 0xe601041c  swc1        $f1, 0x41C($s0)
    ctx->pc = 0x1e7084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1052), bits); }
    // 0x1e7088: 0xe6020424  swc1        $f2, 0x424($s0)
    ctx->pc = 0x1e7088u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1060), bits); }
    // 0x1e708c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1E708Cu;
    {
        const bool branch_taken_0x1e708c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E708Cu;
        // 0x1e7090: 0xe6030420  swc1        $f3, 0x420($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1056), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e708c) {
            ctx->pc = 0x1E719Cu;
            goto label_1e719c;
        }
    }
    ctx->pc = 0x1E7094u;
label_1e7094:
    // 0x1e7094: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1e7094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1e7098: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e7098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1e709c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e709cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e70a0: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x1e70a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
    // 0x1e70a4: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1e70a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x1e70a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e70a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e70ac: 0x3c01ba83  lui         $at, 0xBA83
    ctx->pc = 0x1e70acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47747 << 16));
    // 0x1e70b0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1e70b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1e70b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e70b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e70b8: 0xe600041c  swc1        $f0, 0x41C($s0)
    ctx->pc = 0x1e70b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1052), bits); }
    // 0x1e70bc: 0xe6010420  swc1        $f1, 0x420($s0)
    ctx->pc = 0x1e70bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1056), bits); }
    // 0x1e70c0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1E70C0u;
    {
        const bool branch_taken_0x1e70c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E70C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E70C0u;
        // 0x1e70c4: 0xe6020424  swc1        $f2, 0x424($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1060), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e70c0) {
            ctx->pc = 0x1E719Cu;
            goto label_1e719c;
        }
    }
    ctx->pc = 0x1E70C8u;
label_1e70c8:
    // 0x1e70c8: 0x3c013d0f  lui         $at, 0x3D0F
    ctx->pc = 0x1e70c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15631 << 16));
    // 0x1e70cc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1e70ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1e70d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e70d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e70d4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E70D4u;
    {
        const bool branch_taken_0x1e70d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E70D4u;
        // 0x1e70d8: 0xae000204  sw          $zero, 0x204($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e70d4) {
            ctx->pc = 0x1E7130u;
            goto label_1e7130;
        }
    }
    ctx->pc = 0x1E70DCu;
label_1e70dc:
    // 0x1e70dc: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x1e70dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x1e70e0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e70e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1e70e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e70e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e70e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e70ec: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1e70ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x1e70f0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e70f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1e70f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e70f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e70f8: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1e70f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1e70fc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e70fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1e7100: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e7100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7104: 0xae020204  sw          $v0, 0x204($s0)
    ctx->pc = 0x1e7104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 2));
    // 0x1e7108: 0xe6020420  swc1        $f2, 0x420($s0)
    ctx->pc = 0x1e7108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1056), bits); }
    // 0x1e710c: 0xe6000418  swc1        $f0, 0x418($s0)
    ctx->pc = 0x1e710cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1048), bits); }
    // 0x1e7110: 0xe601041c  swc1        $f1, 0x41C($s0)
    ctx->pc = 0x1e7110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1052), bits); }
    // 0x1e7114: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x1e7114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
    // 0x1e7118: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1E7118u;
    {
        const bool branch_taken_0x1e7118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7118u;
        // 0x1e711c: 0xe6020424  swc1        $f2, 0x424($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1060), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7118) {
            ctx->pc = 0x1E71B4u;
            goto label_1e71b4;
        }
    }
    ctx->pc = 0x1E7120u;
label_1e7120:
    // 0x1e7120: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1e7120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1e7124: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e7124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1e7128: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e712c: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1e712cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_1e7130:
    // 0x1e7130: 0xe6000428  swc1        $f0, 0x428($s0)
    ctx->pc = 0x1e7130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1064), bits); }
    // 0x1e7134: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1E7134u;
    {
        const bool branch_taken_0x1e7134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7134u;
        // 0x1e7138: 0xae000208  sw          $zero, 0x208($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7134) {
            ctx->pc = 0x1E71B4u;
            goto label_1e71b4;
        }
    }
    ctx->pc = 0x1E713Cu;
label_1e713c:
    // 0x1e713c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1e713cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1e7140: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e7140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1e7144: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7148: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1e7148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1e714c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e714cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1e7150: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e7150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7154: 0x3c01bbe5  lui         $at, 0xBBE5
    ctx->pc = 0x1e7154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48101 << 16));
    // 0x1e7158: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1e7158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x1e715c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e715cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e7160: 0xe601041c  swc1        $f1, 0x41C($s0)
    ctx->pc = 0x1e7160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1052), bits); }
    // 0x1e7164: 0xe6000420  swc1        $f0, 0x420($s0)
    ctx->pc = 0x1e7164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1056), bits); }
    // 0x1e7168: 0xe6020424  swc1        $f2, 0x424($s0)
    ctx->pc = 0x1e7168u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1060), bits); }
    // 0x1e716c: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1e716cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    // 0x1e7170: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x1e7170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
    // 0x1e7174: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E7174u;
    {
        const bool branch_taken_0x1e7174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7174u;
        // 0x1e7178: 0xe6000418  swc1        $f0, 0x418($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1048), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7174) {
            ctx->pc = 0x1E71B4u;
            goto label_1e71b4;
        }
    }
    ctx->pc = 0x1E717Cu;
label_1e717c:
    // 0x1e717c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1e717cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1e7180: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1e7180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1e7184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7188: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x1e7188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
    // 0x1e718c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1e718cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1e7190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e7190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7194: 0xe600041c  swc1        $f0, 0x41C($s0)
    ctx->pc = 0x1e7194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1052), bits); }
    // 0x1e7198: 0xe6010424  swc1        $f1, 0x424($s0)
    ctx->pc = 0x1e7198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1060), bits); }
label_1e719c:
    // 0x1e719c: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1e719cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    // 0x1e71a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E71A0u;
    {
        const bool branch_taken_0x1e71a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71A0u;
        // 0x1e71a4: 0xae000208  sw          $zero, 0x208($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e71a0) {
            ctx->pc = 0x1E71B4u;
            goto label_1e71b4;
        }
    }
    ctx->pc = 0x1E71A8u;
label_1e71a8:
    // 0x1e71a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e71ac: 0xae020208  sw          $v0, 0x208($s0)
    ctx->pc = 0x1e71acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 2));
    // 0x1e71b0: 0xae020204  sw          $v0, 0x204($s0)
    ctx->pc = 0x1e71b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 2));
label_1e71b4:
    // 0x1e71b4: 0x8e020204  lw          $v0, 0x204($s0)
    ctx->pc = 0x1e71b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1e71b8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E71B8u;
    {
        const bool branch_taken_0x1e71b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71B8u;
        // 0x1e71bc: 0xae120200  sw          $s2, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e71b8) {
            ctx->pc = 0x1E7214u;
            goto label_1e7214;
        }
    }
    ctx->pc = 0x1E71C0u;
    // 0x1e71c0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e71c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e71c4: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1e71c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1e71c8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e71c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1e71cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e71ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e71d0: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1e71d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x1e71d4: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x1e71d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x1e71d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e71d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e71dc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e71dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e71e0: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x1e71e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1e71e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e71e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e71e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e71e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e71ec: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e71ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1e71f0: 0x3c068f00  lui         $a2, 0x8F00
    ctx->pc = 0x1e71f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36608 << 16));
    // 0x1e71f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e71f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e71f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e71f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e71fc: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x1e71fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e7200: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1e7200u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1e7204: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1E7204u;
    SET_GPR_U32(ctx, 31, 0x1E720Cu);
    ctx->pc = 0x1E7208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7204u;
    // 0x1e7208: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1E7204u, 0x1E720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E720Cu;
label_1e720c:
    // 0x1e720c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7210: 0xae020204  sw          $v0, 0x204($s0)
    ctx->pc = 0x1e7210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 2));
label_1e7214:
    // 0x1e7214: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x1e7214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x1e7218: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E7218u;
    {
        const bool branch_taken_0x1e7218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7218u;
        // 0x1e721c: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7218) {
            ctx->pc = 0x1E7294u;
            goto label_1e7294;
        }
    }
    ctx->pc = 0x1E7220u;
    // 0x1e7220: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1e7220u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7224: 0x26110310  addiu       $s1, $s0, 0x310
    ctx->pc = 0x1e7224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x1e7228: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1e7228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1e722c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1e722cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1e7230: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e7230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1e7234: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e7234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e7238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e723c: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1e723cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x1e7240: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1e7240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x1e7244: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e7244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e7248: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e7248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e724c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1e7250: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1e7250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1e7254: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e7254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1e7258: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e7258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e725c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e725cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e7260: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e7260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7264: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e7264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1e7268: 0x2409001b  addiu       $t1, $zero, 0x1B
    ctx->pc = 0x1e7268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1e726c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1e726cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7270: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1E7270u;
    SET_GPR_U32(ctx, 31, 0x1E7278u);
    ctx->pc = 0x1E7274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7270u;
    // 0x1e7274: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1E7270u, 0x1E7278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7278u;
label_1e7278:
    // 0x1e7278: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7278u;
    {
        const bool branch_taken_0x1e7278 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7278u;
        // 0x1e727c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7278) {
            ctx->pc = 0x1E7290u;
            goto label_1e7290;
        }
    }
    ctx->pc = 0x1E7280u;
    // 0x1e7280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7284: 0xc0687f2  jal         func_1A1FC8
    ctx->pc = 0x1E7284u;
    SET_GPR_U32(ctx, 31, 0x1E728Cu);
    ctx->pc = 0x1E7288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7284u;
    // 0x1e7288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1FC8u, 0x1E7284u, 0x1E728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E728Cu;
label_1e728c:
    // 0x1e728c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7290:
    // 0x1e7290: 0xae020208  sw          $v0, 0x208($s0)
    ctx->pc = 0x1e7290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 2));
label_1e7294:
    // 0x1e7294: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x1e7294u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e7298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e729c: 0xae020434  sw          $v0, 0x434($s0)
    ctx->pc = 0x1e729cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1076), GPR_U32(ctx, 2));
    // 0x1e72a0: 0x7e0301f0  sq          $v1, 0x1F0($s0)
    ctx->pc = 0x1e72a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 3));
    // 0x1e72a4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1e72a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e72a8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1e72a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e72ac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e72acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e72b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e72b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e72b4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1e72b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1e72b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E72B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72B8u;
        // 0x1e72bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E72B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E72C0u;
}
