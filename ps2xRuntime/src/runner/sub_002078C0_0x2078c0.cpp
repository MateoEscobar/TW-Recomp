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

// Function: sub_002078C0
// Address: 0x2078c0 - 0x2079a0
void sub_002078C0_0x2078c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002078C0_0x2078c0");
#endif

    switch (ctx->pc) {
        case 0x2078c0u: goto label_2078c0;
        case 0x2078c4u: goto label_2078c4;
        case 0x2078c8u: goto label_2078c8;
        case 0x2078ccu: goto label_2078cc;
        case 0x2078d0u: goto label_2078d0;
        case 0x2078d4u: goto label_2078d4;
        case 0x2078d8u: goto label_2078d8;
        case 0x2078dcu: goto label_2078dc;
        case 0x2078e0u: goto label_2078e0;
        case 0x2078e4u: goto label_2078e4;
        case 0x2078e8u: goto label_2078e8;
        case 0x2078ecu: goto label_2078ec;
        case 0x2078f0u: goto label_2078f0;
        case 0x2078f4u: goto label_2078f4;
        case 0x2078f8u: goto label_2078f8;
        case 0x2078fcu: goto label_2078fc;
        case 0x207900u: goto label_207900;
        case 0x207904u: goto label_207904;
        case 0x207908u: goto label_207908;
        case 0x20790cu: goto label_20790c;
        case 0x207910u: goto label_207910;
        case 0x207914u: goto label_207914;
        case 0x207918u: goto label_207918;
        case 0x20791cu: goto label_20791c;
        case 0x207920u: goto label_207920;
        case 0x207924u: goto label_207924;
        case 0x207928u: goto label_207928;
        case 0x20792cu: goto label_20792c;
        case 0x207930u: goto label_207930;
        case 0x207934u: goto label_207934;
        case 0x207938u: goto label_207938;
        case 0x20793cu: goto label_20793c;
        case 0x207940u: goto label_207940;
        case 0x207944u: goto label_207944;
        case 0x207948u: goto label_207948;
        case 0x20794cu: goto label_20794c;
        case 0x207950u: goto label_207950;
        case 0x207954u: goto label_207954;
        case 0x207958u: goto label_207958;
        case 0x20795cu: goto label_20795c;
        case 0x207960u: goto label_207960;
        case 0x207964u: goto label_207964;
        case 0x207968u: goto label_207968;
        case 0x20796cu: goto label_20796c;
        case 0x207970u: goto label_207970;
        case 0x207974u: goto label_207974;
        case 0x207978u: goto label_207978;
        case 0x20797cu: goto label_20797c;
        case 0x207980u: goto label_207980;
        case 0x207984u: goto label_207984;
        case 0x207988u: goto label_207988;
        case 0x20798cu: goto label_20798c;
        case 0x207990u: goto label_207990;
        case 0x207994u: goto label_207994;
        case 0x207998u: goto label_207998;
        case 0x20799cu: goto label_20799c;
        default: break;
    }

    ctx->pc = 0x2078c0u;

label_2078c0:
    // 0x2078c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2078c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2078c4:
    // 0x2078c4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2078c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2078c8:
    // 0x2078c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2078c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2078cc:
    // 0x2078cc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2078ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2078d0:
    // 0x2078d0: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x2078d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_2078d4:
    // 0x2078d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2078d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2078d8:
    // 0x2078d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2078d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2078dc:
    // 0x2078dc: 0x2442e028  addiu       $v0, $v0, -0x1FD8
    ctx->pc = 0x2078dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959144));
label_2078e0:
    // 0x2078e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2078e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2078e4:
    // 0x2078e4: 0x2463e050  addiu       $v1, $v1, -0x1FB0
    ctx->pc = 0x2078e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959184));
label_2078e8:
    // 0x2078e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2078e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2078ec:
    // 0x2078ec: 0x24c6e080  addiu       $a2, $a2, -0x1F80
    ctx->pc = 0x2078ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959232));
label_2078f0:
    // 0x2078f0: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x2078f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_2078f4:
    // 0x2078f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2078f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2078f8:
    // 0x2078f8: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x2078f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_2078fc:
    // 0x2078fc: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x2078fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_207900:
    // 0x207900: 0xc081f2e  jal         func_207CB8
