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

// Function: sub_004BC6D0
// Address: 0x4bc6d0 - 0x4bcf60
void sub_004BC6D0_0x4bc6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BC6D0_0x4bc6d0");
#endif

    switch (ctx->pc) {
        case 0x4bc84cu: goto label_4bc84c;
        case 0x4bc85cu: goto label_4bc85c;
        case 0x4bc928u: goto label_4bc928;
        case 0x4bcf1cu: goto label_4bcf1c;
        default: break;
    }

    ctx->pc = 0x4bc6d0u;

    // 0x4bc6d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4bc6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4bc6d4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x4bc6d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4bc6d8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x4bc6d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4bc6dc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x4bc6dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x4bc6e0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x4bc6e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x4bc6e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4bc6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4bc6e8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4bc6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4bc6ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4bc6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4bc6f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4bc6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4bc6f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4bc6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4bc6f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bc6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bc6fc: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x4bc6fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bc700: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4bc700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc704: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x4bc704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bc708: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4bc708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc70c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4bc70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4bc710: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc714: 0x2428824  and         $s1, $s2, $v0
    ctx->pc = 0x4bc714u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x4bc718: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BC718u;
    {
        const bool branch_taken_0x4bc718 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC718u;
        // 0x4bc71c: 0x2628024  and         $s0, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc718) {
            ctx->pc = 0x4BC730u;
            goto label_4bc730;
        }
    }
    ctx->pc = 0x4BC720u;
    // 0x4bc720: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bc720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bc724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc728: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x4BC728u;
    {
        const bool branch_taken_0x4bc728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC728u;
        // 0x4bc72c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc728) {
            ctx->pc = 0x4BCF38u;
            goto label_4bcf38;
        }
    }
    ctx->pc = 0x4BC730u;
label_4bc730:
    // 0x4bc730: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x4bc730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x4bc734: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x4bc734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4bc738: 0x544001fe  bnel        $v0, $zero, . + 4 + (0x1FE << 2)
    ctx->pc = 0x4BC738u;
    {
        const bool branch_taken_0x4bc738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bc738) {
            ctx->pc = 0x4BC73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BC738u;
            // 0x4bc73c: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BCF34u;
            goto label_4bcf34;
        }
    }
    ctx->pc = 0x4BC740u;
    // 0x4bc740: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x4bc740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4bc744: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BC744u;
    {
        const bool branch_taken_0x4bc744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc744) {
            ctx->pc = 0x4BC754u;
            goto label_4bc754;
        }
    }
    ctx->pc = 0x4BC74Cu;
    // 0x4bc74c: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x4BC74Cu;
    {
        const bool branch_taken_0x4bc74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC74Cu;
        // 0x4bc750: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc74c) {
            ctx->pc = 0x4BCF34u;
            goto label_4bcf34;
        }
    }
    ctx->pc = 0x4BC754u;
label_4bc754:
    // 0x4bc754: 0x6610015  bgez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x4BC754u;
    {
        const bool branch_taken_0x4bc754 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x4BC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC754u;
        // 0x4bc758: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc754) {
            ctx->pc = 0x4BC7ACu;
            goto label_4bc7ac;
        }
    }
    ctx->pc = 0x4BC75Cu;
    // 0x4bc75c: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x4bc75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x4bc760: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc764: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x4bc764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4bc768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BC768u;
    {
        const bool branch_taken_0x4bc768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC768u;
        // 0x4bc76c: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc768) {
            ctx->pc = 0x4BC778u;
            goto label_4bc778;
        }
    }
    ctx->pc = 0x4BC770u;
    // 0x4bc770: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4BC770u;
    {
        const bool branch_taken_0x4bc770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC770u;
        // 0x4bc774: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc770) {
            ctx->pc = 0x4BC7ACu;
            goto label_4bc7ac;
        }
    }
    ctx->pc = 0x4BC778u;
label_4bc778:
    // 0x4bc778: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc77c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x4bc77cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4bc780: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4BC780u;
    {
        const bool branch_taken_0x4bc780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC780u;
        // 0x4bc784: 0x111dc3  sra         $v1, $s1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc780) {
            ctx->pc = 0x4BC7ACu;
            goto label_4bc7ac;
        }
    }
    ctx->pc = 0x4BC788u;
    // 0x4bc788: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x4bc788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x4bc78c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4bc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4bc790: 0x512807  srav        $a1, $s1, $v0
    ctx->pc = 0x4bc790u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x4bc794: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x4bc794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x4bc798: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BC798u;
    {
        const bool branch_taken_0x4bc798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4BC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC798u;
        // 0x4bc79c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc798) {
            ctx->pc = 0x4BC7B0u;
            goto label_4bc7b0;
        }
    }
    ctx->pc = 0x4BC7A0u;
    // 0x4bc7a0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x4bc7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4bc7a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4bc7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4bc7a8: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x4bc7a8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bc7ac:
    // 0x4bc7ac: 0x3c027f80  lui         $v0, 0x7F80
    ctx->pc = 0x4bc7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
label_4bc7b0:
    // 0x4bc7b0: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4BC7B0u;
    {
        const bool branch_taken_0x4bc7b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BC7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC7B0u;
        // 0x4bc7b4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc7b0) {
            ctx->pc = 0x4BC7F8u;
            goto label_4bc7f8;
        }
    }
    ctx->pc = 0x4BC7B8u;
    // 0x4bc7b8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BC7B8u;
    {
        const bool branch_taken_0x4bc7b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC7B8u;
        // 0x4bc7bc: 0x50102a  slt         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc7b8) {
            ctx->pc = 0x4BC7C8u;
            goto label_4bc7c8;
        }
    }
    ctx->pc = 0x4BC7C0u;
    // 0x4bc7c0: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x4BC7C0u;
    {
        const bool branch_taken_0x4bc7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC7C0u;
        // 0x4bc7c4: 0x4615a801  sub.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc7c0) {
            ctx->pc = 0x4BCF34u;
            goto label_4bcf34;
        }
    }
    ctx->pc = 0x4BC7C8u;
