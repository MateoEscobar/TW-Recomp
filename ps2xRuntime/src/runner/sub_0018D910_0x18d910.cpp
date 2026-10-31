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

// Function: sub_0018D910
// Address: 0x18d910 - 0x18da80
void sub_0018D910_0x18d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D910_0x18d910");
#endif

    switch (ctx->pc) {
        case 0x18d910u: goto label_18d910;
        case 0x18d914u: goto label_18d914;
        case 0x18d918u: goto label_18d918;
        case 0x18d91cu: goto label_18d91c;
        case 0x18d920u: goto label_18d920;
        case 0x18d924u: goto label_18d924;
        case 0x18d928u: goto label_18d928;
        case 0x18d92cu: goto label_18d92c;
        case 0x18d930u: goto label_18d930;
        case 0x18d934u: goto label_18d934;
        case 0x18d938u: goto label_18d938;
        case 0x18d93cu: goto label_18d93c;
        case 0x18d940u: goto label_18d940;
        case 0x18d944u: goto label_18d944;
        case 0x18d948u: goto label_18d948;
        case 0x18d94cu: goto label_18d94c;
        case 0x18d950u: goto label_18d950;
        case 0x18d954u: goto label_18d954;
        case 0x18d958u: goto label_18d958;
        case 0x18d95cu: goto label_18d95c;
        case 0x18d960u: goto label_18d960;
        case 0x18d964u: goto label_18d964;
        case 0x18d968u: goto label_18d968;
        case 0x18d96cu: goto label_18d96c;
        case 0x18d970u: goto label_18d970;
        case 0x18d974u: goto label_18d974;
        case 0x18d978u: goto label_18d978;
        case 0x18d97cu: goto label_18d97c;
        case 0x18d980u: goto label_18d980;
        case 0x18d984u: goto label_18d984;
        case 0x18d988u: goto label_18d988;
        case 0x18d98cu: goto label_18d98c;
        case 0x18d990u: goto label_18d990;
        case 0x18d994u: goto label_18d994;
        case 0x18d998u: goto label_18d998;
        case 0x18d99cu: goto label_18d99c;
        case 0x18d9a0u: goto label_18d9a0;
        case 0x18d9a4u: goto label_18d9a4;
        case 0x18d9a8u: goto label_18d9a8;
        case 0x18d9acu: goto label_18d9ac;
        case 0x18d9b0u: goto label_18d9b0;
        case 0x18d9b4u: goto label_18d9b4;
        case 0x18d9b8u: goto label_18d9b8;
        case 0x18d9bcu: goto label_18d9bc;
        case 0x18d9c0u: goto label_18d9c0;
        case 0x18d9c4u: goto label_18d9c4;
        case 0x18d9c8u: goto label_18d9c8;
        case 0x18d9ccu: goto label_18d9cc;
        case 0x18d9d0u: goto label_18d9d0;
        case 0x18d9d4u: goto label_18d9d4;
        case 0x18d9d8u: goto label_18d9d8;
        case 0x18d9dcu: goto label_18d9dc;
        case 0x18d9e0u: goto label_18d9e0;
        case 0x18d9e4u: goto label_18d9e4;
        case 0x18d9e8u: goto label_18d9e8;
        case 0x18d9ecu: goto label_18d9ec;
        case 0x18d9f0u: goto label_18d9f0;
        case 0x18d9f4u: goto label_18d9f4;
        case 0x18d9f8u: goto label_18d9f8;
        case 0x18d9fcu: goto label_18d9fc;
        case 0x18da00u: goto label_18da00;
        case 0x18da04u: goto label_18da04;
        case 0x18da08u: goto label_18da08;
        case 0x18da0cu: goto label_18da0c;
        case 0x18da10u: goto label_18da10;
        case 0x18da14u: goto label_18da14;
        case 0x18da18u: goto label_18da18;
        case 0x18da1cu: goto label_18da1c;
        case 0x18da20u: goto label_18da20;
        case 0x18da24u: goto label_18da24;
        case 0x18da28u: goto label_18da28;
        case 0x18da2cu: goto label_18da2c;
        case 0x18da30u: goto label_18da30;
        case 0x18da34u: goto label_18da34;
        case 0x18da38u: goto label_18da38;
        case 0x18da3cu: goto label_18da3c;
        case 0x18da40u: goto label_18da40;
        case 0x18da44u: goto label_18da44;
        case 0x18da48u: goto label_18da48;
        case 0x18da4cu: goto label_18da4c;
        case 0x18da50u: goto label_18da50;
        case 0x18da54u: goto label_18da54;
        case 0x18da58u: goto label_18da58;
        case 0x18da5cu: goto label_18da5c;
        case 0x18da60u: goto label_18da60;
        case 0x18da64u: goto label_18da64;
        case 0x18da68u: goto label_18da68;
        case 0x18da6cu: goto label_18da6c;
        case 0x18da70u: goto label_18da70;
        case 0x18da74u: goto label_18da74;
        case 0x18da78u: goto label_18da78;
        case 0x18da7cu: goto label_18da7c;
        default: break;
    }

    ctx->pc = 0x18d910u;

