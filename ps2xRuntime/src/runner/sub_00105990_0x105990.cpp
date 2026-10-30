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

// Function: sub_00105990
// Address: 0x105990 - 0x105ab0
void sub_00105990_0x105990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105990_0x105990");
#endif

    switch (ctx->pc) {
        case 0x105990u: goto label_105990;
        case 0x105994u: goto label_105994;
        case 0x105998u: goto label_105998;
        case 0x10599cu: goto label_10599c;
        case 0x1059a0u: goto label_1059a0;
        case 0x1059a4u: goto label_1059a4;
        case 0x1059a8u: goto label_1059a8;
        case 0x1059acu: goto label_1059ac;
        case 0x1059b0u: goto label_1059b0;
        case 0x1059b4u: goto label_1059b4;
        case 0x1059b8u: goto label_1059b8;
        case 0x1059bcu: goto label_1059bc;
        case 0x1059c0u: goto label_1059c0;
        case 0x1059c4u: goto label_1059c4;
        case 0x1059c8u: goto label_1059c8;
        case 0x1059ccu: goto label_1059cc;
        case 0x1059d0u: goto label_1059d0;
        case 0x1059d4u: goto label_1059d4;
        case 0x1059d8u: goto label_1059d8;
        case 0x1059dcu: goto label_1059dc;
        case 0x1059e0u: goto label_1059e0;
        case 0x1059e4u: goto label_1059e4;
        case 0x1059e8u: goto label_1059e8;
        case 0x1059ecu: goto label_1059ec;
        case 0x1059f0u: goto label_1059f0;
        case 0x1059f4u: goto label_1059f4;
        case 0x1059f8u: goto label_1059f8;
        case 0x1059fcu: goto label_1059fc;
        case 0x105a00u: goto label_105a00;
        case 0x105a04u: goto label_105a04;
        case 0x105a08u: goto label_105a08;
        case 0x105a0cu: goto label_105a0c;
        case 0x105a10u: goto label_105a10;
        case 0x105a14u: goto label_105a14;
        case 0x105a18u: goto label_105a18;
        case 0x105a1cu: goto label_105a1c;
        case 0x105a20u: goto label_105a20;
        case 0x105a24u: goto label_105a24;
        case 0x105a28u: goto label_105a28;
        case 0x105a2cu: goto label_105a2c;
        case 0x105a30u: goto label_105a30;
        case 0x105a34u: goto label_105a34;
        case 0x105a38u: goto label_105a38;
        case 0x105a3cu: goto label_105a3c;
        case 0x105a40u: goto label_105a40;
        case 0x105a44u: goto label_105a44;
        case 0x105a48u: goto label_105a48;
        case 0x105a4cu: goto label_105a4c;
        case 0x105a50u: goto label_105a50;
        case 0x105a54u: goto label_105a54;
        case 0x105a58u: goto label_105a58;
        case 0x105a5cu: goto label_105a5c;
        case 0x105a60u: goto label_105a60;
        case 0x105a64u: goto label_105a64;
        case 0x105a68u: goto label_105a68;
        case 0x105a6cu: goto label_105a6c;
        case 0x105a70u: goto label_105a70;
        case 0x105a74u: goto label_105a74;
        case 0x105a78u: goto label_105a78;
        case 0x105a7cu: goto label_105a7c;
        case 0x105a80u: goto label_105a80;
        case 0x105a84u: goto label_105a84;
        case 0x105a88u: goto label_105a88;
        case 0x105a8cu: goto label_105a8c;
        case 0x105a90u: goto label_105a90;
        case 0x105a94u: goto label_105a94;
        case 0x105a98u: goto label_105a98;
        case 0x105a9cu: goto label_105a9c;
        case 0x105aa0u: goto label_105aa0;
        case 0x105aa4u: goto label_105aa4;
        case 0x105aa8u: goto label_105aa8;
        case 0x105aacu: goto label_105aac;
        default: break;
    }

    ctx->pc = 0x105990u;

