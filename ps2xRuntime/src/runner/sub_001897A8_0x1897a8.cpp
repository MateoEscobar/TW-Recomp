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

// Function: sub_001897A8
// Address: 0x1897a8 - 0x189ed8
void sub_001897A8_0x1897a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001897A8_0x1897a8");
#endif

    switch (ctx->pc) {
        case 0x1897d4u: goto label_1897d4;
        case 0x1897e4u: goto label_1897e4;
        case 0x189800u: goto label_189800;
        case 0x189814u: goto label_189814;
        case 0x189824u: goto label_189824;
        case 0x189838u: goto label_189838;
        case 0x189840u: goto label_189840;
        case 0x189850u: goto label_189850;
        case 0x18986cu: goto label_18986c;
        case 0x189898u: goto label_189898;
        case 0x1898b8u: goto label_1898b8;
        case 0x1898d0u: goto label_1898d0;
        case 0x1898e8u: goto label_1898e8;
        case 0x1898fcu: goto label_1898fc;
        case 0x189904u: goto label_189904;
        case 0x189910u: goto label_189910;
        case 0x189918u: goto label_189918;
        case 0x18994cu: goto label_18994c;
        case 0x18995cu: goto label_18995c;
        case 0x18996cu: goto label_18996c;
        case 0x189988u: goto label_189988;
        case 0x1899a0u: goto label_1899a0;
        case 0x1899b8u: goto label_1899b8;
        case 0x1899d0u: goto label_1899d0;
        case 0x1899dcu: goto label_1899dc;
        case 0x189a14u: goto label_189a14;
        case 0x189a24u: goto label_189a24;
        case 0x189a48u: goto label_189a48;
        case 0x189a60u: goto label_189a60;
        case 0x189a74u: goto label_189a74;
        case 0x189a80u: goto label_189a80;
        case 0x189a98u: goto label_189a98;
        case 0x189abcu: goto label_189abc;
        case 0x189ad4u: goto label_189ad4;
        case 0x189af0u: goto label_189af0;
        case 0x189afcu: goto label_189afc;
        case 0x189b14u: goto label_189b14;
        case 0x189b20u: goto label_189b20;
        case 0x189b34u: goto label_189b34;
        case 0x189b48u: goto label_189b48;
        case 0x189b78u: goto label_189b78;
        case 0x189b84u: goto label_189b84;
        case 0x189b9cu: goto label_189b9c;
        case 0x189bb0u: goto label_189bb0;
        case 0x189bccu: goto label_189bcc;
        case 0x189bd8u: goto label_189bd8;
        case 0x189be4u: goto label_189be4;
        case 0x189bf8u: goto label_189bf8;
        case 0x189c10u: goto label_189c10;
        case 0x189c18u: goto label_189c18;
        case 0x189c40u: goto label_189c40;
        case 0x189c78u: goto label_189c78;
        case 0x189c94u: goto label_189c94;
        case 0x189ca8u: goto label_189ca8;
        case 0x189cbcu: goto label_189cbc;
        case 0x189cccu: goto label_189ccc;
        case 0x189cd8u: goto label_189cd8;
        case 0x189ce8u: goto label_189ce8;
        case 0x189cf8u: goto label_189cf8;
        case 0x189d30u: goto label_189d30;
        case 0x189d58u: goto label_189d58;
        case 0x189d6cu: goto label_189d6c;
        case 0x189d80u: goto label_189d80;
        case 0x189d90u: goto label_189d90;
        case 0x189d9cu: goto label_189d9c;
        case 0x189db4u: goto label_189db4;
        case 0x189e3cu: goto label_189e3c;
        case 0x189e4cu: goto label_189e4c;
        case 0x189e5cu: goto label_189e5c;
        case 0x189e6cu: goto label_189e6c;
        case 0x189e74u: goto label_189e74;
        case 0x189e90u: goto label_189e90;
        case 0x189ea0u: goto label_189ea0;
        default: break;
    }

    ctx->pc = 0x1897a8u;

    // 0x1897a8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1897a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1897ac: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1897acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1897b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1897b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897b4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1897b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1897b8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1897b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1897bc: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1897bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1897c0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1897c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1897c4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1897c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1897c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1897c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1897cc: 0xc061664  jal         func_185990
    ctx->pc = 0x1897CCu;
    SET_GPR_U32(ctx, 31, 0x1897D4u);
    ctx->pc = 0x1897D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1897CCu;
    // 0x1897d0: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x185990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185990u, 0x1897CCu, 0x1897D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1897D4u;
label_1897d4:
    // 0x1897d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1897D4u;
    {
        const bool branch_taken_0x1897d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897D4u;
        // 0x1897d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897d4) {
            ctx->pc = 0x1897F4u;
            goto label_1897f4;
        }
    }
    ctx->pc = 0x1897DCu;
    // 0x1897dc: 0xc06258a  jal         func_189628
    ctx->pc = 0x1897DCu;
    SET_GPR_U32(ctx, 31, 0x1897E4u);
    ctx->pc = 0x1897E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1897DCu;
    // 0x1897e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189628u, 0x1897DCu, 0x1897E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1897E4u;
label_1897e4:
    // 0x1897e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1897e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1897e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1897e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897ec: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x1897ECu;
    {
        const bool branch_taken_0x1897ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897ECu;
        // 0x1897f0: 0xae230bbc  sw          $v1, 0xBBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3004), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897ec) {
            ctx->pc = 0x189EACu;
            goto label_189eac;
        }
    }
    ctx->pc = 0x1897F4u;
label_1897f4:
    // 0x1897f4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1897f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1897f8: 0xc05e352  jal         func_178D48
    ctx->pc = 0x1897F8u;
    SET_GPR_U32(ctx, 31, 0x189800u);
    ctx->pc = 0x1897FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1897F8u;
    // 0x1897fc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D48u, 0x1897F8u, 0x189800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189800u;
label_189800:
    // 0x189800: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x189800u;
    {
        const bool branch_taken_0x189800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189800u;
        // 0x189804: 0x27b00004  addiu       $s0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189800) {
            ctx->pc = 0x189874u;
            goto label_189874;
        }
    }
    ctx->pc = 0x189808u;
    // 0x189808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18980c: 0xc061668  jal         func_1859A0
    ctx->pc = 0x18980Cu;
    SET_GPR_U32(ctx, 31, 0x189814u);
    ctx->pc = 0x189810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18980Cu;
    // 0x189810: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x18980Cu, 0x189814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189814u;
