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

// Function: sub_00353818
// Address: 0x353818 - 0x353a10
void sub_00353818_0x353818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353818_0x353818");
#endif

    switch (ctx->pc) {
        case 0x353884u: goto label_353884;
        case 0x3538a4u: goto label_3538a4;
        case 0x3538acu: goto label_3538ac;
        case 0x3538e8u: goto label_3538e8;
        case 0x3538fcu: goto label_3538fc;
        case 0x353914u: goto label_353914;
        case 0x353984u: goto label_353984;
        case 0x3539d0u: goto label_3539d0;
        default: break;
    }

    ctx->pc = 0x353818u;

    // 0x353818: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x353818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x35381c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x35381cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x353820: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x353820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x353824: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x353824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353828: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x353828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x35382c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x35382cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353830: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x353830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x353834: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x353834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353838: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x353838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x35383c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x35383cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353840: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x353840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x353844: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x353844u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353848: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x353848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x35384c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x35384cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353850: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x353850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x353854: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x353854u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353858: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x353858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x35385c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x35385cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x353860: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x353860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x353864: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x353864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x353868: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x353868u;
    {
        const bool branch_taken_0x353868 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x35386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353868u;
        // 0x35386c: 0xafa90030  sw          $t1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353868) {
            ctx->pc = 0x35387Cu;
            goto label_35387c;
        }
    }
    ctx->pc = 0x353870u;
    // 0x353870: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x353870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x353874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353878: 0xac620174  sw          $v0, 0x174($v1)
    ctx->pc = 0x353878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x510174u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510174u, _value); } while (0);
label_35387c:
    // 0x35387c: 0xc0d4ca6  jal         func_353298
    ctx->pc = 0x35387Cu;
    SET_GPR_U32(ctx, 31, 0x353884u);
    ctx->pc = 0x353880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35387Cu;
    // 0x353880: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x35387Cu, 0x353884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353884u;
label_353884:
    // 0x353884: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x353884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353888: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x353888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x35388c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x353890: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x353890u;
    {
        const bool branch_taken_0x353890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353890u;
        // 0x353894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353890) {
            ctx->pc = 0x3538A4u;
            goto label_3538a4;
        }
    }
    ctx->pc = 0x353898u;
    // 0x353898: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x353898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35389c: 0xc0d497e  jal         func_3525F8
    ctx->pc = 0x35389Cu;
    SET_GPR_U32(ctx, 31, 0x3538A4u);
    ctx->pc = 0x3538A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35389Cu;
    // 0x3538a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3525F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3525F8u, 0x35389Cu, 0x3538A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3538A4u;
label_3538a4:
    // 0x3538a4: 0xc0d4c08  jal         func_353020
    ctx->pc = 0x3538A4u;
    SET_GPR_U32(ctx, 31, 0x3538ACu);
    ctx->pc = 0x3538A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3538A4u;
    // 0x3538a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353020u, 0x3538A4u, 0x3538ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3538ACu;
label_3538ac:
    // 0x3538ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3538acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3538b0: 0x12400049  beqz        $s2, . + 4 + (0x49 << 2)
    ctx->pc = 0x3538B0u;
    {
        const bool branch_taken_0x3538b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3538B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3538B0u;
        // 0x3538b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3538b0) {
            ctx->pc = 0x3539D8u;
            goto label_3539d8;
        }
    }
    ctx->pc = 0x3538B8u;
    // 0x3538b8: 0x8faa00f0  lw          $t2, 0xF0($sp)
    ctx->pc = 0x3538b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3538bc: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3538bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x3538c0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3538c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3538c4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x3538c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3538c8: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x3538c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3538cc: 0x8c640850  lw          $a0, 0x850($v1)
    ctx->pc = 0x3538ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2128)));
    // 0x3538d0: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3538d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3538d4: 0x8fab00f8  lw          $t3, 0xF8($sp)
    ctx->pc = 0x3538d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x3538d8: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x3538d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3538dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3538dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3538e0: 0xc0e84f4  jal         func_3A13D0
    ctx->pc = 0x3538E0u;
    SET_GPR_U32(ctx, 31, 0x3538E8u);
    ctx->pc = 0x3538E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3538E0u;
    // 0x3538e4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A13D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A13D0u, 0x3538E0u, 0x3538E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3538E8u;
label_3538e8:
    // 0x3538e8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3538E8u;
    {
        const bool branch_taken_0x3538e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3538ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3538E8u;
        // 0x3538ec: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3538e8) {
            ctx->pc = 0x3539D8u;
            goto label_3539d8;
        }
    }
    ctx->pc = 0x3538F0u;
    // 0x3538f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3538f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3538f4: 0xc0e74ea  jal         func_39D3A8
    ctx->pc = 0x3538F4u;
    SET_GPR_U32(ctx, 31, 0x3538FCu);
    ctx->pc = 0x3538F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3538F4u;
    // 0x3538f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D3A8u, 0x3538F4u, 0x3538FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3538FCu;