label_105990:
    // 0x105990: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x105990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_105994:
    // 0x105994: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x105994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_105998:
    // 0x105998: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x105998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_10599c:
    // 0x10599c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1059a0:
    // 0x1059a0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1059a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1059a4:
    // 0x1059a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1059a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1059a8:
    // 0x1059a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1059a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1059ac:
    // 0x1059ac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1059acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1059b0:
    // 0x1059b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1059b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1059b4:
    // 0x1059b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1059b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1059b8:
    // 0x1059b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1059b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1059bc:
    // 0x1059bc: 0x24424fa8  addiu       $v0, $v0, 0x4FA8
    ctx->pc = 0x1059bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20392));
label_1059c0:
    // 0x1059c0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1059c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1059c4:
    // 0x1059c4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1059c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1059c8:
    // 0x1059c8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1059c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_1059cc:
    // 0x1059cc: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x1059ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1059d0:
    // 0x1059d0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1059d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1059d4:
    // 0x1059d4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1059d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1059d8:
    // 0x1059d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1059d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1059dc:
    // 0x1059dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1059dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1059e0:
    // 0x1059e0: 0xaeb00004  sw          $s0, 0x4($s5)
    ctx->pc = 0x1059e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
label_1059e4:
    // 0x1059e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1059e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1059e8:
    // 0x1059e8: 0xaea80024  sw          $t0, 0x24($s5)
    ctx->pc = 0x1059e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 8));
label_1059ec:
    // 0x1059ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1059ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1059f0:
    // 0x1059f0: 0xaea30014  sw          $v1, 0x14($s5)
    ctx->pc = 0x1059f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
label_1059f4:
    // 0x1059f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1059f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1059f8:
    // 0x1059f8: 0xc05d420  jal         func_175080
label_1059fc:
    if (ctx->pc == 0x1059FCu) {
        ctx->pc = 0x1059FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059F8u;
        // 0x1059fc: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105A00u;
        goto label_105a00;
    }
    ctx->pc = 0x1059F8u;
    SET_GPR_U32(ctx, 31, 0x105A00u);
    ctx->pc = 0x1059FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1059F8u;
    // 0x1059fc: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x1059F8u, 0x105A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A00u;
label_105a00:
    // 0x105a00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x105a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105a04:
    // 0x105a04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x105a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_105a08:
    // 0x105a08: 0xc042ed8  jal         func_10BB60
label_105a0c:
    if (ctx->pc == 0x105A0Cu) {
        ctx->pc = 0x105A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A08u;
        // 0x105a0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105A10u;
        goto label_105a10;
    }
    ctx->pc = 0x105A08u;
    SET_GPR_U32(ctx, 31, 0x105A10u);
    ctx->pc = 0x105A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105A08u;
    // 0x105a0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x105A08u, 0x105A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A10u;
label_105a10:
    // 0x105a10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105a14:
    // 0x105a14: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x105a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_105a18:
    // 0x105a18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x105a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_105a1c:
    // 0x105a1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x105a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105a20:
    // 0x105a20: 0xc041164  jal         func_104590
label_105a24:
    if (ctx->pc == 0x105A24u) {
        ctx->pc = 0x105A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A20u;
        // 0x105a24: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105A28u;
        goto label_105a28;
    }
    ctx->pc = 0x105A20u;
    SET_GPR_U32(ctx, 31, 0x105A28u);
    ctx->pc = 0x105A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105A20u;
    // 0x105a24: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x105A20u, 0x105A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A28u;
label_105a28:
    // 0x105a28: 0x8e0402b8  lw          $a0, 0x2B8($s0)
    ctx->pc = 0x105a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
label_105a2c:
    // 0x105a2c: 0xc04128e  jal         func_104A38
label_105a30:
    if (ctx->pc == 0x105A30u) {
        ctx->pc = 0x105A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A2Cu;
        // 0x105a30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105A34u;
        goto label_105a34;
    }
    ctx->pc = 0x105A2Cu;
    SET_GPR_U32(ctx, 31, 0x105A34u);
    ctx->pc = 0x105A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105A2Cu;
    // 0x105a30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A38u, 0x105A2Cu, 0x105A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A34u;
