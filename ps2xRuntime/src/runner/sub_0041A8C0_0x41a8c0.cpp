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

// Function: sub_0041A8C0
// Address: 0x41a8c0 - 0x41a9c0
void sub_0041A8C0_0x41a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A8C0_0x41a8c0");
#endif

    switch (ctx->pc) {
        case 0x41a8c0u: goto label_41a8c0;
        case 0x41a8c4u: goto label_41a8c4;
        case 0x41a8c8u: goto label_41a8c8;
        case 0x41a8ccu: goto label_41a8cc;
        case 0x41a8d0u: goto label_41a8d0;
        case 0x41a8d4u: goto label_41a8d4;
        case 0x41a8d8u: goto label_41a8d8;
        case 0x41a8dcu: goto label_41a8dc;
        case 0x41a8e0u: goto label_41a8e0;
        case 0x41a8e4u: goto label_41a8e4;
        case 0x41a8e8u: goto label_41a8e8;
        case 0x41a8ecu: goto label_41a8ec;
        case 0x41a8f0u: goto label_41a8f0;
        case 0x41a8f4u: goto label_41a8f4;
        case 0x41a8f8u: goto label_41a8f8;
        case 0x41a8fcu: goto label_41a8fc;
        case 0x41a900u: goto label_41a900;
        case 0x41a904u: goto label_41a904;
        case 0x41a908u: goto label_41a908;
        case 0x41a90cu: goto label_41a90c;
        case 0x41a910u: goto label_41a910;
        case 0x41a914u: goto label_41a914;
        case 0x41a918u: goto label_41a918;
        case 0x41a91cu: goto label_41a91c;
        case 0x41a920u: goto label_41a920;
        case 0x41a924u: goto label_41a924;
        case 0x41a928u: goto label_41a928;
        case 0x41a92cu: goto label_41a92c;
        case 0x41a930u: goto label_41a930;
        case 0x41a934u: goto label_41a934;
        case 0x41a938u: goto label_41a938;
        case 0x41a93cu: goto label_41a93c;
        case 0x41a940u: goto label_41a940;
        case 0x41a944u: goto label_41a944;
        case 0x41a948u: goto label_41a948;
        case 0x41a94cu: goto label_41a94c;
        case 0x41a950u: goto label_41a950;
        case 0x41a954u: goto label_41a954;
        case 0x41a958u: goto label_41a958;
        case 0x41a95cu: goto label_41a95c;
        case 0x41a960u: goto label_41a960;
        case 0x41a964u: goto label_41a964;
        case 0x41a968u: goto label_41a968;
        case 0x41a96cu: goto label_41a96c;
        case 0x41a970u: goto label_41a970;
        case 0x41a974u: goto label_41a974;
        case 0x41a978u: goto label_41a978;
        case 0x41a97cu: goto label_41a97c;
        case 0x41a980u: goto label_41a980;
        case 0x41a984u: goto label_41a984;
        case 0x41a988u: goto label_41a988;
        case 0x41a98cu: goto label_41a98c;
        case 0x41a990u: goto label_41a990;
        case 0x41a994u: goto label_41a994;
        case 0x41a998u: goto label_41a998;
        case 0x41a99cu: goto label_41a99c;
        case 0x41a9a0u: goto label_41a9a0;
        case 0x41a9a4u: goto label_41a9a4;
        case 0x41a9a8u: goto label_41a9a8;
        case 0x41a9acu: goto label_41a9ac;
        case 0x41a9b0u: goto label_41a9b0;
        case 0x41a9b4u: goto label_41a9b4;
        case 0x41a9b8u: goto label_41a9b8;
        case 0x41a9bcu: goto label_41a9bc;
        default: break;
    }

    ctx->pc = 0x41a8c0u;

label_41a8c0:
    // 0x41a8c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x41a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_41a8c4:
    // 0x41a8c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41a8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41a8c8:
    // 0x41a8c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41a8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41a8cc:
    // 0x41a8cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x41a8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_41a8d0:
    // 0x41a8d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x41a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_41a8d4:
    // 0x41a8d4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x41a8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_41a8d8:
    // 0x41a8d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x41a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_41a8dc:
    // 0x41a8dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41a8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41a8e0:
    // 0x41a8e0: 0xc0e409a  jal         func_390268
label_41a8e4:
    if (ctx->pc == 0x41A8E4u) {
        ctx->pc = 0x41A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8E0u;
        // 0x41a8e4: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A8E8u;
        goto label_41a8e8;
    }
    ctx->pc = 0x41A8E0u;
    SET_GPR_U32(ctx, 31, 0x41A8E8u);
    ctx->pc = 0x41A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A8E0u;
    // 0x41a8e4: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41A8E0u, 0x41A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A8E8u;
