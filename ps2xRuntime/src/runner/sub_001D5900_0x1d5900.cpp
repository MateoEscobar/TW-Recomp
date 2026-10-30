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

// Function: sub_001D5900
// Address: 0x1d5900 - 0x1d5b30
void sub_001D5900_0x1d5900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5900_0x1d5900");
#endif

    switch (ctx->pc) {
        case 0x1d5940u: goto label_1d5940;
        case 0x1d5ab4u: goto label_1d5ab4;
        case 0x1d5adcu: goto label_1d5adc;
        case 0x1d5ae4u: goto label_1d5ae4;
        case 0x1d5af0u: goto label_1d5af0;
        case 0x1d5b00u: goto label_1d5b00;
        case 0x1d5b18u: goto label_1d5b18;
        default: break;
    }

    ctx->pc = 0x1d5900u;

    // 0x1d5900: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d5900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d5904: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d5904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5908: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d5908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d590c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d590cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5910: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d5910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d5914: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1d5914u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x1d5918: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d591c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1d591cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x1d5920: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x1d5920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x1d5924: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1d5924u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1d5928: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1d5928u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1d592c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d592cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1d5930: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1d5930u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1d5934: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1d5934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d5938: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x1d5938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x1d593c: 0x0  nop
    ctx->pc = 0x1d593cu;
    // NOP
label_1d5940:
    // 0x1d5940: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d5940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d5944: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d5944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d5948: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x1d5948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d594c: 0x0  nop
    ctx->pc = 0x1d594cu;
    // NOP
    // 0x1d5950: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5950u;
    {
        const bool branch_taken_0x1d5950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5950u;
        // 0x1d5954: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5950) {
            ctx->pc = 0x1D5940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5940;
        }
    }
    ctx->pc = 0x1D5958u;
    // 0x1d5958: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d5958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d595c: 0x3c013e85  lui         $at, 0x3E85
    ctx->pc = 0x1d595cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16005 << 16));
    // 0x1d5960: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1d5960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1d5964: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d5964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d5968: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1d5968u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1d596c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1d596cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1d5970: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d5970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5974: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d5974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5978: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1d5978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1d597c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d597cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d5980: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d5980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d5984: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1d5984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
    // 0x1d5988: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1d5988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1d598c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d598cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5990: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d5990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d5994: 0xe503ed18  swc1        $f3, -0x12E8($t0)
    ctx->pc = 0x1d5994u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294962456), bits); }
    // 0x1d5998: 0xe4a1ed1c  swc1        $f1, -0x12E4($a1)
    ctx->pc = 0x1d5998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962460), bits); }
    // 0x1d599c: 0xe522ed20  swc1        $f2, -0x12E0($t1)
    ctx->pc = 0x1d599cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294962464), bits); }
    // 0x1d59a0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D59A0u;
    {
        const bool branch_taken_0x1d59a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59A0u;
        // 0x1d59a4: 0xe4c0ed24  swc1        $f0, -0x12DC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294962468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59a0) {
            ctx->pc = 0x1D59F4u;
            goto label_1d59f4;
        }
    }
    ctx->pc = 0x1D59A8u;
    // 0x1d59a8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1d59a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1d59ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D59ACu;
    {
        const bool branch_taken_0x1d59ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d59ac) {
            ctx->pc = 0x1D59D4u;
            goto label_1d59d4;
        }
    }
    ctx->pc = 0x1D59B4u;
    // 0x1d59b4: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1d59b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
    // 0x1d59b8: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1d59b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1d59bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d59bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d59c0: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1d59c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x1d59c4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1d59c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1d59c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d59c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d59cc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1D59CCu;
    {
        const bool branch_taken_0x1d59cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59CCu;
        // 0x1d59d0: 0xe4a0ed1c  swc1        $f0, -0x12E4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59cc) {
            ctx->pc = 0x1D5A58u;
            goto label_1d5a58;
        }
    }
    ctx->pc = 0x1D59D4u;
label_1d59d4:
    // 0x1d59d4: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1d59d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x1d59d8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1d59d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1d59dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d59dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d59e0: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1d59e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x1d59e4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1d59e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1d59e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d59e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d59ec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D59ECu;
    {
        const bool branch_taken_0x1d59ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59ECu;
        // 0x1d59f0: 0xe4a0ed1c  swc1        $f0, -0x12E4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59ec) {
            ctx->pc = 0x1D5A58u;
            goto label_1d5a58;
        }
    }
    ctx->pc = 0x1D59F4u;
label_1d59f4:
    // 0x1d59f4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1d59f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d59f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D59F8u;
    {
        const bool branch_taken_0x1d59f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D59FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59F8u;
        // 0x1d59fc: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59f8) {
            ctx->pc = 0x1D5A14u;
            goto label_1d5a14;
        }
    }
    ctx->pc = 0x1D5A00u;
    // 0x1d5a00: 0xe503ed18  swc1        $f3, -0x12E8($t0)
    ctx->pc = 0x1d5a00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294962456), bits); }
    // 0x1d5a04: 0xe4a1ed1c  swc1        $f1, -0x12E4($a1)
    ctx->pc = 0x1d5a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962460), bits); }
    // 0x1d5a08: 0xe522ed20  swc1        $f2, -0x12E0($t1)
    ctx->pc = 0x1d5a08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294962464), bits); }
    // 0x1d5a0c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D5A0Cu;
    {
        const bool branch_taken_0x1d5a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A0Cu;
        // 0x1d5a10: 0xe4c0ed24  swc1        $f0, -0x12DC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294962468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a0c) {
            ctx->pc = 0x1D5A5Cu;
            goto label_1d5a5c;
        }
    }
    ctx->pc = 0x1D5A14u;