label_207904:
    if (ctx->pc == 0x207904u) {
        ctx->pc = 0x207904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207900u;
        // 0x207904: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207908u;
        goto label_207908;
    }
    ctx->pc = 0x207900u;
    SET_GPR_U32(ctx, 31, 0x207908u);
    ctx->pc = 0x207904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207900u;
    // 0x207904: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207CB8u, 0x207900u, 0x207908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207908u;
label_207908:
    // 0x207908: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x207908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20790c:
    // 0x20790c: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x20790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_207910:
    // 0x207910: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x207910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_207914:
    // 0x207914: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x207914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_207918:
    // 0x207918: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20791c:
    if (ctx->pc == 0x20791Cu) {
        ctx->pc = 0x20791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207918u;
        // 0x20791c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207920u;
        goto label_207920;
    }
    ctx->pc = 0x207918u;
    {
        const bool branch_taken_0x207918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207918u;
        // 0x20791c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207918) {
            ctx->pc = 0x207948u;
            goto label_207948;
        }
    }
    ctx->pc = 0x207920u;
label_207920:
    // 0x207920: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x207920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_207924:
    // 0x207924: 0xc1376d6  jal         func_4DDB58
label_207928:
    if (ctx->pc == 0x207928u) {
        ctx->pc = 0x207928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207924u;
        // 0x207928: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20792Cu;
        goto label_20792c;
    }
    ctx->pc = 0x207924u;
    SET_GPR_U32(ctx, 31, 0x20792Cu);
    ctx->pc = 0x207928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207924u;
    // 0x207928: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x207924u, 0x20792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20792Cu;
label_20792c:
    // 0x20792c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_207930:
    // 0x207930: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x207930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_207934:
    // 0x207934: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x207934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_207938:
    // 0x207938: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x207938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20793c:
    // 0x20793c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_207940:
    // 0x207940: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x207940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_207944:
    // 0x207944: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x207944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_207948:
    // 0x207948: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x207948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20794c:
    // 0x20794c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_207950:
    if (ctx->pc == 0x207950u) {
        ctx->pc = 0x207950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20794Cu;
        // 0x207950: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207954u;
        goto label_207954;
    }
    ctx->pc = 0x20794Cu;
    {
        const bool branch_taken_0x20794c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x207950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20794Cu;
        // 0x207950: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20794c) {
            ctx->pc = 0x207978u;
            goto label_207978;
        }
    }
    ctx->pc = 0x207954u;
label_207954:
    // 0x207954: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x207954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_207958:
    // 0x207958: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x207958u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_20795c:
    // 0x20795c: 0x24c68b28  addiu       $a2, $a2, -0x74D8
    ctx->pc = 0x20795cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937384));
label_207960:
    // 0x207960: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x207960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_207964:
    // 0x207964: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x207964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_207968:
    // 0x207968: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x207968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_20796c:
    // 0x20796c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x20796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_207970:
    // 0x207970: 0x60f809  jalr        $v1
label_207974:
    if (ctx->pc == 0x207974u) {
        ctx->pc = 0x207974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207970u;
        // 0x207974: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207978u;
        goto label_207978;
    }
    ctx->pc = 0x207970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207978u);
        ctx->pc = 0x207974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207970u;
        // 0x207974: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207970u, 0x207978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207978u;
label_207978:
    // 0x207978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20797c:
    // 0x20797c: 0xc06a39e  jal         func_1A8E78
label_207980:
    if (ctx->pc == 0x207980u) {
        ctx->pc = 0x207980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20797Cu;
        // 0x207980: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207984u;
        goto label_207984;
    }
    ctx->pc = 0x20797Cu;
    SET_GPR_U32(ctx, 31, 0x207984u);
    ctx->pc = 0x207980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20797Cu;
    // 0x207980: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x20797Cu, 0x207984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207984u;
label_207984:
    // 0x207984: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x207984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_207988:
    // 0x207988: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x207988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20798c:
    // 0x20798c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20798cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207990:
    // 0x207990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207994:
    // 0x207994: 0x3e00008  jr          $ra
label_207998:
    if (ctx->pc == 0x207998u) {
        ctx->pc = 0x207998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207994u;
        // 0x207998: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20799Cu;
        goto label_20799c;
    }
    ctx->pc = 0x207994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207994u;
        // 0x207998: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20799Cu;
label_20799c:
    // 0x20799c: 0x0  nop
    ctx->pc = 0x20799cu;
    // NOP
    ctx->pc = 0x2079a0u;
}