label_4bc7c8:
    // 0x4bc7c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BC7C8u;
    {
        const bool branch_taken_0x4bc7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc7c8) {
            ctx->pc = 0x4BC7E4u;
            goto label_4bc7e4;
        }
    }
    ctx->pc = 0x4BC7D0u;
    // 0x4bc7d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bc7d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc7d4: 0x64301d7  bgezl       $s2, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x4BC7D4u;
    {
        const bool branch_taken_0x4bc7d4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x4bc7d4) {
            ctx->pc = 0x4BC7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BC7D4u;
            // 0x4bc7d8: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BCF34u;
            goto label_4bcf34;
        }
    }
    ctx->pc = 0x4BC7DCu;
    // 0x4bc7dc: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x4BC7DCu;
    {
        const bool branch_taken_0x4bc7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC7DCu;
        // 0x4bc7e0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc7dc) {
            ctx->pc = 0x4BCF38u;
            goto label_4bcf38;
        }
    }
    ctx->pc = 0x4BC7E4u;
label_4bc7e4:
    // 0x4bc7e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bc7e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc7e8: 0x64201d2  bltzl       $s2, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x4BC7E8u;
    {
        const bool branch_taken_0x4bc7e8 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x4bc7e8) {
            ctx->pc = 0x4BC7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BC7E8u;
            // 0x4bc7ec: 0x4600a807  neg.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BCF34u;
            goto label_4bcf34;
        }
    }
    ctx->pc = 0x4BC7F0u;
    // 0x4bc7f0: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x4BC7F0u;
    {
        const bool branch_taken_0x4bc7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC7F0u;
        // 0x4bc7f4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc7f0) {
            ctx->pc = 0x4BCF38u;
            goto label_4bcf38;
        }
    }
    ctx->pc = 0x4BC7F8u;
label_4bc7f8:
    // 0x4bc7f8: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4BC7F8u;
    {
        const bool branch_taken_0x4bc7f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x4bc7f8) {
            ctx->pc = 0x4BC7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BC7F8u;
            // 0x4bc7fc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BC824u;
            goto label_4bc824;
        }
    }
    ctx->pc = 0x4BC800u;
    // 0x4bc800: 0x64101cc  bgez        $s2, . + 4 + (0x1CC << 2)
    ctx->pc = 0x4BC800u;
    {
        const bool branch_taken_0x4bc800 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x4BC804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC800u;
        // 0x4bc804: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc800) {
            ctx->pc = 0x4BCF34u;
            goto label_4bcf34;
        }
    }
    ctx->pc = 0x4BC808u;
    // 0x4bc808: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bc808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bc80c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc80cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc810: 0x0  nop
    ctx->pc = 0x4bc810u;
    // NOP
    // 0x4bc814: 0x0  nop
    ctx->pc = 0x4bc814u;
    // NOP
    // 0x4bc818: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x4bc818u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x4bc81c: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x4BC81Cu;
    {
        const bool branch_taken_0x4bc81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC81Cu;
        // 0x4bc820: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc81c) {
            ctx->pc = 0x4BCF38u;
            goto label_4bcf38;
        }
    }
    ctx->pc = 0x4BC824u;
label_4bc824:
    // 0x4bc824: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BC824u;
    {
        const bool branch_taken_0x4bc824 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC824u;
        // 0x4bc828: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc824) {
            ctx->pc = 0x4BC834u;
            goto label_4bc834;
        }
    }
    ctx->pc = 0x4BC82Cu;
    // 0x4bc82c: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x4BC82Cu;
    {
        const bool branch_taken_0x4bc82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC82Cu;
        // 0x4bc830: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc82c) {
            ctx->pc = 0x4BCF34u;
            goto label_4bcf34;
        }
    }
    ctx->pc = 0x4BC834u;
label_4bc834:
    // 0x4bc834: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BC834u;
    {
        const bool branch_taken_0x4bc834 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x4bc834) {
            ctx->pc = 0x4BC854u;
            goto label_4bc854;
        }
    }
    ctx->pc = 0x4BC83Cu;
    // 0x4bc83c: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BC83Cu;
    {
        const bool branch_taken_0x4bc83c = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x4bc83c) {
            ctx->pc = 0x4BC854u;
            goto label_4bc854;
        }
    }
    ctx->pc = 0x4BC844u;
    // 0x4bc844: 0xc12f4d0  jal         func_4BD340
    ctx->pc = 0x4BC844u;
    SET_GPR_U32(ctx, 31, 0x4BC84Cu);
    ctx->pc = 0x4BC848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC844u;
    // 0x4bc848: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BD340u, 0x4BC844u, 0x4BC84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC84Cu;
label_4bc84c:
    // 0x4bc84c: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x4BC84Cu;
    {
        const bool branch_taken_0x4bc84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC84Cu;
        // 0x4bc850: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc84c) {
            ctx->pc = 0x4BCF38u;
            goto label_4bcf38;
        }
    }
    ctx->pc = 0x4BC854u;
label_4bc854:
    // 0x4bc854: 0xc12f970  jal         func_4BE5C0
    ctx->pc = 0x4BC854u;
    SET_GPR_U32(ctx, 31, 0x4BC85Cu);
    ctx->pc = 0x4BC858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC854u;
    // 0x4bc858: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE5C0u, 0x4BC854u, 0x4BC85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC85Cu;
