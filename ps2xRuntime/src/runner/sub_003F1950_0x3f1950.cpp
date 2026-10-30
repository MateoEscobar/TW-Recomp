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

// Function: sub_003F1950
// Address: 0x3f1950 - 0x3f1ad8
void sub_003F1950_0x3f1950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1950_0x3f1950");
#endif

    switch (ctx->pc) {
        case 0x3f1950u: goto label_3f1950;
        case 0x3f1954u: goto label_3f1954;
        case 0x3f1958u: goto label_3f1958;
        case 0x3f195cu: goto label_3f195c;
        case 0x3f1960u: goto label_3f1960;
        case 0x3f1964u: goto label_3f1964;
        case 0x3f1968u: goto label_3f1968;
        case 0x3f196cu: goto label_3f196c;
        case 0x3f1970u: goto label_3f1970;
        case 0x3f1974u: goto label_3f1974;
        case 0x3f1978u: goto label_3f1978;
        case 0x3f197cu: goto label_3f197c;
        case 0x3f1980u: goto label_3f1980;
        case 0x3f1984u: goto label_3f1984;
        case 0x3f1988u: goto label_3f1988;
        case 0x3f198cu: goto label_3f198c;
        case 0x3f1990u: goto label_3f1990;
        case 0x3f1994u: goto label_3f1994;
        case 0x3f1998u: goto label_3f1998;
        case 0x3f199cu: goto label_3f199c;
        case 0x3f19a0u: goto label_3f19a0;
        case 0x3f19a4u: goto label_3f19a4;
        case 0x3f19a8u: goto label_3f19a8;
        case 0x3f19acu: goto label_3f19ac;
        case 0x3f19b0u: goto label_3f19b0;
        case 0x3f19b4u: goto label_3f19b4;
        case 0x3f19b8u: goto label_3f19b8;
        case 0x3f19bcu: goto label_3f19bc;
        case 0x3f19c0u: goto label_3f19c0;
        case 0x3f19c4u: goto label_3f19c4;
        case 0x3f19c8u: goto label_3f19c8;
        case 0x3f19ccu: goto label_3f19cc;
        case 0x3f19d0u: goto label_3f19d0;
        case 0x3f19d4u: goto label_3f19d4;
        case 0x3f19d8u: goto label_3f19d8;
        case 0x3f19dcu: goto label_3f19dc;
        case 0x3f19e0u: goto label_3f19e0;
        case 0x3f19e4u: goto label_3f19e4;
        case 0x3f19e8u: goto label_3f19e8;
        case 0x3f19ecu: goto label_3f19ec;
        case 0x3f19f0u: goto label_3f19f0;
        case 0x3f19f4u: goto label_3f19f4;
        case 0x3f19f8u: goto label_3f19f8;
        case 0x3f19fcu: goto label_3f19fc;
        case 0x3f1a00u: goto label_3f1a00;
        case 0x3f1a04u: goto label_3f1a04;
        case 0x3f1a08u: goto label_3f1a08;
        case 0x3f1a0cu: goto label_3f1a0c;
        case 0x3f1a10u: goto label_3f1a10;
        case 0x3f1a14u: goto label_3f1a14;
        case 0x3f1a18u: goto label_3f1a18;
        case 0x3f1a1cu: goto label_3f1a1c;
        case 0x3f1a20u: goto label_3f1a20;
        case 0x3f1a24u: goto label_3f1a24;
        case 0x3f1a28u: goto label_3f1a28;
        case 0x3f1a2cu: goto label_3f1a2c;
        case 0x3f1a30u: goto label_3f1a30;
        case 0x3f1a34u: goto label_3f1a34;
        case 0x3f1a38u: goto label_3f1a38;
        case 0x3f1a3cu: goto label_3f1a3c;
        case 0x3f1a40u: goto label_3f1a40;
        case 0x3f1a44u: goto label_3f1a44;
        case 0x3f1a48u: goto label_3f1a48;
        case 0x3f1a4cu: goto label_3f1a4c;
        case 0x3f1a50u: goto label_3f1a50;
        case 0x3f1a54u: goto label_3f1a54;
        case 0x3f1a58u: goto label_3f1a58;
        case 0x3f1a5cu: goto label_3f1a5c;
        case 0x3f1a60u: goto label_3f1a60;
        case 0x3f1a64u: goto label_3f1a64;
        case 0x3f1a68u: goto label_3f1a68;
        case 0x3f1a6cu: goto label_3f1a6c;
        case 0x3f1a70u: goto label_3f1a70;
        case 0x3f1a74u: goto label_3f1a74;
        case 0x3f1a78u: goto label_3f1a78;
        case 0x3f1a7cu: goto label_3f1a7c;
        case 0x3f1a80u: goto label_3f1a80;
        case 0x3f1a84u: goto label_3f1a84;
        case 0x3f1a88u: goto label_3f1a88;
        case 0x3f1a8cu: goto label_3f1a8c;
        case 0x3f1a90u: goto label_3f1a90;
        case 0x3f1a94u: goto label_3f1a94;
        case 0x3f1a98u: goto label_3f1a98;
        case 0x3f1a9cu: goto label_3f1a9c;
        case 0x3f1aa0u: goto label_3f1aa0;
        case 0x3f1aa4u: goto label_3f1aa4;
        case 0x3f1aa8u: goto label_3f1aa8;
        case 0x3f1aacu: goto label_3f1aac;
        case 0x3f1ab0u: goto label_3f1ab0;
        case 0x3f1ab4u: goto label_3f1ab4;
        case 0x3f1ab8u: goto label_3f1ab8;
        case 0x3f1abcu: goto label_3f1abc;
        case 0x3f1ac0u: goto label_3f1ac0;
        case 0x3f1ac4u: goto label_3f1ac4;
        case 0x3f1ac8u: goto label_3f1ac8;
        case 0x3f1accu: goto label_3f1acc;
        case 0x3f1ad0u: goto label_3f1ad0;
        case 0x3f1ad4u: goto label_3f1ad4;
        default: break;
    }

    ctx->pc = 0x3f1950u;

