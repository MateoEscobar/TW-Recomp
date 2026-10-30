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

// Function: sub_004BE630
// Address: 0x4be630 - 0x4be790
void sub_004BE630_0x4be630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE630_0x4be630");
#endif

    switch (ctx->pc) {
        case 0x4be74cu: goto label_4be74c;
        default: break;
    }

    ctx->pc = 0x4be630u;

    // 0x4be630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4be630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4be634: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x4be634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4be638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4be638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4be63c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4be63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be640: 0x3c077f80  lui         $a3, 0x7F80
    ctx->pc = 0x4be640u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32640 << 16));
    // 0x4be644: 0xc71024  and         $v0, $a2, $a3
    ctx->pc = 0x4be644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4be648: 0x21dc3  sra         $v1, $v0, 23
    ctx->pc = 0x4be648u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 23));
    // 0x4be64c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4BE64Cu;
    {
        const bool branch_taken_0x4be64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE64Cu;
        // 0x4be650: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be64c) {
            ctx->pc = 0x4BE6C0u;
            goto label_4be6c0;
        }
    }
    ctx->pc = 0x4BE654u;
    // 0x4be654: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4be654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4be658: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4be658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4be65c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4be65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4be660: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BE660u;
    {
        const bool branch_taken_0x4be660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE660u;
        // 0x4be664: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be660) {
            ctx->pc = 0x4BE678u;
            goto label_4be678;
        }
    }
    ctx->pc = 0x4BE668u;
    // 0x4be668: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4be668u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4be66c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x4BE66Cu;
    {
        const bool branch_taken_0x4be66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE66Cu;
        // 0x4be670: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be66c) {
            ctx->pc = 0x4BE788u;
            goto label_4be788;
        }
    }
    ctx->pc = 0x4BE674u;
    // 0x4be674: 0x0  nop
    ctx->pc = 0x4be674u;
    // NOP
label_4be678:
    // 0x4be678: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x4be678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x4be67c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4be67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4be680: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x4be680u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4be684: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4be684u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4be688: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x4be688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4be68c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4be68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be690: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x4be690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4be694: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4be694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4be698: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x4be698u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x4be69c: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x4be69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x4be6a0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x4be6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4be6a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BE6A4u;
    {
        const bool branch_taken_0x4be6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE6A4u;
        // 0x4be6a8: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be6a4) {
            ctx->pc = 0x4BE6C0u;
            goto label_4be6c0;
        }
    }
    ctx->pc = 0x4BE6ACu;
    // 0x4be6ac: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x4be6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x4be6b0: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x4be6b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x4be6b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4be6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4be6b8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x4BE6B8u;
    {
        const bool branch_taken_0x4be6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE6B8u;
        // 0x4be6bc: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be6b8) {
            ctx->pc = 0x4BE780u;
            goto label_4be780;
        }
    }
    ctx->pc = 0x4BE6C0u;
label_4be6c0:
    // 0x4be6c0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4be6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4be6c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BE6C4u;
    {
        const bool branch_taken_0x4be6c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE6C4u;
        // 0x4be6c8: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be6c4) {
            ctx->pc = 0x4BE6D8u;
            goto label_4be6d8;
        }
    }
    ctx->pc = 0x4BE6CCu;
    // 0x4be6cc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x4be6ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4be6d0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x4BE6D0u;
    {
        const bool branch_taken_0x4be6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE6D0u;
        // 0x4be6d4: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be6d0) {
            ctx->pc = 0x4BE780u;
            goto label_4be780;
        }
    }
    ctx->pc = 0x4BE6D8u;
label_4be6d8:
    // 0x4be6d8: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x4be6d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x4be6dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4BE6DCu;
    {
        const bool branch_taken_0x4be6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be6dc) {
            ctx->pc = 0x4BE734u;
            goto label_4be734;
        }
    }
    ctx->pc = 0x4BE6E4u;
    // 0x4be6e4: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4BE6E4u;
    {
        const bool branch_taken_0x4be6e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4BE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE6E4u;
        // 0x4be6e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be6e4) {
            ctx->pc = 0x4BE710u;
            goto label_4be710;
        }
    }
    ctx->pc = 0x4BE6ECu;
    // 0x4be6ec: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x4be6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x4be6f0: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x4be6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x4be6f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4be6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4be6f8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4be6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4be6fc: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x4be6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4be700: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4be700u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4be704: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4BE704u;
    {
        const bool branch_taken_0x4be704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE704u;
        // 0x4be708: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be704) {
            ctx->pc = 0x4BE788u;
            goto label_4be788;
        }
    }
    ctx->pc = 0x4BE70Cu;
    // 0x4be70c: 0x0  nop
    ctx->pc = 0x4be70cu;
    // NOP
label_4be710:
    // 0x4be710: 0x2862ffe8  slti        $v0, $v1, -0x18
    ctx->pc = 0x4be710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967272) ? 1 : 0);
    // 0x4be714: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4BE714u;
    {
        const bool branch_taken_0x4be714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE714u;
        // 0x4be718: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be714) {
            ctx->pc = 0x4BE754u;
            goto label_4be754;
        }
    }
    ctx->pc = 0x4BE71Cu;
    // 0x4be71c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4be71cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4be720: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x4be720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x4be724: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x4be724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x4be728: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4be728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4be72c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BE72Cu;
    {
        const bool branch_taken_0x4be72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be72c) {
            ctx->pc = 0x4BE740u;
            goto label_4be740;
        }
    }
    ctx->pc = 0x4BE734u;
label_4be734:
    // 0x4be734: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x4be734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x4be738: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x4be738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x4be73c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4be73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4be740:
    // 0x4be740: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x4be740u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4be744: 0xc12f9e4  jal         func_4BE790
    ctx->pc = 0x4BE744u;
    SET_GPR_U32(ctx, 31, 0x4BE74Cu);
    ctx->pc = 0x4BE748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE744u;
    // 0x4be748: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE790u, 0x4BE744u, 0x4BE74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE74Cu;
label_4be74c:
    // 0x4be74c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4BE74Cu;
    {
        const bool branch_taken_0x4be74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE74Cu;
        // 0x4be750: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be74c) {
            ctx->pc = 0x4BE780u;
            goto label_4be780;
        }
    }
    ctx->pc = 0x4BE754u;
label_4be754:
    // 0x4be754: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x4be754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x4be758: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x4be758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x4be75c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4be75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4be760: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x4be760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x4be764: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4be764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4be768: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x4be768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4be76c: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x4be76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x4be770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4be770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4be774: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x4be774u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4be778: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4be778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4be77c: 0x0  nop
    ctx->pc = 0x4be77cu;
    // NOP
label_4be780:
    // 0x4be780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4be780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4be784: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x4be784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4be788:
    // 0x4be788: 0x3e00008  jr          $ra
    ctx->pc = 0x4BE788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE788u;
        // 0x4be78c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BE788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BE790u;
}
