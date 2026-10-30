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

// Function: sub_0029C910
// Address: 0x29c910 - 0x29ca28
void sub_0029C910_0x29c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C910_0x29c910");
#endif

    switch (ctx->pc) {
        case 0x29c910u: goto label_29c910;
        case 0x29c914u: goto label_29c914;
        case 0x29c918u: goto label_29c918;
        case 0x29c91cu: goto label_29c91c;
        case 0x29c920u: goto label_29c920;
        case 0x29c924u: goto label_29c924;
        case 0x29c928u: goto label_29c928;
        case 0x29c92cu: goto label_29c92c;
        case 0x29c930u: goto label_29c930;
        case 0x29c934u: goto label_29c934;
        case 0x29c938u: goto label_29c938;
        case 0x29c93cu: goto label_29c93c;
        case 0x29c940u: goto label_29c940;
        case 0x29c944u: goto label_29c944;
        case 0x29c948u: goto label_29c948;
        case 0x29c94cu: goto label_29c94c;
        case 0x29c950u: goto label_29c950;
        case 0x29c954u: goto label_29c954;
        case 0x29c958u: goto label_29c958;
        case 0x29c95cu: goto label_29c95c;
        case 0x29c960u: goto label_29c960;
        case 0x29c964u: goto label_29c964;
        case 0x29c968u: goto label_29c968;
        case 0x29c96cu: goto label_29c96c;
        case 0x29c970u: goto label_29c970;
        case 0x29c974u: goto label_29c974;
        case 0x29c978u: goto label_29c978;
        case 0x29c97cu: goto label_29c97c;
        case 0x29c980u: goto label_29c980;
        case 0x29c984u: goto label_29c984;
        case 0x29c988u: goto label_29c988;
        case 0x29c98cu: goto label_29c98c;
        case 0x29c990u: goto label_29c990;
        case 0x29c994u: goto label_29c994;
        case 0x29c998u: goto label_29c998;
        case 0x29c99cu: goto label_29c99c;
        case 0x29c9a0u: goto label_29c9a0;
        case 0x29c9a4u: goto label_29c9a4;
        case 0x29c9a8u: goto label_29c9a8;
        case 0x29c9acu: goto label_29c9ac;
        case 0x29c9b0u: goto label_29c9b0;
        case 0x29c9b4u: goto label_29c9b4;
        case 0x29c9b8u: goto label_29c9b8;
        case 0x29c9bcu: goto label_29c9bc;
        case 0x29c9c0u: goto label_29c9c0;
        case 0x29c9c4u: goto label_29c9c4;
        case 0x29c9c8u: goto label_29c9c8;
        case 0x29c9ccu: goto label_29c9cc;
        case 0x29c9d0u: goto label_29c9d0;
        case 0x29c9d4u: goto label_29c9d4;
        case 0x29c9d8u: goto label_29c9d8;
        case 0x29c9dcu: goto label_29c9dc;
        case 0x29c9e0u: goto label_29c9e0;
        case 0x29c9e4u: goto label_29c9e4;
        case 0x29c9e8u: goto label_29c9e8;
        case 0x29c9ecu: goto label_29c9ec;
        case 0x29c9f0u: goto label_29c9f0;
        case 0x29c9f4u: goto label_29c9f4;
        case 0x29c9f8u: goto label_29c9f8;
        case 0x29c9fcu: goto label_29c9fc;
        case 0x29ca00u: goto label_29ca00;
        case 0x29ca04u: goto label_29ca04;
        case 0x29ca08u: goto label_29ca08;
        case 0x29ca0cu: goto label_29ca0c;
        case 0x29ca10u: goto label_29ca10;
        case 0x29ca14u: goto label_29ca14;
        case 0x29ca18u: goto label_29ca18;
        case 0x29ca1cu: goto label_29ca1c;
        case 0x29ca20u: goto label_29ca20;
        case 0x29ca24u: goto label_29ca24;
        default: break;
    }

    ctx->pc = 0x29c910u;

label_29c910:
    // 0x29c910: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x29c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_29c914:
    // 0x29c914: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29c914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c918:
    // 0x29c918: 0x7fb70200  sq          $s7, 0x200($sp)
    ctx->pc = 0x29c918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 23));
label_29c91c:
    // 0x29c91c: 0x7fb50220  sq          $s5, 0x220($sp)
    ctx->pc = 0x29c91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 21));
label_29c920:
    // 0x29c920: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x29c920u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29c924:
    // 0x29c924: 0x7fbe01f0  sq          $fp, 0x1F0($sp)
    ctx->pc = 0x29c924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 30));
label_29c928:
    // 0x29c928: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29c928u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29c92c:
    // 0x29c92c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x29c92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29c930:
    // 0x29c930: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x29c930u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c934:
    // 0x29c934: 0x7fb40230  sq          $s4, 0x230($sp)
    ctx->pc = 0x29c934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 20));