label_4bc85c:
    // 0x4bc85c: 0x3c027f80  lui         $v0, 0x7F80
    ctx->pc = 0x4bc85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
    // 0x4bc860: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BC860u;
    {
        const bool branch_taken_0x4bc860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC860u;
        // 0x4bc864: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc860) {
            ctx->pc = 0x4BC87Cu;
            goto label_4bc87c;
        }
    }
    ctx->pc = 0x4BC868u;
    // 0x4bc868: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BC868u;
    {
        const bool branch_taken_0x4bc868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc868) {
            ctx->pc = 0x4BC87Cu;
            goto label_4bc87c;
        }
    }
    ctx->pc = 0x4BC870u;
    // 0x4bc870: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x4bc870u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x4bc874: 0x16060019  bne         $s0, $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x4BC874u;
    {
        const bool branch_taken_0x4bc874 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x4BC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC874u;
        // 0x4bc878: 0x1357c2  srl         $t2, $s3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc874) {
            ctx->pc = 0x4BC8DCu;
            goto label_4bc8dc;
        }
    }
    ctx->pc = 0x4BC87Cu;
label_4bc87c:
    // 0x4bc87c: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BC87Cu;
    {
        const bool branch_taken_0x4bc87c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x4BC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC87Cu;
        // 0x4bc880: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc87c) {
            ctx->pc = 0x4BC898u;
            goto label_4bc898;
        }
    }
    ctx->pc = 0x4BC884u;
    // 0x4bc884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bc884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bc888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc88c: 0x0  nop
    ctx->pc = 0x4bc88cu;
    // NOP
    // 0x4bc890: 0x0  nop
    ctx->pc = 0x4bc890u;
    // NOP
    // 0x4bc894: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x4bc894u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
label_4bc898:
    // 0x4bc898: 0x66101a6  bgez        $s3, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x4BC898u;
    {
        const bool branch_taken_0x4bc898 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x4BC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC898u;
        // 0x4bc89c: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc898) {
            ctx->pc = 0x4BCF34u;
            goto label_4bcf34;
        }
    }
    ctx->pc = 0x4BC8A0u;
    // 0x4bc8a0: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x4bc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x4bc8a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4bc8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4bc8a8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bc8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bc8ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BC8ACu;
    {
        const bool branch_taken_0x4bc8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC8ACu;
        // 0x4bc8b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc8ac) {
            ctx->pc = 0x4BC8CCu;
            goto label_4bc8cc;
        }
    }
    ctx->pc = 0x4BC8B4u;
    // 0x4bc8b4: 0x460d6801  sub.s       $f0, $f13, $f13
    ctx->pc = 0x4bc8b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[13]);
    // 0x4bc8b8: 0x0  nop
    ctx->pc = 0x4bc8b8u;
    // NOP
    // 0x4bc8bc: 0x0  nop
    ctx->pc = 0x4bc8bcu;
    // NOP
    // 0x4bc8c0: 0x46000343  div.s       $f13, $f0, $f0
    ctx->pc = 0x4bc8c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x4bc8c4: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x4BC8C4u;
    {
        const bool branch_taken_0x4bc8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC8C4u;
        // 0x4bc8c8: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc8c4) {
            ctx->pc = 0x4BCF34u;
            goto label_4bcf34;
        }
    }
    ctx->pc = 0x4BC8CCu;
label_4bc8cc:
    // 0x4bc8cc: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x4BC8CCu;
    {
        const bool branch_taken_0x4bc8cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bc8cc) {
            ctx->pc = 0x4BC8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BC8CCu;
            // 0x4bc8d0: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
            ctx->f[13] = FPU_NEG_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BC8D4u;
            goto label_4bc8d4;
        }
    }
    ctx->pc = 0x4BC8D4u;
label_4bc8d4:
    // 0x4bc8d4: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x4BC8D4u;
    {
        const bool branch_taken_0x4bc8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC8D4u;
        // 0x4bc8d8: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc8d4) {
            ctx->pc = 0x4BCF34u;
            goto label_4bcf34;
        }
    }
    ctx->pc = 0x4BC8DCu;
label_4bc8dc:
    // 0x4bc8dc: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x4bc8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x4bc8e0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bc8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bc8e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BC8E4u;
    {
        const bool branch_taken_0x4bc8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC8E4u;
        // 0x4bc8e8: 0x3c024d00  lui         $v0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc8e4) {
            ctx->pc = 0x4BC904u;
            goto label_4bc904;
        }
    }
    ctx->pc = 0x4BC8ECu;
    // 0x4bc8ec: 0x4614a001  sub.s       $f0, $f20, $f20
    ctx->pc = 0x4bc8ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[20]);
    // 0x4bc8f0: 0x0  nop
    ctx->pc = 0x4bc8f0u;
    // NOP
    // 0x4bc8f4: 0x0  nop
    ctx->pc = 0x4bc8f4u;
    // NOP
    // 0x4bc8f8: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x4bc8f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x4bc8fc: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x4BC8FCu;
    {
        const bool branch_taken_0x4bc8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC8FCu;
        // 0x4bc900: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc8fc) {
            ctx->pc = 0x4BCF38u;
            goto label_4bcf38;
        }
    }
    ctx->pc = 0x4BC904u;
label_4bc904:
    // 0x4bc904: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x4bc904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4bc908: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x4BC908u;
    {
        const bool branch_taken_0x4bc908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC908u;
        // 0x4bc90c: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc908) {
            ctx->pc = 0x4BC9F0u;
            goto label_4bc9f0;
        }
    }
    ctx->pc = 0x4BC910u;
    // 0x4bc910: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x4bc910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x4bc914: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4bc914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4bc918: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BC918u;
    {
        const bool branch_taken_0x4bc918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC918u;
        // 0x4bc91c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc918) {
            ctx->pc = 0x4BC930u;
            goto label_4bc930;
        }
    }
    ctx->pc = 0x4BC920u;
    // 0x4bc920: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BC920u;
    {
        const bool branch_taken_0x4bc920 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x4BC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC920u;
        // 0x4bc924: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc920) {
            ctx->pc = 0x4BC948u;
            goto label_4bc948;
        }
    }
    ctx->pc = 0x4BC928u;