label_18d910:
    // 0x18d910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18d914:
    // 0x18d914: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18d918:
    // 0x18d918: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_18d91c:
    // 0x18d91c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d920:
    // 0x18d920: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18d920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_18d924:
    // 0x18d924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18d924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18d928:
    // 0x18d928: 0x8e2201e8  lw          $v0, 0x1E8($s1)
    ctx->pc = 0x18d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
label_18d92c:
    // 0x18d92c: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_18d930:
    if (ctx->pc == 0x18D930u) {
        ctx->pc = 0x18D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D92Cu;
        // 0x18d930: 0x8e2301e8  lw          $v1, 0x1E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D934u;
        goto label_18d934;
    }
    ctx->pc = 0x18D92Cu;
    {
        const bool branch_taken_0x18d92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d92c) {
            ctx->pc = 0x18D930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D92Cu;
            // 0x18d930: 0x8e2301e8  lw          $v1, 0x1E8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D99Cu;
            goto label_18d99c;
        }
    }
    ctx->pc = 0x18D934u;
label_18d934:
    // 0x18d934: 0xc62101ec  lwc1        $f1, 0x1EC($s1)
    ctx->pc = 0x18d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d938:
    // 0x18d938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d93c:
    // 0x18d93c: 0x0  nop
    ctx->pc = 0x18d93cu;
    // NOP
label_18d940:
    // 0x18d940: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18d940u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d944:
    // 0x18d944: 0x0  nop
    ctx->pc = 0x18d944u;
    // NOP
label_18d948:
    // 0x18d948: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_18d94c:
    if (ctx->pc == 0x18D94Cu) {
        ctx->pc = 0x18D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D948u;
        // 0x18d94c: 0x8e2301e8  lw          $v1, 0x1E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D950u;
        goto label_18d950;
    }
    ctx->pc = 0x18D948u;
    {
        const bool branch_taken_0x18d948 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d948) {
            ctx->pc = 0x18D94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D948u;
            // 0x18d94c: 0x8e2301e8  lw          $v1, 0x1E8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D99Cu;
            goto label_18d99c;
        }
    }
    ctx->pc = 0x18D950u;
label_18d950:
    // 0x18d950: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x18d950u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_18d954:
    // 0x18d954: 0x8e2201f4  lw          $v0, 0x1F4($s1)
    ctx->pc = 0x18d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
label_18d958:
    // 0x18d958: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x18d958u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_18d95c:
    // 0x18d95c: 0x10520041  beq         $v0, $s2, . + 4 + (0x41 << 2)
label_18d960:
    if (ctx->pc == 0x18D960u) {
        ctx->pc = 0x18D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D95Cu;
        // 0x18d960: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D964u;
        goto label_18d964;
    }
    ctx->pc = 0x18D95Cu;
    {
        const bool branch_taken_0x18d95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x18D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D95Cu;
        // 0x18d960: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d95c) {
            ctx->pc = 0x18DA64u;
            goto label_18da64;
        }
    }
    ctx->pc = 0x18D964u;