label_189814:
    // 0x189814: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x189814u;
    {
        const bool branch_taken_0x189814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189814) {
            ctx->pc = 0x189818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189814u;
            // 0x189818: 0x8e2201b4  lw          $v0, 0x1B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189878u;
            goto label_189878;
        }
    }
    ctx->pc = 0x18981Cu;
    // 0x18981c: 0xc06258a  jal         func_189628
    ctx->pc = 0x18981Cu;
    SET_GPR_U32(ctx, 31, 0x189824u);
    ctx->pc = 0x189820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18981Cu;
    // 0x189820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189628u, 0x18981Cu, 0x189824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189824u;
label_189824:
    // 0x189824: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x189824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18982c: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x18982cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x189830: 0xc061e58  jal         func_187960
    ctx->pc = 0x189830u;
    SET_GPR_U32(ctx, 31, 0x189838u);
    ctx->pc = 0x189834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189830u;
    // 0x189834: 0x8fa70030  lw          $a3, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x189830u, 0x189838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189838u;
label_189838:
    // 0x189838: 0xc061234  jal         func_1848D0
    ctx->pc = 0x189838u;
    SET_GPR_U32(ctx, 31, 0x189840u);
    ctx->pc = 0x18983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189838u;
    // 0x18983c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848D0u, 0x189838u, 0x189840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189840u;
label_189840:
    // 0x189840: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189848: 0xc061f4a  jal         func_187D28
    ctx->pc = 0x189848u;
    SET_GPR_U32(ctx, 31, 0x189850u);
    ctx->pc = 0x18984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189848u;
    // 0x18984c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x189848u, 0x189850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189850u;
label_189850:
    // 0x189850: 0x10400195  beqz        $v0, . + 4 + (0x195 << 2)
    ctx->pc = 0x189850u;
    {
        const bool branch_taken_0x189850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189850u;
        // 0x189854: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189850) {
            ctx->pc = 0x189EA8u;
            goto label_189ea8;
        }
    }
    ctx->pc = 0x189858u;
    // 0x189858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18985c: 0x8fa7002c  lw          $a3, 0x2C($sp)
    ctx->pc = 0x18985cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x189860: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x189860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189864: 0xc061eaa  jal         func_187AA8
    ctx->pc = 0x189864u;
    SET_GPR_U32(ctx, 31, 0x18986Cu);
    ctx->pc = 0x189868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189864u;
    // 0x189868: 0x8fa80030  lw          $t0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x189864u, 0x18986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18986Cu;
label_18986c:
    // 0x18986c: 0x1000018f  b           . + 4 + (0x18F << 2)
    ctx->pc = 0x18986Cu;
    {
        const bool branch_taken_0x18986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18986Cu;
        // 0x189870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18986c) {
            ctx->pc = 0x189EACu;
            goto label_189eac;
        }
    }
    ctx->pc = 0x189874u;
label_189874:
    // 0x189874: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x189874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_189878:
    // 0x189878: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x189878u;
    {
        const bool branch_taken_0x189878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189878u;
        // 0x18987c: 0x263200b8  addiu       $s2, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189878) {
            ctx->pc = 0x189938u;
            goto label_189938;
        }
    }
    ctx->pc = 0x189880u;
    // 0x189880: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x189880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x189884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x189884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189888: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x189888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x18988c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x18988cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189890: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189894: 0x262300b4  addiu       $v1, $s1, 0xB4
    ctx->pc = 0x189894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
label_189898:
    // 0x189898: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x189898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18989c: 0x10a60020  beq         $a1, $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x18989Cu;
    {
        const bool branch_taken_0x18989c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1898A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18989Cu;
        // 0x1898a0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18989c) {
            ctx->pc = 0x189920u;
            goto label_189920;
        }
    }
    ctx->pc = 0x1898A4u;
    // 0x1898a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1898a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1898a8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1898A8u;
    {
        const bool branch_taken_0x1898a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1898ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898A8u;
        // 0x1898ac: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1898a8) {
            ctx->pc = 0x189924u;
            goto label_189924;
        }
    }
    ctx->pc = 0x1898B0u;
    // 0x1898b0: 0xc05e036  jal         func_1780D8
    ctx->pc = 0x1898B0u;
    SET_GPR_U32(ctx, 31, 0x1898B8u);
    ctx->pc = 0x1898B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898B0u;
    // 0x1898b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D8u, 0x1898B0u, 0x1898B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898B8u;
label_1898b8:
    // 0x1898b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1898b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1898bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1898c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1898c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898c8: 0xc05dd76  jal         func_1775D8
    ctx->pc = 0x1898C8u;
    SET_GPR_U32(ctx, 31, 0x1898D0u);
    ctx->pc = 0x1898CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898C8u;
    // 0x1898cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1775D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1775D8u, 0x1898C8u, 0x1898D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898D0u;
label_1898d0:
    // 0x1898d0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1898D0u;
    {
        const bool branch_taken_0x1898d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1898D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898D0u;
        // 0x1898d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1898d0) {
            ctx->pc = 0x189910u;
            goto label_189910;
        }
    }
    ctx->pc = 0x1898D8u;
    // 0x1898d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1898d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1898dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898e0: 0xc05dd34  jal         func_1774D0
    ctx->pc = 0x1898E0u;
    SET_GPR_U32(ctx, 31, 0x1898E8u);
    ctx->pc = 0x1898E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898E0u;
    // 0x1898e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1774D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1774D0u, 0x1898E0u, 0x1898E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898E8u;
label_1898e8:
    // 0x1898e8: 0x14400166  bnez        $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x1898E8u;
    {
        const bool branch_taken_0x1898e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1898ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898E8u;
        // 0x1898ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1898e8) {
            ctx->pc = 0x189E84u;
            goto label_189e84;
        }
    }
    ctx->pc = 0x1898F0u;
    // 0x1898f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1898f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898f4: 0xc05dec0  jal         func_177B00
    ctx->pc = 0x1898F4u;
    SET_GPR_U32(ctx, 31, 0x1898FCu);
    ctx->pc = 0x1898F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898F4u;
    // 0x1898f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B00u, 0x1898F4u, 0x1898FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898FCu;
label_1898fc:
    // 0x1898fc: 0xc06258a  jal         func_189628
    ctx->pc = 0x1898FCu;
    SET_GPR_U32(ctx, 31, 0x189904u);
    ctx->pc = 0x189900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898FCu;
    // 0x189900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189628u, 0x1898FCu, 0x189904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189904u;
label_189904:
    // 0x189904: 0xae330bbc  sw          $s3, 0xBBC($s1)
    ctx->pc = 0x189904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3004), GPR_U32(ctx, 19));
    // 0x189908: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x189908u;
    {
        const bool branch_taken_0x189908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189908u;
        // 0x18990c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189908) {
            ctx->pc = 0x189EACu;
            goto label_189eac;
        }
    }
    ctx->pc = 0x189910u;