label_4bc928:
    // 0x4bc928: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x4BC928u;
    {
        const bool branch_taken_0x4bc928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC928u;
        // 0x4bc92c: 0xc440151c  lwc1        $f0, 0x151C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc928) {
            ctx->pc = 0x4BCF34u;
            goto label_4bcf34;
        }
    }
    ctx->pc = 0x4BC930u;
label_4bc930:
    // 0x4bc930: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x4bc930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x4bc934: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4bc934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4bc938: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BC938u;
    {
        const bool branch_taken_0x4bc938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc938) {
            ctx->pc = 0x4BC954u;
            goto label_4bc954;
        }
    }
    ctx->pc = 0x4BC940u;
    // 0x4bc940: 0x1e40fff9  bgtz        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4BC940u;
    {
        const bool branch_taken_0x4bc940 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x4BC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC940u;
        // 0x4bc944: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc940) {
            ctx->pc = 0x4BC928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bc928;
        }
    }
    ctx->pc = 0x4BC948u;
label_4bc948:
    // 0x4bc948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bc948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc94c: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x4BC94Cu;
    {
        const bool branch_taken_0x4bc94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC94Cu;
        // 0x4bc950: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc94c) {
            ctx->pc = 0x4BCF38u;
            goto label_4bcf38;
        }
    }
    ctx->pc = 0x4BC954u;
label_4bc954:
    // 0x4bc954: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bc954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bc958: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bc958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc95c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x4bc95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x4bc960: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bc960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bc964: 0x4601a301  sub.s       $f12, $f20, $f1
    ctx->pc = 0x4bc964u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x4bc968: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x4bc968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x4bc96c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x4bc96cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x4bc970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bc970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bc974: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4bc974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4bc978: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4bc978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4bc97c: 0x3c0136ec  lui         $at, 0x36EC
    ctx->pc = 0x4bc97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14060 << 16));
    // 0x4bc980: 0x3421a570  ori         $at, $at, 0xA570
    ctx->pc = 0x4bc980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42352);
    // 0x4bc984: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4bc984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4bc988: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x4bc988u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x4bc98c: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x4bc98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x4bc990: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x4bc990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x4bc994: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bc994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc998: 0x460c6182  mul.s       $f6, $f12, $f12
    ctx->pc = 0x4bc998u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x4bc99c: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x4bc99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x4bc9a0: 0x3421aa00  ori         $at, $at, 0xAA00
    ctx->pc = 0x4bc9a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43520);
    // 0x4bc9a4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4bc9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4bc9a8: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x4bc9a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x4bc9ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4bc9acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4bc9b0: 0x460563c2  mul.s       $f15, $f12, $f5
    ctx->pc = 0x4bc9b0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x4bc9b4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4bc9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4bc9b8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x4bc9b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4bc9bc: 0x46033242  mul.s       $f9, $f6, $f3
    ctx->pc = 0x4bc9bcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x4bc9c0: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x4bc9c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x4bc9c4: 0x46012381  sub.s       $f14, $f4, $f1
    ctx->pc = 0x4bc9c4u;
    ctx->f[14] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x4bc9c8: 0x460e7800  add.s       $f0, $f15, $f14
    ctx->pc = 0x4bc9c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x4bc9cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4bc9ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4bc9d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bc9d4: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4bc9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x4bc9d8: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4bc9d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc9dc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4bc9dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bc9e0: 0x460f0801  sub.s       $f0, $f1, $f15
    ctx->pc = 0x4bc9e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[15]);
    // 0x4bc9e4: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x4BC9E4u;
    {
        const bool branch_taken_0x4bc9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC9E4u;
        // 0x4bc9e8: 0x46007041  sub.s       $f1, $f14, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc9e4) {
            ctx->pc = 0x4BCC60u;
            goto label_4bcc60;
        }
    }
    ctx->pc = 0x4BC9ECu;
    // 0x4bc9ec: 0x0  nop
    ctx->pc = 0x4bc9ecu;
    // NOP
label_4bc9f0:
    // 0x4bc9f0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bc9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bc9f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc9f8: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x4bc9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4bc9fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BC9FCu;
    {
        const bool branch_taken_0x4bc9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC9FCu;
        // 0x4bca00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc9fc) {
            ctx->pc = 0x4BCA18u;
            goto label_4bca18;
        }
    }
    ctx->pc = 0x4BCA04u;
    // 0x4bca04: 0x3c014b80  lui         $at, 0x4B80
    ctx->pc = 0x4bca04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19328 << 16));
    // 0x4bca08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bca08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bca0c: 0x2409ffe8  addiu       $t1, $zero, -0x18
    ctx->pc = 0x4bca0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967272));
    // 0x4bca10: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x4bca10u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4bca14: 0x44106000  mfc1        $s0, $f12
    ctx->pc = 0x4bca14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_4bca18:
    // 0x4bca18: 0x2032824  and         $a1, $s0, $v1
    ctx->pc = 0x4bca18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x4bca1c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x4bca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x4bca20: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x4bca20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x4bca24: 0x2524ff81  addiu       $a0, $t1, -0x7F
    ctx->pc = 0x4bca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967169));
    // 0x4bca28: 0x3442c471  ori         $v0, $v0, 0xC471
    ctx->pc = 0x4bca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50289);
    // 0x4bca2c: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x4bca2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4bca30: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x4bca30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4bca34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BCA34u;
    {
        const bool branch_taken_0x4bca34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BCA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCA34u;
        // 0x4bca38: 0xa68025  or          $s0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bca34) {
            ctx->pc = 0x4BCA44u;
            goto label_4bca44;
        }
    }
    ctx->pc = 0x4BCA3Cu;
    // 0x4bca3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4BCA3Cu;
    {
        const bool branch_taken_0x4bca3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCA3Cu;
        // 0x4bca40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bca3c) {
            ctx->pc = 0x4BCA68u;
            goto label_4bca68;
        }
    }
    ctx->pc = 0x4BCA44u;