label_41a8e8:
    // 0x41a8e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x41a8e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a8ec:
    // 0x41a8ec: 0x1260002b  beqz        $s3, . + 4 + (0x2B << 2)
label_41a8f0:
    if (ctx->pc == 0x41A8F0u) {
        ctx->pc = 0x41A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8ECu;
        // 0x41a8f0: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A8F4u;
        goto label_41a8f4;
    }
    ctx->pc = 0x41A8ECu;
    {
        const bool branch_taken_0x41a8ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8ECu;
        // 0x41a8f0: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a8ec) {
            ctx->pc = 0x41A99Cu;
            goto label_41a99c;
        }
    }
    ctx->pc = 0x41A8F4u;
label_41a8f4:
    // 0x41a8f4: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x41a8f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_41a8f8:
    // 0x41a8f8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x41a8f8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_41a8fc:
    // 0x41a8fc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_41a900:
    if (ctx->pc == 0x41A900u) {
        ctx->pc = 0x41A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8FCu;
        // 0x41a900: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A904u;
        goto label_41a904;
    }
    ctx->pc = 0x41A8FCu;
    {
        const bool branch_taken_0x41a8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8FCu;
        // 0x41a900: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a8fc) {
            ctx->pc = 0x41A9A0u;
            goto label_41a9a0;
        }
    }
    ctx->pc = 0x41A904u;
label_41a904:
    // 0x41a904: 0xc087502  jal         func_21D408
label_41a908:
    if (ctx->pc == 0x41A908u) {
        ctx->pc = 0x41A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A904u;
        // 0x41a908: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A90Cu;
        goto label_41a90c;
    }
    ctx->pc = 0x41A904u;
    SET_GPR_U32(ctx, 31, 0x41A90Cu);
    ctx->pc = 0x41A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A904u;
    // 0x41a908: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41A904u, 0x41A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A90Cu;
label_41a90c:
    // 0x41a90c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x41a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_41a910:
    // 0x41a910: 0xc08a9dc  jal         func_22A770
label_41a914:
    if (ctx->pc == 0x41A914u) {
        ctx->pc = 0x41A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A910u;
        // 0x41a914: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A918u;
        goto label_41a918;
    }
    ctx->pc = 0x41A910u;
    SET_GPR_U32(ctx, 31, 0x41A918u);
    ctx->pc = 0x41A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A910u;
    // 0x41a914: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A770u, 0x41A910u, 0x41A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A918u;
label_41a918:
    // 0x41a918: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x41a918u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a91c:
    // 0x41a91c: 0x1280001f  beqz        $s4, . + 4 + (0x1F << 2)
label_41a920:
    if (ctx->pc == 0x41A920u) {
        ctx->pc = 0x41A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A91Cu;
        // 0x41a920: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A924u;
        goto label_41a924;
    }
    ctx->pc = 0x41A91Cu;
    {
        const bool branch_taken_0x41a91c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A91Cu;
        // 0x41a920: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a91c) {
            ctx->pc = 0x41A99Cu;
            goto label_41a99c;
        }
    }
    ctx->pc = 0x41A924u;
label_41a924:
    // 0x41a924: 0x827201b0  lb          $s2, 0x1B0($s3)
    ctx->pc = 0x41a924u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_41a928:
    // 0x41a928: 0xc0874fa  jal         func_21D3E8
label_41a92c:
    if (ctx->pc == 0x41A92Cu) {
        ctx->pc = 0x41A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A928u;
        // 0x41a92c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A930u;
        goto label_41a930;
    }
    ctx->pc = 0x41A928u;
    SET_GPR_U32(ctx, 31, 0x41A930u);
    ctx->pc = 0x41A92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A928u;
    // 0x41a92c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x41A928u, 0x41A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A930u;
label_41a930:
    // 0x41a930: 0x80510019  lb          $s1, 0x19($v0)
    ctx->pc = 0x41a930u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_41a934:
    // 0x41a934: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41a934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41a938:
    // 0x41a938: 0x8e700380  lw          $s0, 0x380($s3)
    ctx->pc = 0x41a938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
label_41a93c:
    // 0x41a93c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41a93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41a940:
    // 0x41a940: 0xc08a8aa  jal         func_22A2A8
label_41a944:
    if (ctx->pc == 0x41A944u) {
        ctx->pc = 0x41A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A940u;
        // 0x41a944: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A948u;
        goto label_41a948;
    }
    ctx->pc = 0x41A940u;
    SET_GPR_U32(ctx, 31, 0x41A948u);
    ctx->pc = 0x41A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A940u;
    // 0x41a944: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2A8u, 0x41A940u, 0x41A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A948u;