label_189910:
    // 0x189910: 0xc06258a  jal         func_189628
    ctx->pc = 0x189910u;
    SET_GPR_U32(ctx, 31, 0x189918u);
    ctx->pc = 0x189914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189910u;
    // 0x189914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189628u, 0x189910u, 0x189918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189918u;
label_189918:
    // 0x189918: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x189918u;
    {
        const bool branch_taken_0x189918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189918u;
        // 0x18991c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189918) {
            ctx->pc = 0x189EACu;
            goto label_189eac;
        }
    }
    ctx->pc = 0x189920u;
label_189920:
    // 0x189920: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x189920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_189924:
    // 0x189924: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x189924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x189928: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x189928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x18992c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x18992Cu;
    {
        const bool branch_taken_0x18992c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18992Cu;
        // 0x189930: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18992c) {
            ctx->pc = 0x189898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189898;
        }
    }
    ctx->pc = 0x189934u;
    // 0x189934: 0xae2001b4  sw          $zero, 0x1B4($s1)
    ctx->pc = 0x189934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 0));
label_189938:
    // 0x189938: 0x26240bc4  addiu       $a0, $s1, 0xBC4
    ctx->pc = 0x189938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3012));
    // 0x18993c: 0x26300bd4  addiu       $s0, $s1, 0xBD4
    ctx->pc = 0x18993cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3028));
    // 0x189940: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x189940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189944: 0xc0e4060  jal         func_390180
    ctx->pc = 0x189944u;
    SET_GPR_U32(ctx, 31, 0x18994Cu);
    ctx->pc = 0x189948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189944u;
    // 0x189948: 0x26330bf4  addiu       $s3, $s1, 0xBF4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 3060));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x189944u, 0x18994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18994Cu;
label_18994c:
    // 0x18994c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18994Cu;
    {
        const bool branch_taken_0x18994c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18994c) {
            ctx->pc = 0x189980u;
            goto label_189980;
        }
    }
    ctx->pc = 0x189954u;
    // 0x189954: 0xc0e4060  jal         func_390180
    ctx->pc = 0x189954u;
    SET_GPR_U32(ctx, 31, 0x18995Cu);
    ctx->pc = 0x189958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189954u;
    // 0x189958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x189954u, 0x18995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18995Cu;
label_18995c:
    // 0x18995c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18995Cu;
    {
        const bool branch_taken_0x18995c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18995c) {
            ctx->pc = 0x189980u;
            goto label_189980;
        }
    }
    ctx->pc = 0x189964u;
    // 0x189964: 0xc0e4060  jal         func_390180
    ctx->pc = 0x189964u;
    SET_GPR_U32(ctx, 31, 0x18996Cu);
    ctx->pc = 0x189968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189964u;
    // 0x189968: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x189964u, 0x18996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18996Cu;
label_18996c:
    // 0x18996c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18996Cu;
    {
        const bool branch_taken_0x18996c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18996c) {
            ctx->pc = 0x189980u;
            goto label_189980;
        }
    }
    ctx->pc = 0x189974u;
    // 0x189974: 0x8e220be4  lw          $v0, 0xBE4($s1)
    ctx->pc = 0x189974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3044)));
    // 0x189978: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x189978u;
    {
        const bool branch_taken_0x189978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189978) {
            ctx->pc = 0x189910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189910;
        }
    }
    ctx->pc = 0x189980u;
label_189980:
    // 0x189980: 0xc0e4060  jal         func_390180
    ctx->pc = 0x189980u;
    SET_GPR_U32(ctx, 31, 0x189988u);
    ctx->pc = 0x189984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189980u;
    // 0x189984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x189980u, 0x189988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189988u;
label_189988:
    // 0x189988: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189988u;
    {
        const bool branch_taken_0x189988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189988u;
        // 0x18998c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189988) {
            ctx->pc = 0x189998u;
            goto label_189998;
        }
    }
    ctx->pc = 0x189990u;
    // 0x189990: 0xc4402d7c  lwc1        $f0, 0x2D7C($v0)
    ctx->pc = 0x189990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189994: 0xe6200bcc  swc1        $f0, 0xBCC($s1)
    ctx->pc = 0x189994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3020), bits); }
label_189998:
    // 0x189998: 0xc0e4060  jal         func_390180
    ctx->pc = 0x189998u;
    SET_GPR_U32(ctx, 31, 0x1899A0u);
    ctx->pc = 0x18999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189998u;
    // 0x18999c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x189998u, 0x1899A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1899A0u;
label_1899a0:
    // 0x1899a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1899A0u;
    {
        const bool branch_taken_0x1899a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1899A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899A0u;
        // 0x1899a4: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899a0) {
            ctx->pc = 0x1899B0u;
            goto label_1899b0;
        }
    }
    ctx->pc = 0x1899A8u;
    // 0x1899a8: 0xc4402d7c  lwc1        $f0, 0x2D7C($v0)
    ctx->pc = 0x1899a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1899ac: 0xe6200bdc  swc1        $f0, 0xBDC($s1)
    ctx->pc = 0x1899acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3036), bits); }
label_1899b0:
    // 0x1899b0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1899B0u;
    SET_GPR_U32(ctx, 31, 0x1899B8u);
    ctx->pc = 0x1899B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1899B0u;
    // 0x1899b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1899B0u, 0x1899B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1899B8u;
label_1899b8:
    // 0x1899b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1899B8u;
    {
        const bool branch_taken_0x1899b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1899BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899B8u;
        // 0x1899bc: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899b8) {
            ctx->pc = 0x1899C8u;
            goto label_1899c8;
        }
    }
    ctx->pc = 0x1899C0u;
    // 0x1899c0: 0xc4402d7c  lwc1        $f0, 0x2D7C($v0)
    ctx->pc = 0x1899c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1899c4: 0xe6200bfc  swc1        $f0, 0xBFC($s1)
    ctx->pc = 0x1899c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3068), bits); }
label_1899c8:
    // 0x1899c8: 0xc0625d4  jal         func_189750
    ctx->pc = 0x1899C8u;
    SET_GPR_U32(ctx, 31, 0x1899D0u);
    ctx->pc = 0x1899CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1899C8u;
    // 0x1899cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189750u, 0x1899C8u, 0x1899D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1899D0u;
label_1899d0:
    // 0x1899d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1899d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1899d4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1899D4u;
    SET_GPR_U32(ctx, 31, 0x1899DCu);
    ctx->pc = 0x1899D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1899D4u;
    // 0x1899d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1899D4u, 0x1899DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1899DCu;