label_4bca44:
    // 0x4bca44: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4bca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x4bca48: 0x3442b3d6  ori         $v0, $v0, 0xB3D6
    ctx->pc = 0x4bca48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46038);
    // 0x4bca4c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x4bca4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4bca50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BCA50u;
    {
        const bool branch_taken_0x4bca50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCA50u;
        // 0x4bca54: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bca50) {
            ctx->pc = 0x4BCA68u;
            goto label_4bca68;
        }
    }
    ctx->pc = 0x4BCA58u;
    // 0x4bca58: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x4bca58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x4bca5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4bca5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bca60: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x4bca60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4bca64: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4bca64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4bca68:
    // 0x4bca68: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x4bca68u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4bca6c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4bca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4bca70: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x4bca70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4bca74: 0x24421498  addiu       $v0, $v0, 0x1498
    ctx->pc = 0x4bca74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5272));
    // 0x4bca78: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4bca78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bca7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bca7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bca80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bca80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bca84: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x4bca84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4bca88: 0x46026000  add.s       $f0, $f12, $f2
    ctx->pc = 0x4bca88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x4bca8c: 0x460263c1  sub.s       $f15, $f12, $f2
    ctx->pc = 0x4bca8cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x4bca90: 0x0  nop
    ctx->pc = 0x4bca90u;
    // NOP
    // 0x4bca94: 0x0  nop
    ctx->pc = 0x4bca94u;
    // NOP
    // 0x4bca98: 0x46000b83  div.s       $f14, $f1, $f0
    ctx->pc = 0x4bca98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x4bca9c: 0x460e7d02  mul.s       $f20, $f15, $f14
    ctx->pc = 0x4bca9cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[15], ctx->f[14]);
    // 0x4bcaa0: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x4bcaa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bcaa4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4bcaa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcaa8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4bcaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4bcaac: 0x34c6f000  ori         $a2, $a2, 0xF000
    ctx->pc = 0x4bcaacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61440);
    // 0x4bcab0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4bcab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4bcab4: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x4bcab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4bcab8: 0x101843  sra         $v1, $s0, 1
    ctx->pc = 0x4bcab8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 1));
    // 0x4bcabc: 0x81540  sll         $v0, $t0, 21
    ctx->pc = 0x4bcabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 21));
    // 0x4bcac0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x4bcac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x4bcac4: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x4bcac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x4bcac8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4bcac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4bcacc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4bcaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4bcad0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4bcad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4bcad4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4bcad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bcad8: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x4bcad8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4bcadc: 0x3c013e53  lui         $at, 0x3E53
    ctx->pc = 0x4bcadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15955 << 16));
    // 0x4bcae0: 0x3421f142  ori         $at, $at, 0xF142
    ctx->pc = 0x4bcae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61762);
    // 0x4bcae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bcae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bcae8: 0x3c013e6c  lui         $at, 0x3E6C
    ctx->pc = 0x4bcae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15980 << 16));
    // 0x4bcaec: 0x34213255  ori         $at, $at, 0x3255
    ctx->pc = 0x4bcaecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12885);
    // 0x4bcaf0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4bcaf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4bcaf4: 0x4614a2c2  mul.s       $f11, $f20, $f20
    ctx->pc = 0x4bcaf4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x4bcaf8: 0x3c013e8b  lui         $at, 0x3E8B
    ctx->pc = 0x4bcaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16011 << 16));
    // 0x4bcafc: 0x3421a305  ori         $at, $at, 0xA305
    ctx->pc = 0x4bcafcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41733);
    // 0x4bcb00: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x4bcb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x4bcb04: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x4bcb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x4bcb08: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x4bcb08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x4bcb0c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x4bcb0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x4bcb10: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x4bcb10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x4bcb14: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x4bcb14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4bcb18: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4bcb18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4bcb1c: 0x3c013edb  lui         $at, 0x3EDB
    ctx->pc = 0x4bcb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16091 << 16));
    // 0x4bcb20: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x4bcb20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x4bcb24: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x4bcb24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x4bcb28: 0x46042842  mul.s       $f1, $f5, $f4
    ctx->pc = 0x4bcb28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x4bcb2c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x4bcb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x4bcb30: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x4bcb30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x4bcb34: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x4bcb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x4bcb38: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x4bcb38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x4bcb3c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x4bcb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x4bcb40: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4bcb40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4bcb44: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x4bcb44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4bcb48: 0x46017841  sub.s       $f1, $f15, $f1
    ctx->pc = 0x4bcb48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x4bcb4c: 0x460b5982  mul.s       $f6, $f11, $f11
    ctx->pc = 0x4bcb4cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x4bcb50: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4bcb50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4bcb54: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4bcb54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4bcb58: 0x461428c0  add.s       $f3, $f5, $f20
    ctx->pc = 0x4bcb58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
    // 0x4bcb5c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x4bcb5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x4bcb60: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x4bcb60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x4bcb64: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4bcb64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4bcb68: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x4bcb68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x4bcb6c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x4bcb6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x4bcb70: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4bcb70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4bcb74: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x4bcb74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x4bcb78: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x4bcb78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x4bcb7c: 0x46052ac2  mul.s       $f11, $f5, $f5
    ctx->pc = 0x4bcb7cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x4bcb80: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x4bcb80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x4bcb84: 0x46045880  add.s       $f2, $f11, $f4
    ctx->pc = 0x4bcb84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x4bcb88: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x4bcb88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4bcb8c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x4bcb8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4bcb90: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4bcb90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4bcb94: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x4bcb94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4bcb98: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4bcb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4bcb9c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4bcb9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bcba0: 0x46041101  sub.s       $f4, $f2, $f4
    ctx->pc = 0x4bcba0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x4bcba4: 0x460b2101  sub.s       $f4, $f4, $f11
    ctx->pc = 0x4bcba4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[11]);
    // 0x4bcba8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4bcba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4bcbac: 0x46022bc2  mul.s       $f15, $f5, $f2
    ctx->pc = 0x4bcbacu;
    ctx->f[15] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x4bcbb0: 0x46040081  sub.s       $f2, $f0, $f4
    ctx->pc = 0x4bcbb0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x4bcbb4: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x4bcbb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x4bcbb8: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x4bcbb8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4bcbbc: 0x460e78c0  add.s       $f3, $f15, $f14
    ctx->pc = 0x4bcbbcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x4bcbc0: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x4bcbc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4bcbc4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4bcbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4bcbc8: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x4bcbc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x4bcbcc: 0x460f3881  sub.s       $f2, $f7, $f15
    ctx->pc = 0x4bcbccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[15]);
    // 0x4bcbd0: 0x3c01369d  lui         $at, 0x369D
    ctx->pc = 0x4bcbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13981 << 16));
    // 0x4bcbd4: 0x3421c3a0  ori         $at, $at, 0xC3A0
    ctx->pc = 0x4bcbd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50080);
    // 0x4bcbd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bcbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bcbdc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4bcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4bcbe0: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x4bcbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x4bcbe4: 0x3421384f  ori         $at, $at, 0x384F
    ctx->pc = 0x4bcbe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14415);
    // 0x4bcbe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bcbe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bcbec: 0x244214a8  addiu       $v0, $v0, 0x14A8
    ctx->pc = 0x4bcbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5288));
    // 0x4bcbf0: 0x46027181  sub.s       $f6, $f14, $f2
    ctx->pc = 0x4bcbf0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[14], ctx->f[2]);
    // 0x4bcbf4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4bcbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bcbf8: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x4bcbf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x4bcbfc: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x4bcbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4bcc00: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x4bcc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x4bcc04: 0x34213800  ori         $at, $at, 0x3800
    ctx->pc = 0x4bcc04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14336);
    // 0x4bcc08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bcc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bcc0c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4bcc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4bcc10: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x4bcc10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4bcc14: 0x244214a0  addiu       $v0, $v0, 0x14A0
    ctx->pc = 0x4bcc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5280));
    // 0x4bcc18: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x4bcc18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x4bcc1c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4bcc1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bcc20: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x4bcc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4bcc24: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x4bcc24u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4bcc28: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x4bcc28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x4bcc2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4bcc2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4bcc30: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x4bcc30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x4bcc34: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x4bcc34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x4bcc38: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x4bcc38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4bcc3c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x4bcc3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x4bcc40: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4bcc40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4bcc44: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x4bcc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4bcc48: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x4bcc48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4bcc4c: 0x460c2001  sub.s       $f0, $f4, $f12
    ctx->pc = 0x4bcc4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x4bcc50: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x4bcc50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x4bcc54: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4bcc54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4bcc58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4bcc58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4bcc5c: 0x0  nop
    ctx->pc = 0x4bcc5cu;
    // NOP