label_3f1950:
    // 0x3f1950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f1950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f1954:
    // 0x3f1954: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3f1954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3f1958:
    // 0x3f1958: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3f1958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3f195c:
    // 0x3f195c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f195cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f1960:
    // 0x3f1960: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f1960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f1964:
    // 0x3f1964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f1964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f1968:
    // 0x3f1968: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f1968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f196c:
    // 0x3f196c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f196cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f1970:
    // 0x3f1970: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f1970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f1974:
    // 0x3f1974: 0x40f809  jalr        $v0
label_3f1978:
    if (ctx->pc == 0x3F1978u) {
        ctx->pc = 0x3F1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1974u;
        // 0x3f1978: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F197Cu;
        goto label_3f197c;
    }
    ctx->pc = 0x3F1974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F197Cu);
        ctx->pc = 0x3F1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1974u;
        // 0x3f1978: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1974u, 0x3F197Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F197Cu;
label_3f197c:
    // 0x3f197c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f197cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1980:
    // 0x3f1980: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3f1980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_3f1984:
    // 0x3f1984: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f1984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f1988:
    // 0x3f1988: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3f1988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3f198c:
    // 0x3f198c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f198cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f1990:
    // 0x3f1990: 0xc0e947e  jal         func_3A51F8
label_3f1994:
    if (ctx->pc == 0x3F1994u) {
        ctx->pc = 0x3F1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1990u;
        // 0x3f1994: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1998u;
        goto label_3f1998;
    }
    ctx->pc = 0x3F1990u;
    SET_GPR_U32(ctx, 31, 0x3F1998u);
    ctx->pc = 0x3F1994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1990u;
    // 0x3f1994: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3F1990u, 0x3F1998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1998u;
label_3f1998:
    // 0x3f1998: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3f199c:
    if (ctx->pc == 0x3F199Cu) {
        ctx->pc = 0x3F199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1998u;
        // 0x3f199c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F19A0u;
        goto label_3f19a0;
    }
    ctx->pc = 0x3F1998u;
    {
        const bool branch_taken_0x3f1998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1998u;
        // 0x3f199c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1998) {
            ctx->pc = 0x3F19B0u;
            goto label_3f19b0;
        }
    }
    ctx->pc = 0x3F19A0u;