label_18d964:
    // 0x18d964: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x18d964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_18d968:
    // 0x18d968: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18d968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18d96c:
    // 0x18d96c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18d96cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18d970:
    // 0x18d970: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18d970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18d974:
    // 0x18d974: 0x40f809  jalr        $v0
label_18d978:
    if (ctx->pc == 0x18D978u) {
        ctx->pc = 0x18D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D974u;
        // 0x18d978: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D97Cu;
        goto label_18d97c;
    }
    ctx->pc = 0x18D974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D97Cu);
        ctx->pc = 0x18D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D974u;
        // 0x18d978: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D974u, 0x18D97Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D97Cu;
label_18d97c:
    // 0x18d97c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x18d97cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_18d980:
    // 0x18d980: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x18d980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_18d984:
    // 0x18d984: 0xc06c8cc  jal         func_1B2330
label_18d988:
    if (ctx->pc == 0x18D988u) {
        ctx->pc = 0x18D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D984u;
        // 0x18d988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D98Cu;
        goto label_18d98c;
    }
    ctx->pc = 0x18D984u;
    SET_GPR_U32(ctx, 31, 0x18D98Cu);
    ctx->pc = 0x18D988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D984u;
    // 0x18d988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2330u, 0x18D984u, 0x18D98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D98Cu;
label_18d98c:
    // 0x18d98c: 0xc06c83e  jal         func_1B20F8
label_18d990:
    if (ctx->pc == 0x18D990u) {
        ctx->pc = 0x18D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D98Cu;
        // 0x18d990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D994u;
        goto label_18d994;
    }
    ctx->pc = 0x18D98Cu;
    SET_GPR_U32(ctx, 31, 0x18D994u);
    ctx->pc = 0x18D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D98Cu;
    // 0x18d990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B20F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B20F8u, 0x18D98Cu, 0x18D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D994u;
label_18d994:
    // 0x18d994: 0x10000033  b           . + 4 + (0x33 << 2)
label_18d998:
    if (ctx->pc == 0x18D998u) {
        ctx->pc = 0x18D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D994u;
        // 0x18d998: 0xae3201f4  sw          $s2, 0x1F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D99Cu;
        goto label_18d99c;
    }
    ctx->pc = 0x18D994u;
    {
        const bool branch_taken_0x18d994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D994u;
        // 0x18d998: 0xae3201f4  sw          $s2, 0x1F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d994) {
            ctx->pc = 0x18DA64u;
            goto label_18da64;
        }
    }
    ctx->pc = 0x18D99Cu;
label_18d99c:
    // 0x18d99c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d9a0:
    // 0x18d9a0: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_18d9a4:
    if (ctx->pc == 0x18D9A4u) {
        ctx->pc = 0x18D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9A0u;
        // 0x18d9a4: 0xc62001f0  lwc1        $f0, 0x1F0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9A8u;
        goto label_18d9a8;
    }
    ctx->pc = 0x18D9A0u;
    {
        const bool branch_taken_0x18d9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d9a0) {
            ctx->pc = 0x18D9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D9A0u;
            // 0x18d9a4: 0xc62001f0  lwc1        $f0, 0x1F0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D9DCu;
            goto label_18d9dc;
        }
    }
    ctx->pc = 0x18D9A8u;
label_18d9a8:
    // 0x18d9a8: 0xc62001ec  lwc1        $f0, 0x1EC($s1)
    ctx->pc = 0x18d9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d9ac:
    // 0x18d9ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18d9b0:
    // 0x18d9b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18d9b4:
    // 0x18d9b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18d9b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d9b8:
    // 0x18d9b8: 0xae2201e8  sw          $v0, 0x1E8($s1)
    ctx->pc = 0x18d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 2));
label_18d9bc:
    // 0x18d9bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x18d9bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d9c0:
    // 0x18d9c0: 0x0  nop
    ctx->pc = 0x18d9c0u;
    // NOP