label_29c938:
    // 0x29c938: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29c938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29c93c:
    // 0x29c93c: 0x7fb00270  sq          $s0, 0x270($sp)
    ctx->pc = 0x29c93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 16));
label_29c940:
    // 0x29c940: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x29c940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_29c944:
    // 0x29c944: 0x7fb10260  sq          $s1, 0x260($sp)
    ctx->pc = 0x29c944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 17));
label_29c948:
    // 0x29c948: 0x7fb20250  sq          $s2, 0x250($sp)
    ctx->pc = 0x29c948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 18));
label_29c94c:
    // 0x29c94c: 0x7fb30240  sq          $s3, 0x240($sp)
    ctx->pc = 0x29c94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 19));
label_29c950:
    // 0x29c950: 0x7fb60210  sq          $s6, 0x210($sp)
    ctx->pc = 0x29c950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 22));
label_29c954:
    // 0x29c954: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x29c954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
label_29c958:
    // 0x29c958: 0xc089d2a  jal         func_2274A8
label_29c95c:
    if (ctx->pc == 0x29C95Cu) {
        ctx->pc = 0x29C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C958u;
        // 0x29c95c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C960u;
        goto label_29c960;
    }
    ctx->pc = 0x29C958u;
    SET_GPR_U32(ctx, 31, 0x29C960u);
    ctx->pc = 0x29C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C958u;
    // 0x29c95c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x29C958u, 0x29C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C960u;
label_29c960:
    // 0x29c960: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29c960u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c964:
    // 0x29c964: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x29c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29c968:
    // 0x29c968: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x29c968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_29c96c:
    // 0x29c96c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29c970:
    if (ctx->pc == 0x29C970u) {
        ctx->pc = 0x29C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C96Cu;
        // 0x29c970: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C974u;
        goto label_29c974;
    }
    ctx->pc = 0x29C96Cu;
    {
        const bool branch_taken_0x29c96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C96Cu;
        // 0x29c970: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c96c) {
            ctx->pc = 0x29C980u;
            goto label_29c980;
        }
    }
    ctx->pc = 0x29C974u;
label_29c974:
    // 0x29c974: 0xc0e1a34  jal         func_3868D0
label_29c978:
    if (ctx->pc == 0x29C978u) {
        ctx->pc = 0x29C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C974u;
        // 0x29c978: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C97Cu;
        goto label_29c97c;
    }
    ctx->pc = 0x29C974u;
    SET_GPR_U32(ctx, 31, 0x29C97Cu);
    ctx->pc = 0x29C978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C974u;
    // 0x29c978: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x29C974u, 0x29C97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C97Cu;
label_29c97c:
    // 0x29c97c: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x29c97cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29c980:
    // 0x29c980: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x29c980u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c984:
    // 0x29c984: 0x1280001c  beqz        $s4, . + 4 + (0x1C << 2)
label_29c988:
    if (ctx->pc == 0x29C988u) {
        ctx->pc = 0x29C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C984u;
        // 0x29c988: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C98Cu;
        goto label_29c98c;
    }
    ctx->pc = 0x29C984u;
    {
        const bool branch_taken_0x29c984 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C984u;
        // 0x29c988: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c984) {
            ctx->pc = 0x29C9F8u;
            goto label_29c9f8;
        }
    }
    ctx->pc = 0x29C98Cu;
label_29c98c:
    // 0x29c98c: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x29c98cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29c990:
    // 0x29c990: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x29c990u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29c994:
    // 0x29c994: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29c994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29c998:
    // 0x29c998: 0x2e0f809  jalr        $s7
label_29c99c:
    if (ctx->pc == 0x29C99Cu) {
        ctx->pc = 0x29C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C998u;
        // 0x29c99c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C9A0u;
        goto label_29c9a0;
    }
    ctx->pc = 0x29C998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x29C9A0u);
        ctx->pc = 0x29C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C998u;
        // 0x29c99c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C998u, 0x29C9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C9A0u;
label_29c9a0:
    // 0x29c9a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_29c9a4:
    if (ctx->pc == 0x29C9A4u) {
        ctx->pc = 0x29C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9A0u;
        // 0x29c9a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C9A8u;
        goto label_29c9a8;
    }
    ctx->pc = 0x29C9A0u;
    {
        const bool branch_taken_0x29c9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9A0u;
        // 0x29c9a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9a0) {
            ctx->pc = 0x29C9E8u;
            goto label_29c9e8;
        }
    }
    ctx->pc = 0x29C9A8u;
label_29c9a8:
    // 0x29c9a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29c9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29c9ac:
    // 0x29c9ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29c9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c9b0:
    // 0x29c9b0: 0xc0888a2  jal         func_222288
