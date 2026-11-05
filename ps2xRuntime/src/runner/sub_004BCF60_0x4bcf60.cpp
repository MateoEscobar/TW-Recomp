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

// Function: sub_004BCF60
// Address: 0x4bcf60 - 0x4bd340
void sub_004BCF60_0x4bcf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BCF60_0x4bcf60");
#endif

    switch (ctx->pc) {
        case 0x4bd0c4u: goto label_4bd0c4;
        case 0x4bd278u: goto label_4bd278;
        case 0x4bd2c0u: goto label_4bd2c0;
        case 0x4bd2fcu: goto label_4bd2fc;
        default: break;
    }

    ctx->pc = 0x4bcf60u;

    // 0x4bcf60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4bcf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4bcf64: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4bcf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4bcf68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4bcf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4bcf6c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4bcf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4bcf70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4bcf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4bcf74: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x4bcf74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bcf78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4bcf78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcf7c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4bcf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4bcf80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bcf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bcf84: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x4bcf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x4bcf88: 0x2438024  and         $s0, $s2, $v1
    ctx->pc = 0x4bcf88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x4bcf8c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x4bcf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x4bcf90: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4bcf90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4bcf94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BCF94u;
    {
        const bool branch_taken_0x4bcf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BCF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCF94u;
        // 0x4bcf98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcf94) {
            ctx->pc = 0x4BCFB0u;
            goto label_4bcfb0;
        }
    }
    ctx->pc = 0x4BCF9Cu;
    // 0x4bcf9c: 0xe62c0000  swc1        $f12, 0x0($s1)
    ctx->pc = 0x4bcf9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x4bcfa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4bcfa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcfa4: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x4BCFA4u;
    {
        const bool branch_taken_0x4bcfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCFA4u;
        // 0x4bcfa8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcfa4) {
            ctx->pc = 0x4BD328u;
            goto label_4bd328;
        }
    }
    ctx->pc = 0x4BCFACu;
    // 0x4bcfac: 0x0  nop
    ctx->pc = 0x4bcfacu;
    // NOP
label_4bcfb0:
    // 0x4bcfb0: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x4bcfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x4bcfb4: 0x3442cbe3  ori         $v0, $v0, 0xCBE3
    ctx->pc = 0x4bcfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52195);
    // 0x4bcfb8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4bcfb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4bcfbc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4BCFBCu;
    {
        const bool branch_taken_0x4bcfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BCFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCFBCu;
        // 0x4bcfc0: 0x3c024349  lui         $v0, 0x4349 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcfbc) {
            ctx->pc = 0x4BD0ACu;
            goto label_4bd0ac;
        }
    }
    ctx->pc = 0x4BCFC4u;
    // 0x4bcfc4: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x4BCFC4u;
    {
        const bool branch_taken_0x4bcfc4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x4BCFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCFC4u;
        // 0x4bcfc8: 0x3c033fc9  lui         $v1, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcfc4) {
            ctx->pc = 0x4BD03Cu;
            goto label_4bd03c;
        }
    }
    ctx->pc = 0x4BCFCCu;
    // 0x4bcfcc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x4bcfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x4bcfd0: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x4bcfd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x4bcfd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bcfd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bcfd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bcfdc: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x4bcfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x4bcfe0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x4bcfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4bcfe4: 0x34630fd0  ori         $v1, $v1, 0xFD0
    ctx->pc = 0x4bcfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4048);
    // 0x4bcfe8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BCFE8u;
    {
        const bool branch_taken_0x4bcfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4BCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCFE8u;
        // 0x4bcfec: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcfe8) {
            ctx->pc = 0x4BD004u;
            goto label_4bd004;
        }
    }
    ctx->pc = 0x4BCFF0u;
    // 0x4bcff0: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x4bcff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x4bcff4: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x4bcff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x4bcff8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bcff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bcffc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4BCFFCu;
    {
        const bool branch_taken_0x4bcffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCFFCu;
        // 0x4bd000: 0x46026041  sub.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcffc) {
            ctx->pc = 0x4BD024u;
            goto label_4bd024;
        }
    }
    ctx->pc = 0x4BD004u;
label_4bd004:
    // 0x4bd004: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x4bd004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x4bd008: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x4bd008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x4bd00c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bd00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd010: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x4bd010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x4bd014: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x4bd014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x4bd018: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bd018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bd01c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x4bd01cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x4bd020: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x4bd020u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_4bd024:
    // 0x4bd024: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x4bd024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x4bd028: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x4bd028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x4bd02c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4bd02cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4bd030: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x4bd030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x4bd034: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x4BD034u;
    {
        const bool branch_taken_0x4bd034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD034u;
        // 0x4bd038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd034) {
            ctx->pc = 0x4BD328u;
            goto label_4bd328;
        }
    }
    ctx->pc = 0x4BD03Cu;