label_18d9c4:
    // 0x18d9c4: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_18d9c8:
    if (ctx->pc == 0x18D9C8u) {
        ctx->pc = 0x18D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9C4u;
        // 0x18d9c8: 0xae2001f4  sw          $zero, 0x1F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9CCu;
        goto label_18d9cc;
    }
    ctx->pc = 0x18D9C4u;
    {
        const bool branch_taken_0x18d9c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9C4u;
        // 0x18d9c8: 0xae2001f4  sw          $zero, 0x1F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9c4) {
            ctx->pc = 0x18DA64u;
            goto label_18da64;
        }
    }
    ctx->pc = 0x18D9CCu;
label_18d9cc:
    // 0x18d9cc: 0xc06357e  jal         func_18D5F8
label_18d9d0:
    if (ctx->pc == 0x18D9D0u) {
        ctx->pc = 0x18D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9CCu;
        // 0x18d9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9D4u;
        goto label_18d9d4;
    }
    ctx->pc = 0x18D9CCu;
    SET_GPR_U32(ctx, 31, 0x18D9D4u);
    ctx->pc = 0x18D9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D9CCu;
    // 0x18d9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D5F8u, 0x18D9CCu, 0x18D9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D9D4u;
label_18d9d4:
    // 0x18d9d4: 0x10000024  b           . + 4 + (0x24 << 2)
label_18d9d8:
    if (ctx->pc == 0x18D9D8u) {
        ctx->pc = 0x18D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9D4u;
        // 0x18d9d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9DCu;
        goto label_18d9dc;
    }
    ctx->pc = 0x18D9D4u;
    {
        const bool branch_taken_0x18d9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9D4u;
        // 0x18d9d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9d4) {
            ctx->pc = 0x18DA68u;
            goto label_18da68;
        }
    }
    ctx->pc = 0x18D9DCu;
label_18d9dc:
    // 0x18d9dc: 0xc62101ec  lwc1        $f1, 0x1EC($s1)
    ctx->pc = 0x18d9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d9e0:
    // 0x18d9e0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x18d9e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_18d9e4:
    // 0x18d9e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18d9e8:
    // 0x18d9e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18d9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_18d9ec:
    // 0x18d9ec: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x18d9ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_18d9f0:
    // 0x18d9f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18d9f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18d9f4:
    // 0x18d9f4: 0x460408a8  max.s       $f2, $f1, $f4
    ctx->pc = 0x18d9f4u;
    ctx->f[2] = std::max(ctx->f[1], ctx->f[4]);
label_18d9f8:
    // 0x18d9f8: 0x46031029  min.s       $f0, $f2, $f3
    ctx->pc = 0x18d9f8u;
    ctx->f[0] = std::min(ctx->f[2], ctx->f[3]);
label_18d9fc:
    // 0x18d9fc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x18d9fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18da00:
    // 0x18da00: 0x0  nop
    ctx->pc = 0x18da00u;
    // NOP
label_18da04:
    // 0x18da04: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_18da08:
    if (ctx->pc == 0x18DA08u) {
        ctx->pc = 0x18DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA04u;
        // 0x18da08: 0xe62001ec  swc1        $f0, 0x1EC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 492), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA0Cu;
        goto label_18da0c;
    }
    ctx->pc = 0x18DA04u;
    {
        const bool branch_taken_0x18da04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA04u;
        // 0x18da08: 0xe62001ec  swc1        $f0, 0x1EC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 492), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da04) {
            ctx->pc = 0x18DA14u;
            goto label_18da14;
        }
    }
    ctx->pc = 0x18DA0Cu;
label_18da0c:
    // 0x18da0c: 0xe62301ec  swc1        $f3, 0x1EC($s1)
    ctx->pc = 0x18da0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 492), bits); }
label_18da10:
    // 0x18da10: 0xae2001e8  sw          $zero, 0x1E8($s1)
    ctx->pc = 0x18da10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