label_3f19a0:
    // 0x3f19a0: 0xc0fc5ba  jal         func_3F16E8
label_3f19a4:
    if (ctx->pc == 0x3F19A4u) {
        ctx->pc = 0x3F19A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F19A0u;
        // 0x3f19a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F19A8u;
        goto label_3f19a8;
    }
    ctx->pc = 0x3F19A0u;
    SET_GPR_U32(ctx, 31, 0x3F19A8u);
    ctx->pc = 0x3F19A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F19A0u;
    // 0x3f19a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F16E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F16E8u, 0x3F19A0u, 0x3F19A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F19A8u;
label_3f19a8:
    // 0x3f19a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f19ac:
    if (ctx->pc == 0x3F19ACu) {
        ctx->pc = 0x3F19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F19A8u;
        // 0x3f19ac: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F19B0u;
        goto label_3f19b0;
    }
    ctx->pc = 0x3F19A8u;
    {
        const bool branch_taken_0x3f19a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F19A8u;
        // 0x3f19ac: 0x8e25001c  lw          $a1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f19a8) {
            ctx->pc = 0x3F19BCu;
            goto label_3f19bc;
        }
    }
    ctx->pc = 0x3F19B0u;
label_3f19b0:
    // 0x3f19b0: 0xc0fc5d8  jal         func_3F1760
label_3f19b4:
    if (ctx->pc == 0x3F19B4u) {
        ctx->pc = 0x3F19B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F19B0u;
        // 0x3f19b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F19B8u;
        goto label_3f19b8;
    }
    ctx->pc = 0x3F19B0u;
    SET_GPR_U32(ctx, 31, 0x3F19B8u);
    ctx->pc = 0x3F19B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F19B0u;
    // 0x3f19b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1760u, 0x3F19B0u, 0x3F19B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F19B8u;
label_3f19b8:
    // 0x3f19b8: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x3f19b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3f19bc:
    // 0x3f19bc: 0xc0e858c  jal         func_3A1630
label_3f19c0:
    if (ctx->pc == 0x3F19C0u) {
        ctx->pc = 0x3F19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F19BCu;
        // 0x3f19c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F19C4u;
        goto label_3f19c4;
    }
    ctx->pc = 0x3F19BCu;
    SET_GPR_U32(ctx, 31, 0x3F19C4u);
    ctx->pc = 0x3F19C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F19BCu;
    // 0x3f19c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F19BCu, 0x3F19C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F19C4u;
label_3f19c4:
    // 0x3f19c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f19c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f19c8:
    // 0x3f19c8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3f19c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3f19cc:
    // 0x3f19cc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3f19ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3f19d0:
    // 0x3f19d0: 0x40f809  jalr        $v0
label_3f19d4:
    if (ctx->pc == 0x3F19D4u) {
        ctx->pc = 0x3F19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F19D0u;
        // 0x3f19d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F19D8u;
        goto label_3f19d8;
    }
    ctx->pc = 0x3F19D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F19D8u);
        ctx->pc = 0x3F19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F19D0u;
        // 0x3f19d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F19D0u, 0x3F19D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F19D8u;
label_3f19d8:
    // 0x3f19d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f19d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f19dc:
    // 0x3f19dc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3f19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3f19e0:
    // 0x3f19e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3f19e4:
    if (ctx->pc == 0x3F19E4u) {
        ctx->pc = 0x3F19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F19E0u;
        // 0x3f19e4: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F19E8u;
        goto label_3f19e8;
    }
    ctx->pc = 0x3F19E0u;
    {
        const bool branch_taken_0x3f19e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f19e0) {
            ctx->pc = 0x3F19E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F19E0u;
            // 0x3f19e4: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F19F8u;
            goto label_3f19f8;
        }
    }
    ctx->pc = 0x3F19E8u;
