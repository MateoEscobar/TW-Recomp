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

// Function: sub_002E19B0
// Address: 0x2e19b0 - 0x2e1ad0
void sub_002E19B0_0x2e19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E19B0_0x2e19b0");
#endif

    switch (ctx->pc) {
        case 0x2e19b0u: goto label_2e19b0;
        case 0x2e19b4u: goto label_2e19b4;
        case 0x2e19b8u: goto label_2e19b8;
        case 0x2e19bcu: goto label_2e19bc;
        case 0x2e19c0u: goto label_2e19c0;
        case 0x2e19c4u: goto label_2e19c4;
        case 0x2e19c8u: goto label_2e19c8;
        case 0x2e19ccu: goto label_2e19cc;
        case 0x2e19d0u: goto label_2e19d0;
        case 0x2e19d4u: goto label_2e19d4;
        case 0x2e19d8u: goto label_2e19d8;
        case 0x2e19dcu: goto label_2e19dc;
        case 0x2e19e0u: goto label_2e19e0;
        case 0x2e19e4u: goto label_2e19e4;
        case 0x2e19e8u: goto label_2e19e8;
        case 0x2e19ecu: goto label_2e19ec;
        case 0x2e19f0u: goto label_2e19f0;
        case 0x2e19f4u: goto label_2e19f4;
        case 0x2e19f8u: goto label_2e19f8;
        case 0x2e19fcu: goto label_2e19fc;
        case 0x2e1a00u: goto label_2e1a00;
        case 0x2e1a04u: goto label_2e1a04;
        case 0x2e1a08u: goto label_2e1a08;
        case 0x2e1a0cu: goto label_2e1a0c;
        case 0x2e1a10u: goto label_2e1a10;
        case 0x2e1a14u: goto label_2e1a14;
        case 0x2e1a18u: goto label_2e1a18;
        case 0x2e1a1cu: goto label_2e1a1c;
        case 0x2e1a20u: goto label_2e1a20;
        case 0x2e1a24u: goto label_2e1a24;
        case 0x2e1a28u: goto label_2e1a28;
        case 0x2e1a2cu: goto label_2e1a2c;
        case 0x2e1a30u: goto label_2e1a30;
        case 0x2e1a34u: goto label_2e1a34;
        case 0x2e1a38u: goto label_2e1a38;
        case 0x2e1a3cu: goto label_2e1a3c;
        case 0x2e1a40u: goto label_2e1a40;
        case 0x2e1a44u: goto label_2e1a44;
        case 0x2e1a48u: goto label_2e1a48;
        case 0x2e1a4cu: goto label_2e1a4c;
        case 0x2e1a50u: goto label_2e1a50;
        case 0x2e1a54u: goto label_2e1a54;
        case 0x2e1a58u: goto label_2e1a58;
        case 0x2e1a5cu: goto label_2e1a5c;
        case 0x2e1a60u: goto label_2e1a60;
        case 0x2e1a64u: goto label_2e1a64;
        case 0x2e1a68u: goto label_2e1a68;
        case 0x2e1a6cu: goto label_2e1a6c;
        case 0x2e1a70u: goto label_2e1a70;
        case 0x2e1a74u: goto label_2e1a74;
        case 0x2e1a78u: goto label_2e1a78;
        case 0x2e1a7cu: goto label_2e1a7c;
        case 0x2e1a80u: goto label_2e1a80;
        case 0x2e1a84u: goto label_2e1a84;
        case 0x2e1a88u: goto label_2e1a88;
        case 0x2e1a8cu: goto label_2e1a8c;
        case 0x2e1a90u: goto label_2e1a90;
        case 0x2e1a94u: goto label_2e1a94;
        case 0x2e1a98u: goto label_2e1a98;
        case 0x2e1a9cu: goto label_2e1a9c;
        case 0x2e1aa0u: goto label_2e1aa0;
        case 0x2e1aa4u: goto label_2e1aa4;
        case 0x2e1aa8u: goto label_2e1aa8;
        case 0x2e1aacu: goto label_2e1aac;
        case 0x2e1ab0u: goto label_2e1ab0;
        case 0x2e1ab4u: goto label_2e1ab4;
        case 0x2e1ab8u: goto label_2e1ab8;
        case 0x2e1abcu: goto label_2e1abc;
        case 0x2e1ac0u: goto label_2e1ac0;
        case 0x2e1ac4u: goto label_2e1ac4;
        case 0x2e1ac8u: goto label_2e1ac8;
        case 0x2e1accu: goto label_2e1acc;
        default: break;
    }

    ctx->pc = 0x2e19b0u;