label_3538fc:
    // 0x3538fc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3538fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353900: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x353900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x353904: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x353904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353908: 0xe4540094  swc1        $f20, 0x94($v0)
    ctx->pc = 0x353908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x35390c: 0xc0e828a  jal         func_3A0A28
    ctx->pc = 0x35390Cu;
    SET_GPR_U32(ctx, 31, 0x353914u);
    ctx->pc = 0x353910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35390Cu;
    // 0x353910: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0A28u, 0x35390Cu, 0x353914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353914u;
label_353914:
    // 0x353914: 0x52800016  beql        $s4, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x353914u;
    {
        const bool branch_taken_0x353914 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x353914) {
            ctx->pc = 0x353918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353914u;
            // 0x353918: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353970u;
            goto label_353970;
        }
    }
    ctx->pc = 0x35391Cu;
    // 0x35391c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x35391Cu;
    {
        const bool branch_taken_0x35391c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x353920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35391Cu;
        // 0x353920: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35391c) {
            ctx->pc = 0x35396Cu;
            goto label_35396c;
        }
    }
    ctx->pc = 0x353924u;
    // 0x353924: 0xc6860008  lwc1        $f6, 0x8($s4)
    ctx->pc = 0x353924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x353928: 0xc607000c  lwc1        $f7, 0xC($s0)
    ctx->pc = 0x353928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x35392c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x35392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353930: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x353930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353934: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x353934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x353938: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x353938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35393c: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x35393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x353940: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x353940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x353944: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x353944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x353948: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x353948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x35394c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x35394cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x353950: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x353950u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x353954: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x353954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x353958: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x353958u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35395c: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x35395cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x353960: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x353960u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x353964: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x353964u;
    {
        const bool branch_taken_0x353964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353964u;
        // 0x353968: 0xe7a7002c  swc1        $f7, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x353964) {
            ctx->pc = 0x35398Cu;
            goto label_35398c;
        }
    }
    ctx->pc = 0x35396Cu;
label_35396c:
    // 0x35396c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x35396cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_353970:
    // 0x353970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x353970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353974: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x353974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353978: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x353978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35397c: 0xc0d51fa  jal         func_3547E8
    ctx->pc = 0x35397Cu;
    SET_GPR_U32(ctx, 31, 0x353984u);
    ctx->pc = 0x353980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35397Cu;
    // 0x353980: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3547E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3547E8u, 0x35397Cu, 0x353984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353984u;
label_353984:
    // 0x353984: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x353984u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353988: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x353988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35398c:
    // 0x35398c: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x35398Cu;
    {
        const bool branch_taken_0x35398c = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x353990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35398Cu;
        // 0x353990: 0x151842  srl         $v1, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35398c) {
            ctx->pc = 0x3539A8u;
            goto label_3539a8;
        }
    }
    ctx->pc = 0x353994u;
    // 0x353994: 0x44956000  mtc1        $s5, $f12
    ctx->pc = 0x353994u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x353998: 0x0  nop
    ctx->pc = 0x353998u;
    // NOP
    // 0x35399c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x35399cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3539a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3539A0u;
    {
        const bool branch_taken_0x3539a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3539A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3539A0u;
        // 0x3539a4: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3539a0) {
            ctx->pc = 0x3539C4u;
            goto label_3539c4;
        }
    }
    ctx->pc = 0x3539A8u;
label_3539a8:
    // 0x3539a8: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x3539a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x3539ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3539acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3539b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3539b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3539b4: 0x0  nop
    ctx->pc = 0x3539b4u;
    // NOP
    // 0x3539b8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x3539b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3539bc: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x3539bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x3539c0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3539c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3539c4:
    // 0x3539c4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3539c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3539c8: 0xc0e761c  jal         func_39D870
    ctx->pc = 0x3539C8u;
    SET_GPR_U32(ctx, 31, 0x3539D0u);
    ctx->pc = 0x3539CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3539C8u;
    // 0x3539cc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D870u, 0x3539C8u, 0x3539D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3539D0u;
label_3539d0:
    // 0x3539d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3539D0u;
    {
        const bool branch_taken_0x3539d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3539D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3539D0u;
        // 0x3539d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3539d0) {
            ctx->pc = 0x3539DCu;
            goto label_3539dc;
        }
    }
    ctx->pc = 0x3539D8u;
label_3539d8:
    // 0x3539d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3539d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3539dc:
    // 0x3539dc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3539dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3539e0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3539e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3539e4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3539e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3539e8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3539e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3539ec: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3539ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3539f0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3539f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3539f4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3539f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3539f8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3539f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3539fc: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x3539fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x353a00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x353a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x353a04: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x353a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x353a08: 0x3e00008  jr          $ra
    ctx->pc = 0x353A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353A08u;
        // 0x353a0c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353A10u;
}