label_105a34:
    // 0x105a34: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x105a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_105a38:
    // 0x105a38: 0xaeb30028  sw          $s3, 0x28($s5)
    ctx->pc = 0x105a38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 19));
label_105a3c:
    // 0x105a3c: 0xaeb4002c  sw          $s4, 0x2C($s5)
    ctx->pc = 0x105a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 20));
label_105a40:
    // 0x105a40: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
label_105a44:
    if (ctx->pc == 0x105A44u) {
        ctx->pc = 0x105A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A40u;
        // 0x105a44: 0xaeb6001c  sw          $s6, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105A48u;
        goto label_105a48;
    }
    ctx->pc = 0x105A40u;
    {
        const bool branch_taken_0x105a40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A40u;
        // 0x105a44: 0xaeb6001c  sw          $s6, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a40) {
            ctx->pc = 0x105A64u;
            goto label_105a64;
        }
    }
    ctx->pc = 0x105A48u;
label_105a48:
    // 0x105a48: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x105a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_105a4c:
    // 0x105a4c: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x105a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_105a50:
    // 0x105a50: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x105a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_105a54:
    // 0x105a54: 0x60f809  jalr        $v1
label_105a58:
    if (ctx->pc == 0x105A58u) {
        ctx->pc = 0x105A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A54u;
        // 0x105a58: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105A5Cu;
        goto label_105a5c;
    }
    ctx->pc = 0x105A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105A5Cu);
        ctx->pc = 0x105A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A54u;
        // 0x105a58: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105A54u, 0x105A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105A5Cu;
label_105a5c:
    // 0x105a5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_105a60:
    if (ctx->pc == 0x105A60u) {
        ctx->pc = 0x105A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A5Cu;
        // 0x105a60: 0xe6a00020  swc1        $f0, 0x20($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x105A64u;
        goto label_105a64;
    }
    ctx->pc = 0x105A5Cu;
    {
        const bool branch_taken_0x105a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A5Cu;
        // 0x105a60: 0xe6a00020  swc1        $f0, 0x20($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a5c) {
            ctx->pc = 0x105A68u;
            goto label_105a68;
        }
    }
    ctx->pc = 0x105A64u;
label_105a64:
    // 0x105a64: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x105a64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_105a68:
    // 0x105a68: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x105a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_105a6c:
    // 0x105a6c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x105a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_105a70:
    // 0x105a70: 0x0  nop
    ctx->pc = 0x105a70u;
    // NOP
label_105a74:
    // 0x105a74: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_105a78:
    if (ctx->pc == 0x105A78u) {
        ctx->pc = 0x105A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A74u;
        // 0x105a78: 0xe6b40020  swc1        $f20, 0x20($s5) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x105A7Cu;
        goto label_105a7c;
    }
    ctx->pc = 0x105A74u;
    {
        const bool branch_taken_0x105a74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x105a74) {
            ctx->pc = 0x105A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105A74u;
            // 0x105a78: 0xe6b40020  swc1        $f20, 0x20($s5) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105A7Cu;
            goto label_105a7c;
        }
    }
    ctx->pc = 0x105A7Cu;
label_105a7c:
    // 0x105a7c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x105a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_105a80:
    // 0x105a80: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x105a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_105a84:
    // 0x105a84: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x105a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_105a88:
    // 0x105a88: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x105a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_105a8c:
    // 0x105a8c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x105a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_105a90:
    // 0x105a90: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x105a90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_105a94:
    // 0x105a94: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x105a94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_105a98:
    // 0x105a98: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x105a98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_105a9c:
    // 0x105a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_105aa0:
    // 0x105aa0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x105aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_105aa4:
    // 0x105aa4: 0x3e00008  jr          $ra
label_105aa8:
    if (ctx->pc == 0x105AA8u) {
        ctx->pc = 0x105AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AA4u;
        // 0x105aa8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105AACu;
        goto label_105aac;
    }
    ctx->pc = 0x105AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AA4u;
        // 0x105aa8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105AACu;
label_105aac:
    // 0x105aac: 0x0  nop
    ctx->pc = 0x105aacu;
    // NOP
    ctx->pc = 0x105ab0u;
}