label_2e19b0:
    // 0x2e19b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2e19b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2e19b4:
    // 0x2e19b4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2e19b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2e19b8:
    // 0x2e19b8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2e19b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2e19bc:
    // 0x2e19bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e19bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e19c0:
    // 0x2e19c0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2e19c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2e19c4:
    // 0x2e19c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e19c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e19c8:
    // 0x2e19c8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2e19c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2e19cc:
    // 0x2e19cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e19ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e19d0:
    // 0x2e19d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e19d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2e19d4:
    // 0x2e19d4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e19d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e19d8:
    // 0x2e19d8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2e19d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2e19dc:
    // 0x2e19dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e19dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e19e0:
    // 0x2e19e0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2e19e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2e19e4:
    // 0x2e19e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e19e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e19e8:
    // 0x2e19e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e19e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2e19ec:
    // 0x2e19ec: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2e19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2e19f0:
    // 0x2e19f0: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2e19f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e19f4:
    // 0x2e19f4: 0x94510032  lhu         $s1, 0x32($v0)
    ctx->pc = 0x2e19f4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
label_2e19f8:
    // 0x2e19f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e19fc:
    // 0x2e19fc: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2e19fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2e1a00:
    // 0x2e1a00: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2e1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2e1a04:
    // 0x2e1a04: 0x60f809  jalr        $v1
label_2e1a08:
    if (ctx->pc == 0x2E1A08u) {
        ctx->pc = 0x2E1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A04u;
        // 0x2e1a08: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1A0Cu;
        goto label_2e1a0c;
    }
    ctx->pc = 0x2E1A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E1A0Cu);
        ctx->pc = 0x2E1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A04u;
        // 0x2e1a08: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1A04u, 0x2E1A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1A0Cu;
label_2e1a0c:
    // 0x2e1a0c: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x2e1a0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e1a10:
    // 0x2e1a10: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2e1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2e1a14:
    // 0x2e1a14: 0xc4546bd4  lwc1        $f20, 0x6BD4($v0)
    ctx->pc = 0x2e1a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 27604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e1a18:
    // 0x2e1a18: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x2e1a18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2e1a1c:
    // 0x2e1a1c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_2e1a20:
    if (ctx->pc == 0x2E1A20u) {
        ctx->pc = 0x2E1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A1Cu;
        // 0x2e1a20: 0x7fa40000  sq          $a0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1A24u;
        goto label_2e1a24;
    }
    ctx->pc = 0x2E1A1Cu;
    {
        const bool branch_taken_0x2e1a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A1Cu;
        // 0x2e1a20: 0x7fa40000  sq          $a0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a1c) {
            ctx->pc = 0x2E1AA0u;
            goto label_2e1aa0;
        }
    }
    ctx->pc = 0x2E1A24u;
label_2e1a24:
    // 0x2e1a24: 0x0  nop
    ctx->pc = 0x2e1a24u;
    // NOP
label_2e1a28:
    // 0x2e1a28: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2e1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2e1a2c:
    // 0x2e1a2c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e1a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2e1a30:
    // 0x2e1a30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e1a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e1a34:
    // 0x2e1a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e1a38:
    // 0x2e1a38: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2e1a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e1a3c:
    // 0x2e1a3c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e1a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e1a40:
    // 0x2e1a40: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2e1a40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2e1a44:
    // 0x2e1a44: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2e1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2e1a48:
    // 0x2e1a48: 0x40f809  jalr        $v0
label_2e1a4c:
    if (ctx->pc == 0x2E1A4Cu) {
        ctx->pc = 0x2E1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A48u;
        // 0x2e1a4c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1A50u;
        goto label_2e1a50;
    }
    ctx->pc = 0x2E1A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E1A50u);
        ctx->pc = 0x2E1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A48u;
        // 0x2e1a4c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1A48u, 0x2E1A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1A50u;
label_2e1a50:
    // 0x2e1a50: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2e1a50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e1a54:
    // 0x2e1a54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e1a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e1a58:
    // 0x2e1a58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e1a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e1a5c:
    // 0x2e1a5c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e1a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e1a60:
    // 0x2e1a60: 0xc0cdb4a  jal         func_336D28