label_1899dc:
    // 0x1899dc: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x1899DCu;
    {
        const bool branch_taken_0x1899dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1899dc) {
            ctx->pc = 0x189C38u;
            goto label_189c38;
        }
    }
    ctx->pc = 0x1899E4u;
    // 0x1899e4: 0xc6200bcc  lwc1        $f0, 0xBCC($s1)
    ctx->pc = 0x1899e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1899e8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1899e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1899ec: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1899ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1899f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1899f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1899f4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1899f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1899f8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1899f8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1899fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1899fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189a00: 0x0  nop
    ctx->pc = 0x189a00u;
    // NOP
    // 0x189a04: 0x4500008c  bc1f        . + 4 + (0x8C << 2)
    ctx->pc = 0x189A04u;
    {
        const bool branch_taken_0x189a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189a04) {
            ctx->pc = 0x189C38u;
            goto label_189c38;
        }
    }
    ctx->pc = 0x189A0Cu;
    // 0x189a0c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x189A0Cu;
    SET_GPR_U32(ctx, 31, 0x189A14u);
    ctx->pc = 0x189A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A0Cu;
    // 0x189a10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x189A0Cu, 0x189A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A14u;
label_189a14:
    // 0x189a14: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x189a14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a1c: 0xc05e036  jal         func_1780D8
    ctx->pc = 0x189A1Cu;
    SET_GPR_U32(ctx, 31, 0x189A24u);
    ctx->pc = 0x189A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A1Cu;
    // 0x189a20: 0x8e85037c  lw          $a1, 0x37C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D8u, 0x189A1Cu, 0x189A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A24u;
label_189a24:
    // 0x189a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a28: 0x8e8200d8  lw          $v0, 0xD8($s4)
    ctx->pc = 0x189a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x189a2c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x189A2Cu;
    {
        const bool branch_taken_0x189a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189a2c) {
            ctx->pc = 0x189A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189A2Cu;
            // 0x189a30: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189AA0u;
            goto label_189aa0;
        }
    }
    ctx->pc = 0x189A34u;
    // 0x189a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x189a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189a40: 0xc05dd76  jal         func_1775D8
    ctx->pc = 0x189A40u;
    SET_GPR_U32(ctx, 31, 0x189A48u);
    ctx->pc = 0x189A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A40u;
    // 0x189a44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1775D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1775D8u, 0x189A40u, 0x189A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A48u;
label_189a48:
    // 0x189a48: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x189A48u;
    {
        const bool branch_taken_0x189a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A48u;
        // 0x189a4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a48) {
            ctx->pc = 0x189EA8u;
            goto label_189ea8;
        }
    }
    ctx->pc = 0x189A50u;
    // 0x189a50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x189a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189a58: 0xc05dd34  jal         func_1774D0
    ctx->pc = 0x189A58u;
    SET_GPR_U32(ctx, 31, 0x189A60u);
    ctx->pc = 0x189A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A58u;
    // 0x189a5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1774D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1774D0u, 0x189A58u, 0x189A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A60u;
label_189a60:
    // 0x189a60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x189A60u;
    {
        const bool branch_taken_0x189a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A60u;
        // 0x189a64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a60) {
            ctx->pc = 0x189A88u;
            goto label_189a88;
        }
    }
    ctx->pc = 0x189A68u;
    // 0x189a68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a6c: 0xc05dee0  jal         func_177B80
    ctx->pc = 0x189A6Cu;
    SET_GPR_U32(ctx, 31, 0x189A74u);
    ctx->pc = 0x189A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A6Cu;
    // 0x189a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B80u, 0x189A6Cu, 0x189A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A74u;
label_189a74:
    // 0x189a74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x189a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a78: 0xc085ea6  jal         func_217A98
    ctx->pc = 0x189A78u;
    SET_GPR_U32(ctx, 31, 0x189A80u);
    ctx->pc = 0x189A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A78u;
    // 0x189a7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217A98u, 0x189A78u, 0x189A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A80u;
label_189a80:
    // 0x189a80: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x189A80u;
    {
        const bool branch_taken_0x189a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A80u;
        // 0x189a84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a80) {
            ctx->pc = 0x189E98u;
            goto label_189e98;
        }
    }
    ctx->pc = 0x189A88u;
label_189a88:
    // 0x189a88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a90: 0xc05dec0  jal         func_177B00
    ctx->pc = 0x189A90u;
    SET_GPR_U32(ctx, 31, 0x189A98u);
    ctx->pc = 0x189A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A90u;
    // 0x189a94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B00u, 0x189A90u, 0x189A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A98u;
label_189a98:
    // 0x189a98: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x189A98u;
    {
        const bool branch_taken_0x189a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a98) {
            ctx->pc = 0x189E6Cu;
            goto label_189e6c;
        }
    }
    ctx->pc = 0x189AA0u;
label_189aa0:
    // 0x189aa0: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x189AA0u;
    {
        const bool branch_taken_0x189aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AA0u;
        // 0x189aa4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189aa0) {
            ctx->pc = 0x189B3Cu;
            goto label_189b3c;
        }
    }
    ctx->pc = 0x189AA8u;
    // 0x189aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189aac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ab4: 0xc05dd76  jal         func_1775D8
    ctx->pc = 0x189AB4u;
    SET_GPR_U32(ctx, 31, 0x189ABCu);
    ctx->pc = 0x189AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189AB4u;
    // 0x189ab8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1775D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1775D8u, 0x189AB4u, 0x189ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189ABCu;
label_189abc:
    // 0x189abc: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x189ABCu;
    {
        const bool branch_taken_0x189abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189ABCu;
        // 0x189ac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189abc) {
            ctx->pc = 0x189EA8u;
            goto label_189ea8;
        }
    }
    ctx->pc = 0x189AC4u;
    // 0x189ac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189acc: 0xc05dd34  jal         func_1774D0
    ctx->pc = 0x189ACCu;
    SET_GPR_U32(ctx, 31, 0x189AD4u);
    ctx->pc = 0x189AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189ACCu;
    // 0x189ad0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1774D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1774D0u, 0x189ACCu, 0x189AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189AD4u;
label_189ad4:
    // 0x189ad4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x189AD4u;
    {
        const bool branch_taken_0x189ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AD4u;
        // 0x189ad8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ad4) {
            ctx->pc = 0x189B28u;
            goto label_189b28;
        }
    }
    ctx->pc = 0x189ADCu;
    // 0x189adc: 0x8e8500d8  lw          $a1, 0xD8($s4)
    ctx->pc = 0x189adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x189ae0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x189AE0u;
    {
        const bool branch_taken_0x189ae0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x189AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AE0u;
        // 0x189ae4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ae0) {
            ctx->pc = 0x189B04u;
            goto label_189b04;
        }
    }
    ctx->pc = 0x189AE8u;
    // 0x189ae8: 0xc05df54  jal         func_177D50
    ctx->pc = 0x189AE8u;
    SET_GPR_U32(ctx, 31, 0x189AF0u);
    ctx->pc = 0x189AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189AE8u;
    // 0x189aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177D50u, 0x189AE8u, 0x189AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189AF0u;