label_4bcc60:
    // 0x4bcc60: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x4bcc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x4bcc64: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x4bcc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x4bcc68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4bcc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4bcc6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bcc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bcc70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4bcc70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4bcc74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BCC74u;
    {
        const bool branch_taken_0x4bcc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bcc74) {
            ctx->pc = 0x4BCC84u;
            goto label_4bcc84;
        }
    }
    ctx->pc = 0x4BCC7Cu;
    // 0x4bcc7c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x4bcc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x4bcc80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4bcc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4bcc84:
    // 0x4bcc84: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x4bcc84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bcc88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4bcc88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcc8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bcc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bcc90: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4bcc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x4bcc94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bcc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bcc98: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4bcc98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bcc9c: 0x4602a801  sub.s       $f0, $f21, $f2
    ctx->pc = 0x4bcc9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x4bcca0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x4bcca0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4bcca4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x4bcca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x4bcca8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4bcca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4bccac: 0x460311c2  mul.s       $f7, $f2, $f3
    ctx->pc = 0x4bccacu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4bccb0: 0x46010180  add.s       $f6, $f0, $f1
    ctx->pc = 0x4bccb0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4bccb4: 0x46073340  add.s       $f13, $f6, $f7
    ctx->pc = 0x4bccb4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x4bccb8: 0x44076800  mfc1        $a3, $f13
    ctx->pc = 0x4bccb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x4bccbc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4bccbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bccc0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x4bccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x4bccc4: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x4bccc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4bccc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BCCC8u;
    {
        const bool branch_taken_0x4bccc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bccc8) {
            ctx->pc = 0x4BCCE8u;
            goto label_4bcce8;
        }
    }
    ctx->pc = 0x4BCCD0u;
    // 0x4bccd0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x4bccd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x4bccd4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x4bccd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x4bccd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bccd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bccdc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x4BCCDCu;
    {
        const bool branch_taken_0x4bccdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCCDCu;
        // 0x4bcce0: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bccdc) {
            ctx->pc = 0x4BCD70u;
            goto label_4bcd70;
        }
    }
    ctx->pc = 0x4BCCE4u;
    // 0x4bcce4: 0x0  nop
    ctx->pc = 0x4bcce4u;
    // NOP