label_4bd03c:
    // 0x4bd03c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x4bd03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x4bd040: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x4bd040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x4bd044: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bd044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd048: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bd048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bd04c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x4bd04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x4bd050: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x4bd050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4bd054: 0x34630fd0  ori         $v1, $v1, 0xFD0
    ctx->pc = 0x4bd054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4048);
    // 0x4bd058: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BD058u;
    {
        const bool branch_taken_0x4bd058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4BD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD058u;
        // 0x4bd05c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd058) {
            ctx->pc = 0x4BD074u;
            goto label_4bd074;
        }
    }
    ctx->pc = 0x4BD060u;
    // 0x4bd060: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x4bd060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x4bd064: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x4bd064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x4bd068: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bd068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bd06c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4BD06Cu;
    {
        const bool branch_taken_0x4bd06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD06Cu;
        // 0x4bd070: 0x46026040  add.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd06c) {
            ctx->pc = 0x4BD094u;
            goto label_4bd094;
        }
    }
    ctx->pc = 0x4BD074u;
label_4bd074:
    // 0x4bd074: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x4bd074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x4bd078: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x4bd078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x4bd07c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bd07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd080: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x4bd080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x4bd084: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x4bd084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x4bd088: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bd088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bd08c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x4bd08cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x4bd090: 0x46026040  add.s       $f1, $f12, $f2
    ctx->pc = 0x4bd090u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_4bd094:
    // 0x4bd094: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x4bd094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x4bd098: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x4bd098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x4bd09c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4bd09cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4bd0a0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x4bd0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x4bd0a4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x4BD0A4u;
    {
        const bool branch_taken_0x4bd0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD0A4u;
        // 0x4bd0a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd0a4) {
            ctx->pc = 0x4BD328u;
            goto label_4bd328;
        }
    }
    ctx->pc = 0x4BD0ACu;
label_4bd0ac:
    // 0x4bd0ac: 0x34420f80  ori         $v0, $v0, 0xF80
    ctx->pc = 0x4bd0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3968);
    // 0x4bd0b0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4bd0b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4bd0b4: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x4BD0B4u;
    {
        const bool branch_taken_0x4bd0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD0B4u;
        // 0x4bd0b8: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd0b4) {
            ctx->pc = 0x4BD230u;
            goto label_4bd230;
        }
    }
    ctx->pc = 0x4BD0BCu;
    // 0x4bd0bc: 0xc12f970  jal         func_4BE5C0
    ctx->pc = 0x4BD0BCu;
    SET_GPR_U32(ctx, 31, 0x4BD0C4u);
    ctx->pc = 0x4BE5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE5C0u, 0x4BD0BCu, 0x4BD0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD0C4u;
label_4bd0c4:
    // 0x4bd0c4: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x4bd0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x4bd0c8: 0x3421f984  ori         $at, $at, 0xF984
    ctx->pc = 0x4bd0c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63876);
    // 0x4bd0cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bd0ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bd0d0: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x4bd0d0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x4bd0d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4bd0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4bd0d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bd0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bd0dc: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x4bd0dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x4bd0e0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x4bd0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x4bd0e4: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x4bd0e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x4bd0e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bd0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd0ec: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x4bd0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x4bd0f0: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x4bd0f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x4bd0f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4bd0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4bd0f8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4bd0f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4bd0fc: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bd0fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4bd100: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x4bd100u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4bd104: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x4bd104u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4bd108: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x4bd108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x4bd10c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x4bd10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x4bd110: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x4bd110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4bd114: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x4bd114u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x4bd118: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4BD118u;
    {
        const bool branch_taken_0x4bd118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD118u;
        // 0x4bd11c: 0x46002901  sub.s       $f4, $f5, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd118) {
            ctx->pc = 0x4BD154u;
            goto label_4bd154;
        }
    }
    ctx->pc = 0x4BD120u;
    // 0x4bd120: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4bd120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4bd124: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x4bd124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4bd128: 0x24841838  addiu       $a0, $a0, 0x1838
    ctx->pc = 0x4bd128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6200));
    // 0x4bd12c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4bd130: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4bd130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4bd134: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bd134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bd138: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x4bd138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x4bd13c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4bd13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bd140: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x4bd140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4bd144: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BD144u;
    {
        const bool branch_taken_0x4bd144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x4BD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD144u;
        // 0x4bd148: 0x46032001  sub.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd144) {
            ctx->pc = 0x4BD158u;
            goto label_4bd158;
        }
    }
    ctx->pc = 0x4BD14Cu;
    // 0x4bd14c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x4BD14Cu;
    {
        const bool branch_taken_0x4bd14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD14Cu;
        // 0x4bd150: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd14c) {
            ctx->pc = 0x4BD210u;
            goto label_4bd210;
        }
    }
    ctx->pc = 0x4BD154u;