label_189af0:
    // 0x189af0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189af4: 0xc06258a  jal         func_189628
    ctx->pc = 0x189AF4u;
    SET_GPR_U32(ctx, 31, 0x189AFCu);
    ctx->pc = 0x189AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189AF4u;
    // 0x189af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189628u, 0x189AF4u, 0x189AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189AFCu;
label_189afc:
    // 0x189afc: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x189AFCu;
    {
        const bool branch_taken_0x189afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AFCu;
        // 0x189b00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189afc) {
            ctx->pc = 0x189EACu;
            goto label_189eac;
        }
    }
    ctx->pc = 0x189B04u;
label_189b04:
    // 0x189b04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b0c: 0xc05dee0  jal         func_177B80
    ctx->pc = 0x189B0Cu;
    SET_GPR_U32(ctx, 31, 0x189B14u);
    ctx->pc = 0x189B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B0Cu;
    // 0x189b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B80u, 0x189B0Cu, 0x189B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B14u;
label_189b14:
    // 0x189b14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x189b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b18: 0xc085ea6  jal         func_217A98
    ctx->pc = 0x189B18u;
    SET_GPR_U32(ctx, 31, 0x189B20u);
    ctx->pc = 0x189B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B18u;
    // 0x189b1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217A98u, 0x189B18u, 0x189B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B20u;
label_189b20:
    // 0x189b20: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x189B20u;
    {
        const bool branch_taken_0x189b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B20u;
        // 0x189b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b20) {
            ctx->pc = 0x189E98u;
            goto label_189e98;
        }
    }
    ctx->pc = 0x189B28u;
label_189b28:
    // 0x189b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b2c: 0xc05dec0  jal         func_177B00
    ctx->pc = 0x189B2Cu;
    SET_GPR_U32(ctx, 31, 0x189B34u);
    ctx->pc = 0x189B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B2Cu;
    // 0x189b30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B00u, 0x189B2Cu, 0x189B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B34u;
label_189b34:
    // 0x189b34: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x189B34u;
    {
        const bool branch_taken_0x189b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b34) {
            ctx->pc = 0x189E6Cu;
            goto label_189e6c;
        }
    }
    ctx->pc = 0x189B3Cu;
label_189b3c:
    // 0x189b3c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x189b3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189b40: 0x269303c8  addiu       $s3, $s4, 0x3C8
    ctx->pc = 0x189b40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 968));
    // 0x189b44: 0x0  nop
    ctx->pc = 0x189b44u;
    // NOP
label_189b48:
    // 0x189b48: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x189b48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x189b4c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x189B4Cu;
    {
        const bool branch_taken_0x189b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B4Cu;
        // 0x189b50: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b4c) {
            ctx->pc = 0x189C24u;
            goto label_189c24;
        }
    }
    ctx->pc = 0x189B54u;
    // 0x189b54: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x189b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x189b58: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x189B58u;
    {
        const bool branch_taken_0x189b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B58u;
        // 0x189b5c: 0x2c620007  sltiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b58) {
            ctx->pc = 0x189C28u;
            goto label_189c28;
        }
    }
    ctx->pc = 0x189B60u;
    // 0x189b60: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x189b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x189b64: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x189b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x189b68: 0xa3a00066  sb          $zero, 0x66($sp)
    ctx->pc = 0x189b68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x189b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b70: 0xc10c4de  jal         func_431378
    ctx->pc = 0x189B70u;
    SET_GPR_U32(ctx, 31, 0x189B78u);
    ctx->pc = 0x189B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B70u;
    // 0x189b74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x189B70u, 0x189B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B78u;
label_189b78:
    // 0x189b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b7c: 0xc05e3d0  jal         func_178F40
    ctx->pc = 0x189B7Cu;
    SET_GPR_U32(ctx, 31, 0x189B84u);
    ctx->pc = 0x189B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B7Cu;
    // 0x189b80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178F40u, 0x189B7Cu, 0x189B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B84u;
label_189b84:
    // 0x189b84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x189b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x189b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b94: 0xc05be80  jal         func_16FA00
    ctx->pc = 0x189B94u;
    SET_GPR_U32(ctx, 31, 0x189B9Cu);
    ctx->pc = 0x189B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B94u;
    // 0x189b98: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FA00u, 0x189B94u, 0x189B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B9Cu;
label_189b9c:
    // 0x189b9c: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x189B9Cu;
    {
        const bool branch_taken_0x189b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B9Cu;
        // 0x189ba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b9c) {
            ctx->pc = 0x189EA8u;
            goto label_189ea8;
        }
    }
    ctx->pc = 0x189BA4u;
    // 0x189ba4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ba8: 0xc05be60  jal         func_16F980
    ctx->pc = 0x189BA8u;
    SET_GPR_U32(ctx, 31, 0x189BB0u);
    ctx->pc = 0x189BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BA8u;
    // 0x189bac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F980u, 0x189BA8u, 0x189BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BB0u;
label_189bb0:
    // 0x189bb0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x189BB0u;
    {
        const bool branch_taken_0x189bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BB0u;
        // 0x189bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189bb0) {
            ctx->pc = 0x189C00u;
            goto label_189c00;
        }
    }
    ctx->pc = 0x189BB8u;
    // 0x189bb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x189bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x189bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bc4: 0xc05bc4a  jal         func_16F128
    ctx->pc = 0x189BC4u;
    SET_GPR_U32(ctx, 31, 0x189BCCu);
    ctx->pc = 0x189BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BC4u;
    // 0x189bc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F128u, 0x189BC4u, 0x189BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BCCu;
label_189bcc:
    // 0x189bcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x189bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bd0: 0xc042f5c  jal         func_10BD70
    ctx->pc = 0x189BD0u;
    SET_GPR_U32(ctx, 31, 0x189BD8u);
    ctx->pc = 0x189BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BD0u;
    // 0x189bd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD70u, 0x189BD0u, 0x189BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BD8u;
label_189bd8:
    // 0x189bd8: 0x8e700024  lw          $s0, 0x24($s3)
    ctx->pc = 0x189bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x189bdc: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x189BDCu;
    SET_GPR_U32(ctx, 31, 0x189BE4u);
    ctx->pc = 0x189BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BDCu;
    // 0x189be0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x189BDCu, 0x189BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BE4u;
label_189be4:
    // 0x189be4: 0x160200ac  bne         $s0, $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x189BE4u;
    {
        const bool branch_taken_0x189be4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x189BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BE4u;
        // 0x189be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189be4) {
            ctx->pc = 0x189E98u;
            goto label_189e98;
        }
    }
    ctx->pc = 0x189BECu;
    // 0x189bec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x189becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bf0: 0xc089974  jal         func_2265D0
    ctx->pc = 0x189BF0u;
    SET_GPR_U32(ctx, 31, 0x189BF8u);
    ctx->pc = 0x189BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BF0u;
    // 0x189bf4: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x189BF0u, 0x189BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BF8u;