label_4bcce8:
    // 0x4bcce8: 0x14a3000f  bne         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4BCCE8u;
    {
        const bool branch_taken_0x4bcce8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x4BCCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCCE8u;
        // 0x4bccec: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcce8) {
            ctx->pc = 0x4BCD28u;
            goto label_4bcd28;
        }
    }
    ctx->pc = 0x4BCCF0u;
    // 0x4bccf0: 0x3c013338  lui         $at, 0x3338
    ctx->pc = 0x4bccf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13112 << 16));
    // 0x4bccf4: 0x3421aa3c  ori         $at, $at, 0xAA3C
    ctx->pc = 0x4bccf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43580);
    // 0x4bccf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bccf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bccfc: 0x46076841  sub.s       $f1, $f13, $f7
    ctx->pc = 0x4bccfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
    // 0x4bcd00: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x4bcd00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x4bcd04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4bcd04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bcd08: 0x0  nop
    ctx->pc = 0x4bcd08u;
    // NOP
    // 0x4bcd0c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x4BCD0Cu;
    {
        const bool branch_taken_0x4bcd0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BCD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCD0Cu;
        // 0x4bcd10: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcd0c) {
            ctx->pc = 0x4BCD78u;
            goto label_4bcd78;
        }
    }
    ctx->pc = 0x4BCD14u;
    // 0x4bcd14: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x4bcd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x4bcd18: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x4bcd18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x4bcd1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bcd1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bcd20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4BCD20u;
    {
        const bool branch_taken_0x4bcd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCD20u;
        // 0x4bcd24: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcd20) {
            ctx->pc = 0x4BCD70u;
            goto label_4bcd70;
        }
    }
    ctx->pc = 0x4BCD28u;
label_4bcd28:
    // 0x4bcd28: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x4bcd28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x4bcd2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bcd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bcd30: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4bcd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bcd34: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x4bcd34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4bcd38: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BCD38u;
    {
        const bool branch_taken_0x4bcd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bcd38) {
            ctx->pc = 0x4BCD60u;
            goto label_4bcd60;
        }
    }
    ctx->pc = 0x4BCD40u;
    // 0x4bcd40: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x4bcd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x4bcd44: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BCD44u;
    {
        const bool branch_taken_0x4bcd44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCD44u;
        // 0x4bcd48: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcd44) {
            ctx->pc = 0x4BCD78u;
            goto label_4bcd78;
        }
    }
    ctx->pc = 0x4BCD4Cu;
    // 0x4bcd4c: 0x46076801  sub.s       $f0, $f13, $f7
    ctx->pc = 0x4bcd4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
    // 0x4bcd50: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x4bcd50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bcd54: 0x0  nop
    ctx->pc = 0x4bcd54u;
    // NOP
    // 0x4bcd58: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x4BCD58u;
    {
        const bool branch_taken_0x4bcd58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BCD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCD58u;
        // 0x4bcd5c: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcd58) {
            ctx->pc = 0x4BCD7Cu;
            goto label_4bcd7c;
        }
    }
    ctx->pc = 0x4BCD60u;
label_4bcd60:
    // 0x4bcd60: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x4bcd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x4bcd64: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x4bcd64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x4bcd68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bcd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bcd6c: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x4bcd6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_4bcd70:
    // 0x4bcd70: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x4BCD70u;
    {
        const bool branch_taken_0x4bcd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCD70u;
        // 0x4bcd74: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcd70) {
            ctx->pc = 0x4BCF34u;
            goto label_4bcf34;
        }
    }
    ctx->pc = 0x4BCD78u;