label_4bd154:
    // 0x4bd154: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x4bd154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_4bd158:
    // 0x4bd158: 0x1025c3  sra         $a0, $s0, 23
    ctx->pc = 0x4bd158u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 23));
    // 0x4bd15c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4bd15cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bd160: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4bd160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4bd164: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x4bd164u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x4bd168: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4bd168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4bd16c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4bd16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4bd170: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x4bd170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x4bd174: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x4BD174u;
    {
        const bool branch_taken_0x4bd174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bd174) {
            ctx->pc = 0x4BD178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BD174u;
            // 0x4bd178: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BD214u;
            goto label_4bd214;
        }
    }
    ctx->pc = 0x4BD17Cu;
    // 0x4bd17c: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x4bd17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x4bd180: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x4bd180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x4bd184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bd184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd188: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x4bd188u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x4bd18c: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x4bd18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x4bd190: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x4bd190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x4bd194: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bd194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bd198: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x4bd198u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4bd19c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x4bd19cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x4bd1a0: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x4bd1a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x4bd1a4: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x4bd1a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x4bd1a8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x4bd1a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x4bd1ac: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x4bd1acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4bd1b0: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x4bd1b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x4bd1b4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4bd1b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bd1b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4bd1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4bd1bc: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x4bd1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x4bd1c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4bd1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4bd1c4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4bd1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4bd1c8: 0x2862001a  slti        $v0, $v1, 0x1A
    ctx->pc = 0x4bd1c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x4bd1cc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4BD1CCu;
    {
        const bool branch_taken_0x4bd1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bd1cc) {
            ctx->pc = 0x4BD1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BD1CCu;
            // 0x4bd1d0: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BD214u;
            goto label_4bd214;
        }
    }
    ctx->pc = 0x4BD1D4u;
    // 0x4bd1d4: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x4bd1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x4bd1d8: 0x3421a300  ori         $at, $at, 0xA300
    ctx->pc = 0x4bd1d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41728);
    // 0x4bd1dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bd1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd1e0: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x4bd1e0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x4bd1e4: 0x3c01248d  lui         $at, 0x248D
    ctx->pc = 0x4bd1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9357 << 16));
    // 0x4bd1e8: 0x34213132  ori         $at, $at, 0x3132
    ctx->pc = 0x4bd1e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12594);
    // 0x4bd1ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bd1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bd1f0: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x4bd1f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4bd1f4: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x4bd1f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x4bd1f8: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x4bd1f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x4bd1fc: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x4bd1fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x4bd200: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x4bd200u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x4bd204: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x4bd204u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4bd208: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x4bd208u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x4bd20c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x4bd20cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_4bd210:
    // 0x4bd210: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x4bd210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bd214:
    // 0x4bd214: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x4bd214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x4bd218: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x4bd218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x4bd21c: 0x6410041  bgez        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x4BD21Cu;
    {
        const bool branch_taken_0x4bd21c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x4BD220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD21Cu;
        // 0x4bd220: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd21c) {
            ctx->pc = 0x4BD324u;
            goto label_4bd324;
        }
    }
    ctx->pc = 0x4BD224u;
    // 0x4bd224: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4bd224u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x4bd228: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x4BD228u;
    {
        const bool branch_taken_0x4bd228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD228u;
        // 0x4bd22c: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd228) {
            ctx->pc = 0x4BD314u;
            goto label_4bd314;
        }
    }
    ctx->pc = 0x4BD230u;
label_4bd230:
    // 0x4bd230: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bd230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bd234: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4bd234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4bd238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BD238u;
    {
        const bool branch_taken_0x4bd238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD238u;
        // 0x4bd23c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd238) {
            ctx->pc = 0x4BD250u;
            goto label_4bd250;
        }
    }
    ctx->pc = 0x4BD240u;
    // 0x4bd240: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x4bd240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x4bd244: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x4bd244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x4bd248: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x4BD248u;
    {
        const bool branch_taken_0x4bd248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD248u;
        // 0x4bd24c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd248) {
            ctx->pc = 0x4BD328u;
            goto label_4bd328;
        }
    }
    ctx->pc = 0x4BD250u;
