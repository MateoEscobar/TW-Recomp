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

// Function: sub_00273FF0
// Address: 0x273ff0 - 0x274188
void sub_00273FF0_0x273ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273FF0_0x273ff0");
#endif

    switch (ctx->pc) {
        case 0x2740fcu: goto label_2740fc;
        case 0x27410cu: goto label_27410c;
        case 0x27411cu: goto label_27411c;
        case 0x27412cu: goto label_27412c;
        case 0x27413cu: goto label_27413c;
        case 0x27414cu: goto label_27414c;
        case 0x27415cu: goto label_27415c;
        default: break;
    }

    ctx->pc = 0x273ff0u;

    // 0x273ff0: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x273ff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x273ff4: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x273ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x273ff8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x273ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x273ffc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x273ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x274000: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x274000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x274004: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x274004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x274008: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x274008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x27400c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27400cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x274010: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x274010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x274014: 0x460c0802  mul.s       $f0, $f1, $f12
    ctx->pc = 0x274014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x274018: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x274018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x27401c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x27401cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x274020: 0x46010a00  add.s       $f8, $f1, $f1
    ctx->pc = 0x274020u;
    ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x274024: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x274024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x274028: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x274028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x27402c: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x27402cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x274030: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x274030u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x274034: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x274034u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x274038: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27403c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x27403cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x274040: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x274040u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x274044: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x274044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x274048: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x274048u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27404c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x27404cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x274050: 0x46066302  mul.s       $f12, $f12, $f6
    ctx->pc = 0x274050u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x274054: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x274054u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x274058: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x274058u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x27405c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x27405cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x274060: 0x460609c2  mul.s       $f7, $f1, $f6
    ctx->pc = 0x274060u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x274064: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x274064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x274068: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x274068u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x27406c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x274070: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x274070u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x274074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x274074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x274078: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x274078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x27407c: 0xa29821  addu        $s3, $a1, $v0
    ctx->pc = 0x27407cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x274080: 0x460c1540  add.s       $f21, $f2, $f12
    ctx->pc = 0x274080u;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x274084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274088: 0x46091d00  add.s       $f20, $f3, $f9
    ctx->pc = 0x274088u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x27408c: 0x460c2b01  sub.s       $f12, $f5, $f12
    ctx->pc = 0x27408cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[12]);
    // 0x274090: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x274090u;
    {
        const bool branch_taken_0x274090 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x274094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274090u;
        // 0x274094: 0x46070581  sub.s       $f22, $f0, $f7 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274090) {
            ctx->pc = 0x2740A4u;
            goto label_2740a4;
        }
    }
    ctx->pc = 0x274098u;
    // 0x274098: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x274098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x27409c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27409Cu;
    {
        const bool branch_taken_0x27409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2740A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27409Cu;
        // 0x2740a0: 0xa21821  addu        $v1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27409c) {
            ctx->pc = 0x2740A8u;
            goto label_2740a8;
        }
    }
    ctx->pc = 0x2740A4u;
label_2740a4:
    // 0x2740a4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2740a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2740a8:
    // 0x2740a8: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2740a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2740ac: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2740acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2740b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2740B0u;
    {
        const bool branch_taken_0x2740b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2740B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740B0u;
        // 0x2740b4: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740b0) {
            ctx->pc = 0x2740C0u;
            goto label_2740c0;
        }
    }
    ctx->pc = 0x2740B8u;
    // 0x2740b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2740B8u;
    {
        const bool branch_taken_0x2740b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2740BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740B8u;
        // 0x2740bc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740b8) {
            ctx->pc = 0x2740C8u;
            goto label_2740c8;
        }
    }
    ctx->pc = 0x2740C0u;
label_2740c0:
    // 0x2740c0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2740c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2740c4: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x2740c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_2740c8:
    // 0x2740c8: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x2740c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2740cc: 0x24e2fffe  addiu       $v0, $a3, -0x2
    ctx->pc = 0x2740ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x2740d0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2740d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2740d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2740D4u;
    {
        const bool branch_taken_0x2740d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2740D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740D4u;
        // 0x2740d8: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740d4) {
            ctx->pc = 0x2740E4u;
            goto label_2740e4;
        }
    }
    ctx->pc = 0x2740DCu;
    // 0x2740dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2740DCu;
    {
        const bool branch_taken_0x2740dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2740E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740DCu;
        // 0x2740e0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740dc) {
            ctx->pc = 0x2740ECu;
            goto label_2740ec;
        }
    }
    ctx->pc = 0x2740E4u;
label_2740e4:
    // 0x2740e4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2740e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2740e8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x2740e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_2740ec:
    // 0x2740ec: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x2740ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2740f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2740f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2740f4: 0xc09cfe8  jal         func_273FA0
    ctx->pc = 0x2740F4u;
    SET_GPR_U32(ctx, 31, 0x2740FCu);
    ctx->pc = 0x2740F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2740F4u;
    // 0x2740f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273FA0u, 0x2740F4u, 0x2740FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2740FCu;
label_2740fc:
    // 0x2740fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2740fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274100: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x274100u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x274104: 0xc09cfe8  jal         func_273FA0
    ctx->pc = 0x274104u;
    SET_GPR_U32(ctx, 31, 0x27410Cu);
    ctx->pc = 0x274108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274104u;
    // 0x274108: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273FA0u, 0x274104u, 0x27410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27410Cu;
label_27410c:
    // 0x27410c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27410cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274114: 0xc09cff0  jal         func_273FC0
    ctx->pc = 0x274114u;
    SET_GPR_U32(ctx, 31, 0x27411Cu);
    ctx->pc = 0x274118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274114u;
    // 0x274118: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273FC0u, 0x274114u, 0x27411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27411Cu;
label_27411c:
    // 0x27411c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27411cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274120: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x274120u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x274124: 0xc09cfe8  jal         func_273FA0
    ctx->pc = 0x274124u;
    SET_GPR_U32(ctx, 31, 0x27412Cu);
    ctx->pc = 0x274128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274124u;
    // 0x274128: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273FA0u, 0x274124u, 0x27412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27412Cu;
label_27412c:
    // 0x27412c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27412cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274134: 0xc09cff0  jal         func_273FC0
    ctx->pc = 0x274134u;
    SET_GPR_U32(ctx, 31, 0x27413Cu);
    ctx->pc = 0x274138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274134u;
    // 0x274138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273FC0u, 0x274134u, 0x27413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27413Cu;
label_27413c:
    // 0x27413c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27413cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274140: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x274140u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x274144: 0xc09cfe8  jal         func_273FA0
    ctx->pc = 0x274144u;
    SET_GPR_U32(ctx, 31, 0x27414Cu);
    ctx->pc = 0x274148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274144u;
    // 0x274148: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273FA0u, 0x274144u, 0x27414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27414Cu;
label_27414c:
    // 0x27414c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27414cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274150: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x274150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274154: 0xc09cff0  jal         func_273FC0
    ctx->pc = 0x274154u;
    SET_GPR_U32(ctx, 31, 0x27415Cu);
    ctx->pc = 0x274158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274154u;
    // 0x274158: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273FC0u, 0x274154u, 0x27415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27415Cu;
label_27415c:
    // 0x27415c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27415cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274160: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x274160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274164: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x274164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274168: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x274168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27416c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27416cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274170: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x274170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x274174: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x274174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x274178: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x274178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27417c: 0x3e00008  jr          $ra
    ctx->pc = 0x27417Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27417Cu;
        // 0x274180: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27417Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274184u;
    // 0x274184: 0x0  nop
    ctx->pc = 0x274184u;
    // NOP
    ctx->pc = 0x274188u;
}