label_4bcd78:
    // 0x4bcd78: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4bcd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_4bcd7c:
    // 0x4bcd7c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bcd7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bcd80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4bcd80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcd84: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x4bcd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4bcd88: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x4bcd88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4bcd8c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4BCD8Cu;
    {
        const bool branch_taken_0x4bcd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCD8Cu;
        // 0x4bcd90: 0x225c3  sra         $a0, $v0, 23 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcd8c) {
            ctx->pc = 0x4BCDF8u;
            goto label_4bcdf8;
        }
    }
    ctx->pc = 0x4BCD94u;
    // 0x4bcd94: 0x2483ff82  addiu       $v1, $a0, -0x7E
    ctx->pc = 0x4bcd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967170));
    // 0x4bcd98: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x4bcd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x4bcd9c: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x4bcd9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x4bcda0: 0xa34821  addu        $t1, $a1, $v1
    ctx->pc = 0x4bcda0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4bcda4: 0x1261024  and         $v0, $t1, $a2
    ctx->pc = 0x4bcda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x4bcda8: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x4bcda8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x4bcdac: 0x2448ff81  addiu       $t0, $v0, -0x7F
    ctx->pc = 0x4bcdacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x4bcdb0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bcdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bcdb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bcdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bcdb8: 0x1031007  srav        $v0, $v1, $t0
    ctx->pc = 0x4bcdb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
    // 0x4bcdbc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4bcdbcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4bcdc0: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x4bcdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4bcdc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4bcdc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4bcdc8: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x4bcdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4bcdcc: 0x460c39c1  sub.s       $f7, $f7, $f12
    ctx->pc = 0x4bcdccu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x4bcdd0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x4bcdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x4bcdd4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4bcdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4bcdd8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x4bcdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4bcddc: 0x434807  srav        $t1, $v1, $v0
    ctx->pc = 0x4bcddcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x4bcde0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4bcde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bcde4: 0x46073100  add.s       $f4, $f6, $f7
    ctx->pc = 0x4bcde4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x4bcde8: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x4bcde8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4bcdec: 0x91023  negu        $v0, $t1
    ctx->pc = 0x4bcdecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x4bcdf0: 0x44480a  movz        $t1, $v0, $a0
    ctx->pc = 0x4bcdf0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x4bcdf4: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x4bcdf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_4bcdf8:
    // 0x4bcdf8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x4bcdf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcdfc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bce00: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4bce00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x4bce04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bce04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bce08: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4bce08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4bce0c: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x4bce0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x4bce10: 0x34217200  ori         $at, $at, 0x7200
    ctx->pc = 0x4bce10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29184);
    // 0x4bce14: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4bce14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4bce18: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x4bce18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x4bce1c: 0x34217218  ori         $at, $at, 0x7218
    ctx->pc = 0x4bce1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29208);
    // 0x4bce20: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4bce20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4bce24: 0x46076041  sub.s       $f1, $f12, $f7
    ctx->pc = 0x4bce24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[7]);
    // 0x4bce28: 0x3c0135bf  lui         $at, 0x35BF
    ctx->pc = 0x4bce28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13759 << 16));
    // 0x4bce2c: 0x3421be8c  ori         $at, $at, 0xBE8C
    ctx->pc = 0x4bce2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48780);
    // 0x4bce30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bce30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bce34: 0x460363c2  mul.s       $f15, $f12, $f3
    ctx->pc = 0x4bce34u;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x4bce38: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x4bce38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
    // 0x4bce3c: 0x3421bb4c  ori         $at, $at, 0xBB4C
    ctx->pc = 0x4bce3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47948);
    // 0x4bce40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bce40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bce44: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x4bce44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x4bce48: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x4bce48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
    // 0x4bce4c: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x4bce4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
    // 0x4bce50: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4bce50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4bce54: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x4bce54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x4bce58: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x4bce58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
    // 0x4bce5c: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x4bce5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x4bce60: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x4bce60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x4bce64: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x4bce64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
    // 0x4bce68: 0x3421b355  ori         $at, $at, 0xB355
    ctx->pc = 0x4bce68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45909);
    // 0x4bce6c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x4bce6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x4bce70: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x4bce70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x4bce74: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x4bce74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x4bce78: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x4bce78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x4bce7c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4bce7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x4bce80: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x4bce80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x4bce84: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4bce84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4bce88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bce88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bce8c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4bce8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4bce90: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x4bce90u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4bce94: 0x460e7b40  add.s       $f13, $f15, $f14
    ctx->pc = 0x4bce94u;
    ctx->f[13] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x4bce98: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x4bce98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x4bce9c: 0x460f6841  sub.s       $f1, $f13, $f15
    ctx->pc = 0x4bce9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
    // 0x4bcea0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4bcea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4bcea4: 0x46017241  sub.s       $f9, $f14, $f1
    ctx->pc = 0x4bcea4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[14], ctx->f[1]);
    // 0x4bcea8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x4bcea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x4bceac: 0x46096882  mul.s       $f2, $f13, $f9
    ctx->pc = 0x4bceacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
    // 0x4bceb0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4bceb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4bceb4: 0x46024880  add.s       $f2, $f9, $f2
    ctx->pc = 0x4bceb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
    // 0x4bceb8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x4bceb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x4bcebc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4bcebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4bcec0: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x4bcec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x4bcec4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4bcec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4bcec8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x4bcec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x4bcecc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4bceccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4bced0: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x4bced0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x4bced4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4bced4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4bced8: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x4bced8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x4bcedc: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x4bcedcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x4bcee0: 0x0  nop
    ctx->pc = 0x4bcee0u;
    // NOP
    // 0x4bcee4: 0x0  nop
    ctx->pc = 0x4bcee4u;
    // NOP
    // 0x4bcee8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x4bcee8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x4bceec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4bceecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4bcef0: 0x460d0041  sub.s       $f1, $f0, $f13
    ctx->pc = 0x4bcef0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x4bcef4: 0x46012341  sub.s       $f13, $f4, $f1
    ctx->pc = 0x4bcef4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x4bcef8: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x4bcef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bcefc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4bcefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bcf00: 0x915c0  sll         $v0, $t1, 23
    ctx->pc = 0x4bcf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 23));
    // 0x4bcf04: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4bcf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4bcf08: 0x51dc3  sra         $v1, $a1, 23
    ctx->pc = 0x4bcf08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 23));
    // 0x4bcf0c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BCF0Cu;
    {
        const bool branch_taken_0x4bcf0c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x4BCF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCF0Cu;
        // 0x4bcf10: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcf0c) {
            ctx->pc = 0x4BCF28u;
            goto label_4bcf28;
        }
    }
    ctx->pc = 0x4BCF14u;
    // 0x4bcf14: 0xc12f98c  jal         func_4BE630
    ctx->pc = 0x4BCF14u;
    SET_GPR_U32(ctx, 31, 0x4BCF1Cu);
    ctx->pc = 0x4BCF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BCF14u;
    // 0x4bcf18: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE630u, 0x4BCF14u, 0x4BCF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BCF1Cu;
label_4bcf1c:
    // 0x4bcf1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BCF1Cu;
    {
        const bool branch_taken_0x4bcf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCF1Cu;
        // 0x4bcf20: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcf1c) {
            ctx->pc = 0x4BCF30u;
            goto label_4bcf30;
        }
    }
    ctx->pc = 0x4BCF24u;
    // 0x4bcf24: 0x0  nop
    ctx->pc = 0x4bcf24u;
    // NOP
label_4bcf28:
    // 0x4bcf28: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x4bcf28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4bcf2c: 0x0  nop
    ctx->pc = 0x4bcf2cu;
    // NOP
label_4bcf30:
    // 0x4bcf30: 0x460da002  mul.s       $f0, $f20, $f13
    ctx->pc = 0x4bcf30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
label_4bcf34:
    // 0x4bcf34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4bcf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4bcf38:
    // 0x4bcf38: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4bcf38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bcf3c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4bcf3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bcf40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4bcf40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bcf44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4bcf44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bcf48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bcf48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bcf4c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x4bcf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4bcf50: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x4bcf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4bcf54: 0x3e00008  jr          $ra
    ctx->pc = 0x4BCF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BCF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BCF54u;
        // 0x4bcf58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BCF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BCF5Cu;
    // 0x4bcf5c: 0x0  nop
    ctx->pc = 0x4bcf5cu;
    // NOP
    ctx->pc = 0x4bcf60u;
}