label_3f19e8:
    // 0x3f19e8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3f19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_3f19ec:
    // 0x3f19ec: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x3f19ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_3f19f0:
    // 0x3f19f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3f19f4:
    if (ctx->pc == 0x3F19F4u) {
        ctx->pc = 0x3F19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F19F0u;
        // 0x3f19f4: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F19F8u;
        goto label_3f19f8;
    }
    ctx->pc = 0x3F19F0u;
    {
        const bool branch_taken_0x3f19f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F19F0u;
        // 0x3f19f4: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f19f0) {
            ctx->pc = 0x3F1A04u;
            goto label_3f1a04;
        }
    }
    ctx->pc = 0x3F19F8u;
label_3f19f8:
    // 0x3f19f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f19fc:
    // 0x3f19fc: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3f19fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_3f1a00:
    // 0x3f1a00: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3f1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3f1a04:
    // 0x3f1a04: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3f1a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3f1a08:
    // 0x3f1a08: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_3f1a0c:
    if (ctx->pc == 0x3F1A0Cu) {
        ctx->pc = 0x3F1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A08u;
        // 0x3f1a0c: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1A10u;
        goto label_3f1a10;
    }
    ctx->pc = 0x3F1A08u;
    {
        const bool branch_taken_0x3f1a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A08u;
        // 0x3f1a0c: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1a08) {
            ctx->pc = 0x3F1A48u;
            goto label_3f1a48;
        }
    }
    ctx->pc = 0x3F1A10u;
label_3f1a10:
    // 0x3f1a10: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3f1a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3f1a14:
    // 0x3f1a14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f1a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f1a18:
    // 0x3f1a18: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_3f1a1c:
    if (ctx->pc == 0x3F1A1Cu) {
        ctx->pc = 0x3F1A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A18u;
        // 0x3f1a1c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1A20u;
        goto label_3f1a20;
    }
    ctx->pc = 0x3F1A18u;
    {
        const bool branch_taken_0x3f1a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F1A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A18u;
        // 0x3f1a1c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1a18) {
            ctx->pc = 0x3F1A7Cu;
            goto label_3f1a7c;
        }
    }
    ctx->pc = 0x3F1A20u;
label_3f1a20:
    // 0x3f1a20: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x3f1a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_3f1a24:
    // 0x3f1a24: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3f1a28:
    if (ctx->pc == 0x3F1A28u) {
        ctx->pc = 0x3F1A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A24u;
        // 0x3f1a28: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1A2Cu;
        goto label_3f1a2c;
    }
    ctx->pc = 0x3F1A24u;
    {
        const bool branch_taken_0x3f1a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1a24) {
            ctx->pc = 0x3F1A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1A24u;
            // 0x3f1a28: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1A44u;
            goto label_3f1a44;
        }
    }
    ctx->pc = 0x3F1A2Cu;
label_3f1a2c:
    // 0x3f1a2c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3f1a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3f1a30:
    // 0x3f1a30: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3f1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3f1a34:
    // 0x3f1a34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3f1a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3f1a38:
    // 0x3f1a38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3f1a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3f1a3c:
    // 0x3f1a3c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3f1a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3f1a40:
    // 0x3f1a40: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3f1a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_3f1a44:
    // 0x3f1a44: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3f1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_3f1a48:
    // 0x3f1a48: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x3f1a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_3f1a4c:
    // 0x3f1a4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3f1a50:
    if (ctx->pc == 0x3F1A50u) {
        ctx->pc = 0x3F1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A4Cu;
        // 0x3f1a50: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1A54u;
        goto label_3f1a54;
    }
    ctx->pc = 0x3F1A4Cu;
    {
        const bool branch_taken_0x3f1a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A4Cu;
        // 0x3f1a50: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1a4c) {
            ctx->pc = 0x3F1A84u;
            goto label_3f1a84;
        }
    }
    ctx->pc = 0x3F1A54u;
label_3f1a54:
    // 0x3f1a54: 0xc0e87c0  jal         func_3A1F00
label_3f1a58:
    if (ctx->pc == 0x3F1A58u) {
        ctx->pc = 0x3F1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A54u;
        // 0x3f1a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1A5Cu;
        goto label_3f1a5c;
    }
    ctx->pc = 0x3F1A54u;
    SET_GPR_U32(ctx, 31, 0x3F1A5Cu);
    ctx->pc = 0x3F1A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1A54u;
    // 0x3f1a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3F1A54u, 0x3F1A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1A5Cu;