label_29c9b4:
    if (ctx->pc == 0x29C9B4u) {
        ctx->pc = 0x29C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9B0u;
        // 0x29c9b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C9B8u;
        goto label_29c9b8;
    }
    ctx->pc = 0x29C9B0u;
    SET_GPR_U32(ctx, 31, 0x29C9B8u);
    ctx->pc = 0x29C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C9B0u;
    // 0x29c9b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x29C9B0u, 0x29C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9B8u;
label_29c9b8:
    // 0x29c9b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_29c9bc:
    if (ctx->pc == 0x29C9BCu) {
        ctx->pc = 0x29C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9B8u;
        // 0x29c9bc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C9C0u;
        goto label_29c9c0;
    }
    ctx->pc = 0x29C9B8u;
    {
        const bool branch_taken_0x29c9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9B8u;
        // 0x29c9bc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9b8) {
            ctx->pc = 0x29C9E8u;
            goto label_29c9e8;
        }
    }
    ctx->pc = 0x29C9C0u;
label_29c9c0:
    // 0x29c9c0: 0xc137826  jal         func_4DE098
label_29c9c4:
    if (ctx->pc == 0x29C9C4u) {
        ctx->pc = 0x29C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9C0u;
        // 0x29c9c4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C9C8u;
        goto label_29c9c8;
    }
    ctx->pc = 0x29C9C0u;
    SET_GPR_U32(ctx, 31, 0x29C9C8u);
    ctx->pc = 0x29C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C9C0u;
    // 0x29c9c4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x29C9C0u, 0x29C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9C8u;
label_29c9c8:
    // 0x29c9c8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x29c9c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_29c9cc:
    // 0x29c9cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29c9d0:
    // 0x29c9d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c9d4:
    // 0x29c9d4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29c9d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29c9d8:
    // 0x29c9d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29c9dc:
    // 0x29c9dc: 0x40f809  jalr        $v0
label_29c9e0:
    if (ctx->pc == 0x29C9E0u) {
        ctx->pc = 0x29C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9DCu;
        // 0x29c9e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C9E4u;
        goto label_29c9e4;
    }
    ctx->pc = 0x29C9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C9E4u);
        ctx->pc = 0x29C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9DCu;
        // 0x29c9e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C9DCu, 0x29C9E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C9E4u;
label_29c9e4:
    // 0x29c9e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29c9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29c9e8:
    // 0x29c9e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29c9e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_29c9ec:
    // 0x29c9ec: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x29c9ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_29c9f0:
    // 0x29c9f0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_29c9f4:
    if (ctx->pc == 0x29C9F4u) {
        ctx->pc = 0x29C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9F0u;
        // 0x29c9f4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C9F8u;
        goto label_29c9f8;
    }
    ctx->pc = 0x29C9F0u;
    {
        const bool branch_taken_0x29c9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9F0u;
        // 0x29c9f4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9f0) {
            ctx->pc = 0x29C990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c990;
        }
    }
    ctx->pc = 0x29C9F8u;
label_29c9f8:
    // 0x29c9f8: 0x7bb00270  lq          $s0, 0x270($sp)
    ctx->pc = 0x29c9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_29c9fc:
    // 0x29c9fc: 0x7bb10260  lq          $s1, 0x260($sp)
    ctx->pc = 0x29c9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_29ca00:
    // 0x29ca00: 0x7bb20250  lq          $s2, 0x250($sp)
    ctx->pc = 0x29ca00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_29ca04:
    // 0x29ca04: 0x7bb30240  lq          $s3, 0x240($sp)
    ctx->pc = 0x29ca04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_29ca08:
    // 0x29ca08: 0x7bb40230  lq          $s4, 0x230($sp)
    ctx->pc = 0x29ca08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_29ca0c:
    // 0x29ca0c: 0x7bb50220  lq          $s5, 0x220($sp)
    ctx->pc = 0x29ca0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_29ca10:
    // 0x29ca10: 0x7bb60210  lq          $s6, 0x210($sp)
    ctx->pc = 0x29ca10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_29ca14:
    // 0x29ca14: 0x7bb70200  lq          $s7, 0x200($sp)
    ctx->pc = 0x29ca14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_29ca18:
    // 0x29ca18: 0x7bbe01f0  lq          $fp, 0x1F0($sp)
    ctx->pc = 0x29ca18u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_29ca1c:
    // 0x29ca1c: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x29ca1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
label_29ca20:
    // 0x29ca20: 0x3e00008  jr          $ra
label_29ca24:
    if (ctx->pc == 0x29CA24u) {
        ctx->pc = 0x29CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA20u;
        // 0x29ca24: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA28u;
        goto label_fallthrough_0x29ca20;
    }
    ctx->pc = 0x29CA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA20u;
        // 0x29ca24: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29ca20:
    ctx->pc = 0x29CA28u;
}