label_189bf8:
    // 0x189bf8: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x189BF8u;
    {
        const bool branch_taken_0x189bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BF8u;
        // 0x189bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189bf8) {
            ctx->pc = 0x189E98u;
            goto label_189e98;
        }
    }
    ctx->pc = 0x189C00u;
label_189c00:
    // 0x189c00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x189c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c08: 0xc05bc98  jal         func_16F260
    ctx->pc = 0x189C08u;
    SET_GPR_U32(ctx, 31, 0x189C10u);
    ctx->pc = 0x189C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C08u;
    // 0x189c0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F260u, 0x189C08u, 0x189C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C10u;
label_189c10:
    // 0x189c10: 0xc06258a  jal         func_189628
    ctx->pc = 0x189C10u;
    SET_GPR_U32(ctx, 31, 0x189C18u);
    ctx->pc = 0x189C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C10u;
    // 0x189c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189628u, 0x189C10u, 0x189C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C18u;
label_189c18:
    // 0x189c18: 0xae350bbc  sw          $s5, 0xBBC($s1)
    ctx->pc = 0x189c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3004), GPR_U32(ctx, 21));
    // 0x189c1c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x189C1Cu;
    {
        const bool branch_taken_0x189c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C1Cu;
        // 0x189c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c1c) {
            ctx->pc = 0x189EACu;
            goto label_189eac;
        }
    }
    ctx->pc = 0x189C24u;
label_189c24:
    // 0x189c24: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x189c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_189c28:
    // 0x189c28: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x189C28u;
    {
        const bool branch_taken_0x189c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C28u;
        // 0x189c2c: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c28) {
            ctx->pc = 0x189B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189b48;
        }
    }
    ctx->pc = 0x189C30u;
    // 0x189c30: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x189C30u;
    {
        const bool branch_taken_0x189c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C30u;
        // 0x189c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c30) {
            ctx->pc = 0x189EACu;
            goto label_189eac;
        }
    }
    ctx->pc = 0x189C38u;
label_189c38:
    // 0x189c38: 0xc0e4060  jal         func_390180
    ctx->pc = 0x189C38u;
    SET_GPR_U32(ctx, 31, 0x189C40u);
    ctx->pc = 0x189C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C38u;
    // 0x189c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x189C38u, 0x189C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C40u;
label_189c40:
    // 0x189c40: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x189C40u;
    {
        const bool branch_taken_0x189c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189c40) {
            ctx->pc = 0x189CF0u;
            goto label_189cf0;
        }
    }
    ctx->pc = 0x189C48u;
    // 0x189c48: 0xc6200bdc  lwc1        $f0, 0xBDC($s1)
    ctx->pc = 0x189c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189c4c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x189c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x189c50: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x189c50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x189c54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x189c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189c58: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x189c58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x189c5c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x189c5cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x189c60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x189c60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189c64: 0x0  nop
    ctx->pc = 0x189c64u;
    // NOP
    // 0x189c68: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x189C68u;
    {
        const bool branch_taken_0x189c68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189c68) {
            ctx->pc = 0x189CF0u;
            goto label_189cf0;
        }
    }
    ctx->pc = 0x189C70u;
    // 0x189c70: 0xc0e4060  jal         func_390180
    ctx->pc = 0x189C70u;
    SET_GPR_U32(ctx, 31, 0x189C78u);
    ctx->pc = 0x189C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C70u;
    // 0x189c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x189C70u, 0x189C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C78u;
label_189c78:
    // 0x189c78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x189c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c7c: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x189c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x189c80: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x189C80u;
    {
        const bool branch_taken_0x189c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C80u;
        // 0x189c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c80) {
            ctx->pc = 0x189E98u;
            goto label_189e98;
        }
    }
    ctx->pc = 0x189C88u;
    // 0x189c88: 0x8e4500c4  lw          $a1, 0xC4($s2)
    ctx->pc = 0x189c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x189c8c: 0xc06046c  jal         func_1811B0
    ctx->pc = 0x189C8Cu;
    SET_GPR_U32(ctx, 31, 0x189C94u);
    ctx->pc = 0x189C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C8Cu;
    // 0x189c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1811B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1811B0u, 0x189C8Cu, 0x189C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C94u;
label_189c94:
    // 0x189c94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ca0: 0xc060270  jal         func_1809C0
    ctx->pc = 0x189CA0u;
    SET_GPR_U32(ctx, 31, 0x189CA8u);
    ctx->pc = 0x189CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CA0u;
    // 0x189ca4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1809C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1809C0u, 0x189CA0u, 0x189CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CA8u;
label_189ca8:
    // 0x189ca8: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x189CA8u;
    {
        const bool branch_taken_0x189ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CA8u;
        // 0x189cac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ca8) {
            ctx->pc = 0x189EA8u;
            goto label_189ea8;
        }
    }
    ctx->pc = 0x189CB0u;
    // 0x189cb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189cb4: 0xc06022e  jal         func_1808B8
    ctx->pc = 0x189CB4u;
    SET_GPR_U32(ctx, 31, 0x189CBCu);
    ctx->pc = 0x189CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CB4u;
    // 0x189cb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1808B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1808B8u, 0x189CB4u, 0x189CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CBCu;
label_189cbc:
    // 0x189cbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x189CBCu;
    {
        const bool branch_taken_0x189cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CBCu;
        // 0x189cc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cbc) {
            ctx->pc = 0x189CE0u;
            goto label_189ce0;
        }
    }
    ctx->pc = 0x189CC4u;
    // 0x189cc4: 0xc0603d6  jal         func_180F58
    ctx->pc = 0x189CC4u;
    SET_GPR_U32(ctx, 31, 0x189CCCu);
    ctx->pc = 0x189CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CC4u;
    // 0x189cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F58u, 0x189CC4u, 0x189CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CCCu;
label_189ccc:
    // 0x189ccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189cd0: 0xc0e5526  jal         func_395498
    ctx->pc = 0x189CD0u;
    SET_GPR_U32(ctx, 31, 0x189CD8u);
    ctx->pc = 0x189CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CD0u;
    // 0x189cd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395498u, 0x189CD0u, 0x189CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CD8u;
label_189cd8:
    // 0x189cd8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x189CD8u;
    {
        const bool branch_taken_0x189cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CD8u;
        // 0x189cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cd8) {
            ctx->pc = 0x189E98u;
            goto label_189e98;
        }
    }
    ctx->pc = 0x189CE0u;