label_41a948:
    // 0x41a948: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x41a948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41a94c:
    // 0x41a94c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x41a94cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41a950:
    // 0x41a950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41a950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a954:
    // 0x41a954: 0xc08a710  jal         func_229C40
label_41a958:
    if (ctx->pc == 0x41A958u) {
        ctx->pc = 0x41A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A954u;
        // 0x41a958: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A95Cu;
        goto label_41a95c;
    }
    ctx->pc = 0x41A954u;
    SET_GPR_U32(ctx, 31, 0x41A95Cu);
    ctx->pc = 0x41A958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A954u;
    // 0x41a958: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229C40u, 0x41A954u, 0x41A95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A95Cu;
label_41a95c:
    // 0x41a95c: 0xc048892  jal         func_122248
label_41a960:
    if (ctx->pc == 0x41A960u) {
        ctx->pc = 0x41A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A95Cu;
        // 0x41a960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A964u;
        goto label_41a964;
    }
    ctx->pc = 0x41A95Cu;
    SET_GPR_U32(ctx, 31, 0x41A964u);
    ctx->pc = 0x41A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A95Cu;
    // 0x41a960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x41A95Cu, 0x41A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A964u;
label_41a964:
    // 0x41a964: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41a968:
    if (ctx->pc == 0x41A968u) {
        ctx->pc = 0x41A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A964u;
        // 0x41a968: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A96Cu;
        goto label_41a96c;
    }
    ctx->pc = 0x41A964u;
    {
        const bool branch_taken_0x41a964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A964u;
        // 0x41a968: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a964) {
            ctx->pc = 0x41A980u;
            goto label_41a980;
        }
    }
    ctx->pc = 0x41A96Cu;
label_41a96c:
    // 0x41a96c: 0xc04890e  jal         func_122438
label_41a970:
    if (ctx->pc == 0x41A970u) {
        ctx->pc = 0x41A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A96Cu;
        // 0x41a970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A974u;
        goto label_41a974;
    }
    ctx->pc = 0x41A96Cu;
    SET_GPR_U32(ctx, 31, 0x41A974u);
    ctx->pc = 0x41A970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A96Cu;
    // 0x41a970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122438u, 0x41A96Cu, 0x41A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A974u;
label_41a974:
    // 0x41a974: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x41a974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41a978:
    // 0x41a978: 0xc0488ac  jal         func_1222B0
label_41a97c:
    if (ctx->pc == 0x41A97Cu) {
        ctx->pc = 0x41A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A978u;
        // 0x41a97c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A980u;
        goto label_41a980;
    }
    ctx->pc = 0x41A978u;
    SET_GPR_U32(ctx, 31, 0x41A980u);
    ctx->pc = 0x41A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A978u;
    // 0x41a97c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x41A978u, 0x41A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A980u;
label_41a980:
    // 0x41a980: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x41a980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_41a984:
    // 0x41a984: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41a984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41a988:
    // 0x41a988: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41a98c:
    // 0x41a98c: 0x40f809  jalr        $v0
label_41a990:
    if (ctx->pc == 0x41A990u) {
        ctx->pc = 0x41A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A98Cu;
        // 0x41a990: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A994u;
        goto label_41a994;
    }
    ctx->pc = 0x41A98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41A994u);
        ctx->pc = 0x41A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A98Cu;
        // 0x41a990: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A98Cu, 0x41A994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41A994u;
label_41a994:
    // 0x41a994: 0x10000003  b           . + 4 + (0x3 << 2)
label_41a998:
    if (ctx->pc == 0x41A998u) {
        ctx->pc = 0x41A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A994u;
        // 0x41a998: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A99Cu;
        goto label_41a99c;
    }
    ctx->pc = 0x41A994u;
    {
        const bool branch_taken_0x41a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A994u;
        // 0x41a998: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a994) {
            ctx->pc = 0x41A9A4u;
            goto label_41a9a4;
        }
    }
    ctx->pc = 0x41A99Cu;
label_41a99c:
    // 0x41a99c: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x41a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_41a9a0:
    // 0x41a9a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x41a9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41a9a4:
    // 0x41a9a4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x41a9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41a9a8:
    // 0x41a9a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x41a9a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41a9ac:
    // 0x41a9ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41a9acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41a9b0:
    // 0x41a9b0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x41a9b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41a9b4:
    // 0x41a9b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41a9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41a9b8:
    // 0x41a9b8: 0x3e00008  jr          $ra
label_41a9bc:
    if (ctx->pc == 0x41A9BCu) {
        ctx->pc = 0x41A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A9B8u;
        // 0x41a9bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A9C0u;
        goto label_fallthrough_0x41a9b8;
    }
    ctx->pc = 0x41A9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A9B8u;
        // 0x41a9bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41a9b8:
    ctx->pc = 0x41A9C0u;
}