label_2e1a64:
    if (ctx->pc == 0x2E1A64u) {
        ctx->pc = 0x2E1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A60u;
        // 0x2e1a64: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1A68u;
        goto label_2e1a68;
    }
    ctx->pc = 0x2E1A60u;
    SET_GPR_U32(ctx, 31, 0x2E1A68u);
    ctx->pc = 0x2E1A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1A60u;
    // 0x2e1a64: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D28u, 0x2E1A60u, 0x2E1A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1A68u;
label_2e1a68:
    // 0x2e1a68: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e1a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1a6c:
    // 0x2e1a6c: 0x0  nop
    ctx->pc = 0x2e1a6cu;
    // NOP
label_2e1a70:
    // 0x2e1a70: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_2e1a74:
    if (ctx->pc == 0x2E1A74u) {
        ctx->pc = 0x2E1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A70u;
        // 0x2e1a74: 0x2602fffe  addiu       $v0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1A78u;
        goto label_2e1a78;
    }
    ctx->pc = 0x2E1A70u;
    {
        const bool branch_taken_0x2e1a70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A70u;
        // 0x2e1a74: 0x2602fffe  addiu       $v0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a70) {
            ctx->pc = 0x2E1AA4u;
            goto label_2e1aa4;
        }
    }
    ctx->pc = 0x2E1A78u;
label_2e1a78:
    // 0x2e1a78: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x2e1a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2e1a7c:
    // 0x2e1a7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e1a80:
    if (ctx->pc == 0x2E1A80u) {
        ctx->pc = 0x2E1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A7Cu;
        // 0x2e1a80: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1A84u;
        goto label_2e1a84;
    }
    ctx->pc = 0x2E1A7Cu;
    {
        const bool branch_taken_0x2e1a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A7Cu;
        // 0x2e1a80: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a7c) {
            ctx->pc = 0x2E1A8Cu;
            goto label_2e1a8c;
        }
    }
    ctx->pc = 0x2E1A84u;
label_2e1a84:
    // 0x2e1a84: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e1a88:
    if (ctx->pc == 0x2E1A88u) {
        ctx->pc = 0x2E1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A84u;
        // 0x2e1a88: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1A8Cu;
        goto label_2e1a8c;
    }
    ctx->pc = 0x2E1A84u;
    {
        const bool branch_taken_0x2e1a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A84u;
        // 0x2e1a88: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a84) {
            ctx->pc = 0x2E1AA4u;
            goto label_2e1aa4;
        }
    }
    ctx->pc = 0x2E1A8Cu;
label_2e1a8c:
    // 0x2e1a8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e1a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e1a90:
    // 0x2e1a90: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e1a90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2e1a94:
    // 0x2e1a94: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x2e1a94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2e1a98:
    // 0x2e1a98: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_2e1a9c:
    if (ctx->pc == 0x2E1A9Cu) {
        ctx->pc = 0x2E1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A98u;
        // 0x2e1a9c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1AA0u;
        goto label_2e1aa0;
    }
    ctx->pc = 0x2E1A98u;
    {
        const bool branch_taken_0x2e1a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A98u;
        // 0x2e1a9c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a98) {
            ctx->pc = 0x2E1A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1a28;
        }
    }
    ctx->pc = 0x2E1AA0u;
label_2e1aa0:
    // 0x2e1aa0: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x2e1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
label_2e1aa4:
    // 0x2e1aa4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2e1aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e1aa8:
    // 0x2e1aa8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2e1aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e1aac:
    // 0x2e1aac: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2e1aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e1ab0:
    // 0x2e1ab0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2e1ab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e1ab4:
    // 0x2e1ab4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2e1ab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e1ab8:
    // 0x2e1ab8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e1ab8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e1abc:
    // 0x2e1abc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e1abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e1ac0:
    // 0x2e1ac0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2e1ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e1ac4:
    // 0x2e1ac4: 0x3e00008  jr          $ra
label_2e1ac8:
    if (ctx->pc == 0x2E1AC8u) {
        ctx->pc = 0x2E1AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AC4u;
        // 0x2e1ac8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1ACCu;
        goto label_2e1acc;
    }
    ctx->pc = 0x2E1AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AC4u;
        // 0x2e1ac8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1ACCu;
label_2e1acc:
    // 0x2e1acc: 0x0  nop
    ctx->pc = 0x2e1accu;
    // NOP
    ctx->pc = 0x2e1ad0u;
}