label_189ce0:
    // 0x189ce0: 0xc0603b8  jal         func_180EE0
    ctx->pc = 0x189CE0u;
    SET_GPR_U32(ctx, 31, 0x189CE8u);
    ctx->pc = 0x189CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CE0u;
    // 0x189ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180EE0u, 0x189CE0u, 0x189CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CE8u;
label_189ce8:
    // 0x189ce8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x189CE8u;
    {
        const bool branch_taken_0x189ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189ce8) {
            ctx->pc = 0x189E6Cu;
            goto label_189e6c;
        }
    }
    ctx->pc = 0x189CF0u;
label_189cf0:
    // 0x189cf0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x189CF0u;
    SET_GPR_U32(ctx, 31, 0x189CF8u);
    ctx->pc = 0x189CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CF0u;
    // 0x189cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x189CF0u, 0x189CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CF8u;
label_189cf8:
    // 0x189cf8: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x189CF8u;
    {
        const bool branch_taken_0x189cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189cf8) {
            ctx->pc = 0x189CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189CF8u;
            // 0x189cfc: 0x8e300be4  lw          $s0, 0xBE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3044)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189DBCu;
            goto label_189dbc;
        }
    }
    ctx->pc = 0x189D00u;
    // 0x189d00: 0xc6200bfc  lwc1        $f0, 0xBFC($s1)
    ctx->pc = 0x189d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189d04: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x189d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x189d08: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x189d08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x189d0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x189d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189d10: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x189d10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x189d14: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x189d14u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x189d18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x189d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189d1c: 0x0  nop
    ctx->pc = 0x189d1cu;
    // NOP
    // 0x189d20: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x189D20u;
    {
        const bool branch_taken_0x189d20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189d20) {
            ctx->pc = 0x189D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189D20u;
            // 0x189d24: 0x8e300be4  lw          $s0, 0xBE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3044)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189DBCu;
            goto label_189dbc;
        }
    }
    ctx->pc = 0x189D28u;
    // 0x189d28: 0xc0e4088  jal         func_390220
    ctx->pc = 0x189D28u;
    SET_GPR_U32(ctx, 31, 0x189D30u);
    ctx->pc = 0x189D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D28u;
    // 0x189d2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390220u, 0x189D28u, 0x189D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D30u;
label_189d30:
    // 0x189d30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x189d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d34: 0x8e421300  lw          $v0, 0x1300($s2)
    ctx->pc = 0x189d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4864)));
    // 0x189d38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x189D38u;
    {
        const bool branch_taken_0x189d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189d38) {
            ctx->pc = 0x189D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189D38u;
            // 0x189d3c: 0x8e4512f0  lw          $a1, 0x12F0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189D50u;
            goto label_189d50;
        }
    }
    ctx->pc = 0x189D40u;
    // 0x189d40: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x189d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x189d44: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x189D44u;
    {
        const bool branch_taken_0x189d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D44u;
        // 0x189d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d44) {
            ctx->pc = 0x189E98u;
            goto label_189e98;
        }
    }
    ctx->pc = 0x189D4Cu;
    // 0x189d4c: 0x8e4512f0  lw          $a1, 0x12F0($s2)
    ctx->pc = 0x189d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4848)));
label_189d50:
    // 0x189d50: 0xc06046c  jal         func_1811B0
    ctx->pc = 0x189D50u;
    SET_GPR_U32(ctx, 31, 0x189D58u);
    ctx->pc = 0x189D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D50u;
    // 0x189d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1811B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1811B0u, 0x189D50u, 0x189D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D58u;
label_189d58:
    // 0x189d58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d64: 0xc05cc5c  jal         func_173170
    ctx->pc = 0x189D64u;
    SET_GPR_U32(ctx, 31, 0x189D6Cu);
    ctx->pc = 0x189D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D64u;
    // 0x189d68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173170u, 0x189D64u, 0x189D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D6Cu;
label_189d6c:
    // 0x189d6c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x189D6Cu;
    {
        const bool branch_taken_0x189d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D6Cu;
        // 0x189d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d6c) {
            ctx->pc = 0x189EA8u;
            goto label_189ea8;
        }
    }
    ctx->pc = 0x189D74u;
    // 0x189d74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d78: 0xc05cc1a  jal         func_173068
    ctx->pc = 0x189D78u;
    SET_GPR_U32(ctx, 31, 0x189D80u);
    ctx->pc = 0x189D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D78u;
    // 0x189d7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173068u, 0x189D78u, 0x189D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D80u;
label_189d80:
    // 0x189d80: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x189D80u;
    {
        const bool branch_taken_0x189d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D80u;
        // 0x189d84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d80) {
            ctx->pc = 0x189DACu;
            goto label_189dac;
        }
    }
    ctx->pc = 0x189D88u;
    // 0x189d88: 0xc05cdc6  jal         func_173718
    ctx->pc = 0x189D88u;
    SET_GPR_U32(ctx, 31, 0x189D90u);
    ctx->pc = 0x189D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D88u;
    // 0x189d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173718u, 0x189D88u, 0x189D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D90u;
label_189d90:
    // 0x189d90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d94: 0xc0e1d94  jal         func_387650
    ctx->pc = 0x189D94u;
    SET_GPR_U32(ctx, 31, 0x189D9Cu);
    ctx->pc = 0x189D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D94u;
    // 0x189d98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387650u, 0x189D94u, 0x189D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D9Cu;
label_189d9c:
    // 0x189d9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x189d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189da4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x189DA4u;
    {
        const bool branch_taken_0x189da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189DA4u;
        // 0x189da8: 0xa2431308  sb          $v1, 0x1308($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4872), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189da4) {
            ctx->pc = 0x189E98u;
            goto label_189e98;
        }
    }
    ctx->pc = 0x189DACu;
label_189dac:
    // 0x189dac: 0xc05cda8  jal         func_1736A0
    ctx->pc = 0x189DACu;
    SET_GPR_U32(ctx, 31, 0x189DB4u);
    ctx->pc = 0x189DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189DACu;
    // 0x189db0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1736A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1736A0u, 0x189DACu, 0x189DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189DB4u;
label_189db4:
    // 0x189db4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x189DB4u;
    {
        const bool branch_taken_0x189db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189db4) {
            ctx->pc = 0x189E6Cu;
            goto label_189e6c;
        }
    }
    ctx->pc = 0x189DBCu;