label_18da14:
    // 0x18da14: 0xc62001ec  lwc1        $f0, 0x1EC($s1)
    ctx->pc = 0x18da14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18da18:
    // 0x18da18: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x18da18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18da1c:
    // 0x18da1c: 0x0  nop
    ctx->pc = 0x18da1cu;
    // NOP
label_18da20:
    // 0x18da20: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_18da24:
    if (ctx->pc == 0x18DA24u) {
        ctx->pc = 0x18DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA20u;
        // 0x18da24: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA28u;
        goto label_18da28;
    }
    ctx->pc = 0x18DA20u;
    {
        const bool branch_taken_0x18da20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA20u;
        // 0x18da24: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da20) {
            ctx->pc = 0x18DA5Cu;
            goto label_18da5c;
        }
    }
    ctx->pc = 0x18DA28u;
label_18da28:
    // 0x18da28: 0xe62401ec  swc1        $f4, 0x1EC($s1)
    ctx->pc = 0x18da28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 492), bits); }
label_18da2c:
    // 0x18da2c: 0xae2001e8  sw          $zero, 0x1E8($s1)
    ctx->pc = 0x18da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
label_18da30:
    // 0x18da30: 0x8e2201f4  lw          $v0, 0x1F4($s1)
    ctx->pc = 0x18da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
label_18da34:
    // 0x18da34: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_18da38:
    if (ctx->pc == 0x18DA38u) {
        ctx->pc = 0x18DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA34u;
        // 0x18da38: 0xac600174  sw          $zero, 0x174($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA3Cu;
        goto label_18da3c;
    }
    ctx->pc = 0x18DA34u;
    {
        const bool branch_taken_0x18da34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA34u;
        // 0x18da38: 0xac600174  sw          $zero, 0x174($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da34) {
            ctx->pc = 0x18DA5Cu;
            goto label_18da5c;
        }
    }
    ctx->pc = 0x18DA3Cu;
label_18da3c:
    // 0x18da3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18da40:
    // 0x18da40: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x18da40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_18da44:
    // 0x18da44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18da44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18da48:
    // 0x18da48: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18da48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18da4c:
    // 0x18da4c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18da50:
    // 0x18da50: 0x40f809  jalr        $v0
label_18da54:
    if (ctx->pc == 0x18DA54u) {
        ctx->pc = 0x18DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA50u;
        // 0x18da54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA58u;
        goto label_18da58;
    }
    ctx->pc = 0x18DA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DA58u);
        ctx->pc = 0x18DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA50u;
        // 0x18da54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DA50u, 0x18DA58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18DA58u;
label_18da58:
    // 0x18da58: 0xae2201f4  sw          $v0, 0x1F4($s1)
    ctx->pc = 0x18da58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 2));
label_18da5c:
    // 0x18da5c: 0xc06357e  jal         func_18D5F8
label_18da60:
    if (ctx->pc == 0x18DA60u) {
        ctx->pc = 0x18DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA5Cu;
        // 0x18da60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA64u;
        goto label_18da64;
    }
    ctx->pc = 0x18DA5Cu;
    SET_GPR_U32(ctx, 31, 0x18DA64u);
    ctx->pc = 0x18DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA5Cu;
    // 0x18da60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D5F8u, 0x18DA5Cu, 0x18DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA64u;
label_18da64:
    // 0x18da64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18da64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18da68:
    // 0x18da68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18da68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18da6c:
    // 0x18da6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18da6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18da70:
    // 0x18da70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18da70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18da74:
    // 0x18da74: 0x3e00008  jr          $ra
label_18da78:
    if (ctx->pc == 0x18DA78u) {
        ctx->pc = 0x18DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA74u;
        // 0x18da78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA7Cu;
        goto label_18da7c;
    }
    ctx->pc = 0x18DA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA74u;
        // 0x18da78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DA7Cu;
label_18da7c:
    // 0x18da7c: 0x0  nop
    ctx->pc = 0x18da7cu;
    // NOP
    ctx->pc = 0x18da80u;
}