label_1d5a14:
    // 0x1d5a14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5A14u;
    {
        const bool branch_taken_0x1d5a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a14) {
            ctx->pc = 0x1D5A3Cu;
            goto label_1d5a3c;
        }
    }
    ctx->pc = 0x1D5A1Cu;
    // 0x1d5a1c: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1d5a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
    // 0x1d5a20: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1d5a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1d5a24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d5a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5a28: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1d5a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x1d5a2c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1d5a2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1d5a30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d5a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5a34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5A34u;
    {
        const bool branch_taken_0x1d5a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A34u;
        // 0x1d5a38: 0xe4a0ed1c  swc1        $f0, -0x12E4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a34) {
            ctx->pc = 0x1D5A58u;
            goto label_1d5a58;
        }
    }
    ctx->pc = 0x1D5A3Cu;
label_1d5a3c:
    // 0x1d5a3c: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x1d5a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x1d5a40: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1d5a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1d5a44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d5a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5a48: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1d5a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1d5a4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d5a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d5a50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d5a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5a54: 0xe4a0ed1c  swc1        $f0, -0x12E4($a1)
    ctx->pc = 0x1d5a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962460), bits); }
label_1d5a58:
    // 0x1d5a58: 0xe4c1ed24  swc1        $f1, -0x12DC($a2)
    ctx->pc = 0x1d5a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294962468), bits); }
label_1d5a5c:
    // 0x1d5a5c: 0xc501ed18  lwc1        $f1, -0x12E8($t0)
    ctx->pc = 0x1d5a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294962456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5a60: 0x24f10220  addiu       $s1, $a3, 0x220
    ctx->pc = 0x1d5a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 544));
    // 0x1d5a64: 0xc4a0ed1c  lwc1        $f0, -0x12E4($a1)
    ctx->pc = 0x1d5a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5a68: 0x2404012f  addiu       $a0, $zero, 0x12F
    ctx->pc = 0x1d5a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x1d5a6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d5a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5a70: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d5a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1d5a74: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d5a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d5a78: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1d5a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d5a7c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d5a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1d5a80: 0xe604000c  swc1        $f4, 0xC($s0)
    ctx->pc = 0x1d5a80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d5a84: 0xc522ed20  lwc1        $f2, -0x12E0($t1)
    ctx->pc = 0x1d5a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294962464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5a88: 0xc4c3ed24  lwc1        $f3, -0x12DC($a2)
    ctx->pc = 0x1d5a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294962468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d5a8c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d5a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5a90: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1d5a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5a94: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d5a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d5a98: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x1d5a98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d5a9c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1d5a9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1d5aa0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1d5aa4: 0xace00210  sw          $zero, 0x210($a3)
    ctx->pc = 0x1d5aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 528), GPR_U32(ctx, 0));
    // 0x1d5aa8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d5aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d5aac: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D5AACu;
    SET_GPR_U32(ctx, 31, 0x1D5AB4u);
    ctx->pc = 0x1D5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AACu;
    // 0x1d5ab0: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D5AACu, 0x1D5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AB4u;
label_1d5ab4:
    // 0x1d5ab4: 0x3c09001d  lui         $t1, 0x1D
    ctx->pc = 0x1d5ab4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)29 << 16));
    // 0x1d5ab8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1d5ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5abc: 0x25295808  addiu       $t1, $t1, 0x5808
    ctx->pc = 0x1d5abcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22536));
    // 0x1d5ac0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d5ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ac4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1d5ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5ac8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1d5ac8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5acc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d5accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ad4: 0xc0759ce  jal         func_1D6738
    ctx->pc = 0x1D5AD4u;
    SET_GPR_U32(ctx, 31, 0x1D5ADCu);
    ctx->pc = 0x1D5AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AD4u;
    // 0x1d5ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1D5AD4u, 0x1D5ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ADCu;
label_1d5adc:
    // 0x1d5adc: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D5ADCu;
    SET_GPR_U32(ctx, 31, 0x1D5AE4u);
    ctx->pc = 0x1D5AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5ADCu;
    // 0x1d5ae0: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D5ADCu, 0x1D5AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AE4u;
label_1d5ae4:
    // 0x1d5ae4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ae8: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D5AE8u;
    SET_GPR_U32(ctx, 31, 0x1D5AF0u);
    ctx->pc = 0x1D5AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AE8u;
    // 0x1d5aec: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D5AE8u, 0x1D5AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AF0u;
label_1d5af0:
    // 0x1d5af0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d5af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5af8: 0xc075a44  jal         func_1D6910
    ctx->pc = 0x1D5AF8u;
    SET_GPR_U32(ctx, 31, 0x1D5B00u);
    ctx->pc = 0x1D5AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AF8u;
    // 0x1d5afc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6910u, 0x1D5AF8u, 0x1D5B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B00u;
label_1d5b00:
    // 0x1d5b00: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1d5b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x1d5b04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d5b04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d5b08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d5b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b10: 0xc075920  jal         func_1D6480
    ctx->pc = 0x1D5B10u;
    SET_GPR_U32(ctx, 31, 0x1D5B18u);
    ctx->pc = 0x1D5B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B10u;
    // 0x1d5b14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6480u, 0x1D5B10u, 0x1D5B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B18u;
label_1d5b18:
    // 0x1d5b18: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d5b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5b1c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d5b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5b20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5b24: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B24u;
        // 0x1d5b28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5B2Cu;
    // 0x1d5b2c: 0x0  nop
    ctx->pc = 0x1d5b2cu;
    // NOP
    ctx->pc = 0x1d5b30u;
}