label_189dbc:
    // 0x189dbc: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x189DBCu;
    {
        const bool branch_taken_0x189dbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x189DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189DBCu;
        // 0x189dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189dbc) {
            ctx->pc = 0x189EACu;
            goto label_189eac;
        }
    }
    ctx->pc = 0x189DC4u;
    // 0x189dc4: 0xc6200bec  lwc1        $f0, 0xBEC($s1)
    ctx->pc = 0x189dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189dc8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x189dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x189dcc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x189dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x189dd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x189dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189dd4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x189dd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x189dd8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x189dd8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x189ddc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x189ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189de0: 0x0  nop
    ctx->pc = 0x189de0u;
    // NOP
    // 0x189de4: 0x45020032  bc1fl       . + 4 + (0x32 << 2)
    ctx->pc = 0x189DE4u;
    {
        const bool branch_taken_0x189de4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189de4) {
            ctx->pc = 0x189DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189DE4u;
            // 0x189de8: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189EB0u;
            goto label_189eb0;
        }
    }
    ctx->pc = 0x189DECu;
    // 0x189dec: 0x92020040  lbu         $v0, 0x40($s0)
    ctx->pc = 0x189decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x189df0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x189DF0u;
    {
        const bool branch_taken_0x189df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189DF0u;
        // 0x189df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189df0) {
            ctx->pc = 0x189E98u;
            goto label_189e98;
        }
    }
    ctx->pc = 0x189DF8u;
    // 0x189df8: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x189df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x189dfc: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x189DFCu;
    {
        const bool branch_taken_0x189dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189dfc) {
            ctx->pc = 0x189E98u;
            goto label_189e98;
        }
    }
    ctx->pc = 0x189E04u;
    // 0x189e04: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x189e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x189e08: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x189E08u;
    {
        const bool branch_taken_0x189e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189e08) {
            ctx->pc = 0x189E34u;
            goto label_189e34;
        }
    }
    ctx->pc = 0x189E10u;
    // 0x189e10: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x189e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x189e14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x189E14u;
    {
        const bool branch_taken_0x189e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e14) {
            ctx->pc = 0x189E34u;
            goto label_189e34;
        }
    }
    ctx->pc = 0x189E1Cu;
    // 0x189e1c: 0x92020041  lbu         $v0, 0x41($s0)
    ctx->pc = 0x189e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x189e20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189E20u;
    {
        const bool branch_taken_0x189e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e20) {
            ctx->pc = 0x189E34u;
            goto label_189e34;
        }
    }
    ctx->pc = 0x189E28u;
    // 0x189e28: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x189e28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x189e2c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x189E2Cu;
    {
        const bool branch_taken_0x189e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e2c) {
            ctx->pc = 0x189E98u;
            goto label_189e98;
        }
    }
    ctx->pc = 0x189E34u;
label_189e34:
    // 0x189e34: 0xc060b28  jal         func_182CA0
    ctx->pc = 0x189E34u;
    SET_GPR_U32(ctx, 31, 0x189E3Cu);
    ctx->pc = 0x189E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E34u;
    // 0x189e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182CA0u, 0x189E34u, 0x189E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E3Cu;
label_189e3c:
    // 0x189e3c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x189E3Cu;
    {
        const bool branch_taken_0x189e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E3Cu;
        // 0x189e40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e3c) {
            ctx->pc = 0x189EACu;
            goto label_189eac;
        }
    }
    ctx->pc = 0x189E44u;
    // 0x189e44: 0xc060b0e  jal         func_182C38
    ctx->pc = 0x189E44u;
    SET_GPR_U32(ctx, 31, 0x189E4Cu);
    ctx->pc = 0x189E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E44u;
    // 0x189e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182C38u, 0x189E44u, 0x189E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E4Cu;
label_189e4c:
    // 0x189e4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189E4Cu;
    {
        const bool branch_taken_0x189e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E4Cu;
        // 0x189e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e4c) {
            ctx->pc = 0x189E64u;
            goto label_189e64;
        }
    }
    ctx->pc = 0x189E54u;
    // 0x189e54: 0xc065cac  jal         func_1972B0
    ctx->pc = 0x189E54u;
    SET_GPR_U32(ctx, 31, 0x189E5Cu);
    ctx->pc = 0x189E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E54u;
    // 0x189e58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1972B0u, 0x189E54u, 0x189E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E5Cu;
label_189e5c:
    // 0x189e5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x189E5Cu;
    {
        const bool branch_taken_0x189e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E5Cu;
        // 0x189e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e5c) {
            ctx->pc = 0x189E98u;
            goto label_189e98;
        }
    }
    ctx->pc = 0x189E64u;
label_189e64:
    // 0x189e64: 0xc060b42  jal         func_182D08
    ctx->pc = 0x189E64u;
    SET_GPR_U32(ctx, 31, 0x189E6Cu);
    ctx->pc = 0x189E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E64u;
    // 0x189e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D08u, 0x189E64u, 0x189E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E6Cu;
label_189e6c:
    // 0x189e6c: 0xc06258a  jal         func_189628
    ctx->pc = 0x189E6Cu;
    SET_GPR_U32(ctx, 31, 0x189E74u);
    ctx->pc = 0x189E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E6Cu;
    // 0x189e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189628u, 0x189E6Cu, 0x189E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E74u;
label_189e74:
    // 0x189e74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x189e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189e7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x189E7Cu;
    {
        const bool branch_taken_0x189e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E7Cu;
        // 0x189e80: 0xae230bbc  sw          $v1, 0xBBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3004), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e7c) {
            ctx->pc = 0x189EACu;
            goto label_189eac;
        }
    }
    ctx->pc = 0x189E84u;
label_189e84:
    // 0x189e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e88: 0xc05dee0  jal         func_177B80
    ctx->pc = 0x189E88u;
    SET_GPR_U32(ctx, 31, 0x189E90u);
    ctx->pc = 0x189E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E88u;
    // 0x189e8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B80u, 0x189E88u, 0x189E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E90u;
label_189e90:
    // 0x189e90: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x189e90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x189e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_189e98:
    // 0x189e98: 0xc06258a  jal         func_189628
    ctx->pc = 0x189E98u;
    SET_GPR_U32(ctx, 31, 0x189EA0u);
    ctx->pc = 0x189628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189628u, 0x189E98u, 0x189EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EA0u;
label_189ea0:
    // 0x189ea0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189EA0u;
    {
        const bool branch_taken_0x189ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EA0u;
        // 0x189ea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ea0) {
            ctx->pc = 0x189EACu;
            goto label_189eac;
        }
    }
    ctx->pc = 0x189EA8u;
label_189ea8:
    // 0x189ea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x189ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189eac:
    // 0x189eac: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x189eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_189eb0:
    // 0x189eb0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x189eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x189eb4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x189eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x189eb8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x189eb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x189ebc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x189ebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x189ec0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x189ec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x189ec4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x189ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x189ec8: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x189ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x189ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x189ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189ECCu;
        // 0x189ed0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189ED4u;
    // 0x189ed4: 0x0  nop
    ctx->pc = 0x189ed4u;
    // NOP
    ctx->pc = 0x189ed8u;
}