label_4bd250:
    // 0x4bd250: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x4bd250u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x4bd254: 0x2466ff7a  addiu       $a2, $v1, -0x86
    ctx->pc = 0x4bd254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967162));
    // 0x4bd258: 0x615c0  sll         $v0, $a2, 23
    ctx->pc = 0x4bd258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x4bd25c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x4bd25cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4bd260: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x4bd260u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4bd264: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x4bd264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x4bd268: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bd268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bd26c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bd26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4bd270: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4bd270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd274: 0x0  nop
    ctx->pc = 0x4bd274u;
    // NOP
label_4bd278:
    // 0x4bd278: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bd278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4bd27c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4bd27cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bd280: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4bd280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4bd284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bd284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd288: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4bd288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4bd28c: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x4bd28cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x4bd290: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4bd290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4bd294: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4bd294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4bd298: 0x461fff7  bgez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4BD298u;
    {
        const bool branch_taken_0x4bd298 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4BD29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD298u;
        // 0x4bd29c: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd298) {
            ctx->pc = 0x4BD278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bd278;
        }
    }
    ctx->pc = 0x4BD2A0u;
    // 0x4bd2a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4bd2a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bd2a4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4bd2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4bd2a8: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x4bd2a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bd2ac: 0x0  nop
    ctx->pc = 0x4bd2acu;
    // NOP
    // 0x4bd2b0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x4BD2B0u;
    {
        const bool branch_taken_0x4bd2b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD2B0u;
        // 0x4bd2b4: 0xe7ac0008  swc1        $f12, 0x8($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd2b0) {
            ctx->pc = 0x4BD2E4u;
            goto label_4bd2e4;
        }
    }
    ctx->pc = 0x4BD2B8u;
    // 0x4bd2b8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4bd2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4bd2bc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4bd2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bd2c0:
    // 0x4bd2c0: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x4bd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4bd2c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bd2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd2c8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4bd2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4bd2cc: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x4bd2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x4bd2d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4bd2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bd2d4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4bd2d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bd2d8: 0x0  nop
    ctx->pc = 0x4bd2d8u;
    // NOP
    // 0x4bd2dc: 0x4503fff8  bc1tl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x4BD2DCu;
    {
        const bool branch_taken_0x4bd2dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bd2dc) {
            ctx->pc = 0x4BD2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BD2DCu;
            // 0x4bd2e0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BD2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bd2c0;
        }
    }
    ctx->pc = 0x4BD2E4u;
label_4bd2e4:
    // 0x4bd2e4: 0x3c090059  lui         $t1, 0x59
    ctx->pc = 0x4bd2e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)89 << 16));
    // 0x4bd2e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4bd2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd2ec: 0x25291520  addiu       $t1, $t1, 0x1520
    ctx->pc = 0x4bd2ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5408));
    // 0x4bd2f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4bd2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd2f4: 0xc12f574  jal         func_4BD5D0
    ctx->pc = 0x4BD2F4u;
    SET_GPR_U32(ctx, 31, 0x4BD2FCu);
    ctx->pc = 0x4BD2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD2F4u;
    // 0x4bd2f8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BD5D0u, 0x4BD2F4u, 0x4BD2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD2FCu;
label_4bd2fc:
    // 0x4bd2fc: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BD2FCu;
    {
        const bool branch_taken_0x4bd2fc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x4BD300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD2FCu;
        // 0x4bd300: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd2fc) {
            ctx->pc = 0x4BD324u;
            goto label_4bd324;
        }
    }
    ctx->pc = 0x4BD304u;
    // 0x4bd304: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x4bd304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bd308: 0x51023  negu        $v0, $a1
    ctx->pc = 0x4bd308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4bd30c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x4bd30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bd310: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4bd310u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_4bd314:
    // 0x4bd314: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4bd314u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4bd318: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x4bd318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x4bd31c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4BD31Cu;
    {
        const bool branch_taken_0x4bd31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD31Cu;
        // 0x4bd320: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd31c) {
            ctx->pc = 0x4BD328u;
            goto label_4bd328;
        }
    }
    ctx->pc = 0x4BD324u;
label_4bd324:
    // 0x4bd324: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4bd324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4bd328:
    // 0x4bd328: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bd328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bd32c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4bd32cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bd330: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4bd330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bd334: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4bd334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd338: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD338u;
        // 0x4bd33c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BD338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BD340u;
}