label_3f1a5c:
    // 0x3f1a5c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3f1a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f1a60:
    // 0x3f1a60: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x3f1a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
label_3f1a64:
    // 0x3f1a64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f1a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f1a68:
    // 0x3f1a68: 0x0  nop
    ctx->pc = 0x3f1a68u;
    // NOP
label_3f1a6c:
    // 0x3f1a6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f1a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f1a70:
    // 0x3f1a70: 0x0  nop
    ctx->pc = 0x3f1a70u;
    // NOP
label_3f1a74:
    // 0x3f1a74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3f1a78:
    if (ctx->pc == 0x3F1A78u) {
        ctx->pc = 0x3F1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A74u;
        // 0x3f1a78: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1A7Cu;
        goto label_3f1a7c;
    }
    ctx->pc = 0x3F1A74u;
    {
        const bool branch_taken_0x3f1a74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A74u;
        // 0x3f1a78: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1a74) {
            ctx->pc = 0x3F1A84u;
            goto label_3f1a84;
        }
    }
    ctx->pc = 0x3F1A7Cu;
label_3f1a7c:
    // 0x3f1a7c: 0x10000010  b           . + 4 + (0x10 << 2)
label_3f1a80:
    if (ctx->pc == 0x3F1A80u) {
        ctx->pc = 0x3F1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A7Cu;
        // 0x3f1a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1A84u;
        goto label_3f1a84;
    }
    ctx->pc = 0x3F1A7Cu;
    {
        const bool branch_taken_0x3f1a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A7Cu;
        // 0x3f1a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1a7c) {
            ctx->pc = 0x3F1AC0u;
            goto label_3f1ac0;
        }
    }
    ctx->pc = 0x3F1A84u;
label_3f1a84:
    // 0x3f1a84: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x3f1a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_3f1a88:
    // 0x3f1a88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3f1a8c:
    if (ctx->pc == 0x3F1A8Cu) {
        ctx->pc = 0x3F1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A88u;
        // 0x3f1a8c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1A90u;
        goto label_3f1a90;
    }
    ctx->pc = 0x3F1A88u;
    {
        const bool branch_taken_0x3f1a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A88u;
        // 0x3f1a8c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1a88) {
            ctx->pc = 0x3F1ABCu;
            goto label_3f1abc;
        }
    }
    ctx->pc = 0x3F1A90u;
label_3f1a90:
    // 0x3f1a90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f1a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f1a94:
    // 0x3f1a94: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3f1a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3f1a98:
    // 0x3f1a98: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3f1a98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3f1a9c:
    // 0x3f1a9c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3f1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3f1aa0:
    // 0x3f1aa0: 0x40f809  jalr        $v0
label_3f1aa4:
    if (ctx->pc == 0x3F1AA4u) {
        ctx->pc = 0x3F1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1AA0u;
        // 0x3f1aa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1AA8u;
        goto label_3f1aa8;
    }
    ctx->pc = 0x3F1AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F1AA8u);
        ctx->pc = 0x3F1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1AA0u;
        // 0x3f1aa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1AA0u, 0x3F1AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1AA8u;
label_3f1aa8:
    // 0x3f1aa8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3f1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3f1aac:
    // 0x3f1aac: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3f1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3f1ab0:
    // 0x3f1ab0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3f1ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3f1ab4:
    // 0x3f1ab4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3f1ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3f1ab8:
    // 0x3f1ab8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3f1ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3f1abc:
    // 0x3f1abc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f1abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f1ac0:
    // 0x3f1ac0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3f1ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f1ac4:
    // 0x3f1ac4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3f1ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f1ac8:
    // 0x3f1ac8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f1ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f1acc:
    // 0x3f1acc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f1accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1ad0:
    // 0x3f1ad0: 0x3e00008  jr          $ra
label_3f1ad4:
    if (ctx->pc == 0x3F1AD4u) {
        ctx->pc = 0x3F1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1AD0u;
        // 0x3f1ad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1AD8u;
        goto label_fallthrough_0x3f1ad0;
    }
    ctx->pc = 0x3F1AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1AD0u;
        // 0x3f1ad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f1ad0:
    ctx->pc = 0x3F1AD8u;
}
