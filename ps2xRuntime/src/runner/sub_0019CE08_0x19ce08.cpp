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

// Function: sub_0019CE08
// Address: 0x19ce08 - 0x19cf50
void sub_0019CE08_0x19ce08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CE08_0x19ce08");
#endif

    switch (ctx->pc) {
        case 0x19ce08u: goto label_19ce08;
        case 0x19ce0cu: goto label_19ce0c;
        case 0x19ce10u: goto label_19ce10;
        case 0x19ce14u: goto label_19ce14;
        case 0x19ce18u: goto label_19ce18;
        case 0x19ce1cu: goto label_19ce1c;
        case 0x19ce20u: goto label_19ce20;
        case 0x19ce24u: goto label_19ce24;
        case 0x19ce28u: goto label_19ce28;
        case 0x19ce2cu: goto label_19ce2c;
        case 0x19ce30u: goto label_19ce30;
        case 0x19ce34u: goto label_19ce34;
        case 0x19ce38u: goto label_19ce38;
        case 0x19ce3cu: goto label_19ce3c;
        case 0x19ce40u: goto label_19ce40;
        case 0x19ce44u: goto label_19ce44;
        case 0x19ce48u: goto label_19ce48;
        case 0x19ce4cu: goto label_19ce4c;
        case 0x19ce50u: goto label_19ce50;
        case 0x19ce54u: goto label_19ce54;
        case 0x19ce58u: goto label_19ce58;
        case 0x19ce5cu: goto label_19ce5c;
        case 0x19ce60u: goto label_19ce60;
        case 0x19ce64u: goto label_19ce64;
        case 0x19ce68u: goto label_19ce68;
        case 0x19ce6cu: goto label_19ce6c;
        case 0x19ce70u: goto label_19ce70;
        case 0x19ce74u: goto label_19ce74;
        case 0x19ce78u: goto label_19ce78;
        case 0x19ce7cu: goto label_19ce7c;
        case 0x19ce80u: goto label_19ce80;
        case 0x19ce84u: goto label_19ce84;
        case 0x19ce88u: goto label_19ce88;
        case 0x19ce8cu: goto label_19ce8c;
        case 0x19ce90u: goto label_19ce90;
        case 0x19ce94u: goto label_19ce94;
        case 0x19ce98u: goto label_19ce98;
        case 0x19ce9cu: goto label_19ce9c;
        case 0x19cea0u: goto label_19cea0;
        case 0x19cea4u: goto label_19cea4;
        case 0x19cea8u: goto label_19cea8;
        case 0x19ceacu: goto label_19ceac;
        case 0x19ceb0u: goto label_19ceb0;
        case 0x19ceb4u: goto label_19ceb4;
        case 0x19ceb8u: goto label_19ceb8;
        case 0x19cebcu: goto label_19cebc;
        case 0x19cec0u: goto label_19cec0;
        case 0x19cec4u: goto label_19cec4;
        case 0x19cec8u: goto label_19cec8;
        case 0x19ceccu: goto label_19cecc;
        case 0x19ced0u: goto label_19ced0;
        case 0x19ced4u: goto label_19ced4;
        case 0x19ced8u: goto label_19ced8;
        case 0x19cedcu: goto label_19cedc;
        case 0x19cee0u: goto label_19cee0;
        case 0x19cee4u: goto label_19cee4;
        case 0x19cee8u: goto label_19cee8;
        case 0x19ceecu: goto label_19ceec;
        case 0x19cef0u: goto label_19cef0;
        case 0x19cef4u: goto label_19cef4;
        case 0x19cef8u: goto label_19cef8;
        case 0x19cefcu: goto label_19cefc;
        case 0x19cf00u: goto label_19cf00;
        case 0x19cf04u: goto label_19cf04;
        case 0x19cf08u: goto label_19cf08;
        case 0x19cf0cu: goto label_19cf0c;
        case 0x19cf10u: goto label_19cf10;
        case 0x19cf14u: goto label_19cf14;
        case 0x19cf18u: goto label_19cf18;
        case 0x19cf1cu: goto label_19cf1c;
        case 0x19cf20u: goto label_19cf20;
        case 0x19cf24u: goto label_19cf24;
        case 0x19cf28u: goto label_19cf28;
        case 0x19cf2cu: goto label_19cf2c;
        case 0x19cf30u: goto label_19cf30;
        case 0x19cf34u: goto label_19cf34;
        case 0x19cf38u: goto label_19cf38;
        case 0x19cf3cu: goto label_19cf3c;
        case 0x19cf40u: goto label_19cf40;
        case 0x19cf44u: goto label_19cf44;
        case 0x19cf48u: goto label_19cf48;
        case 0x19cf4cu: goto label_19cf4c;
        default: break;
    }

    ctx->pc = 0x19ce08u;

label_19ce08:
    // 0x19ce08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19ce08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_19ce0c:
    // 0x19ce0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19ce10:
    // 0x19ce10: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19ce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_19ce14:
    // 0x19ce14: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19ce14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_19ce18:
    // 0x19ce18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ce18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ce1c:
    // 0x19ce1c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_19ce20:
    // 0x19ce20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19ce20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19ce24:
    // 0x19ce24: 0x26120090  addiu       $s2, $s0, 0x90
    ctx->pc = 0x19ce24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_19ce28:
    // 0x19ce28: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19ce28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_19ce2c:
    // 0x19ce2c: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x19ce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_19ce30:
    // 0x19ce30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ce30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19ce34:
    // 0x19ce34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19ce34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19ce38:
    // 0x19ce38: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x19ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_19ce3c:
    // 0x19ce3c: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x19ce3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_19ce40:
    // 0x19ce40: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x19ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_19ce44:
    // 0x19ce44: 0x40f809  jalr        $v0
label_19ce48:
    if (ctx->pc == 0x19CE48u) {
        ctx->pc = 0x19CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE44u;
        // 0x19ce48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE4Cu;
        goto label_19ce4c;
    }
    ctx->pc = 0x19CE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19CE4Cu);
        ctx->pc = 0x19CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE44u;
        // 0x19ce48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CE44u, 0x19CE4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CE4Cu;
label_19ce4c:
    // 0x19ce4c: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x19ce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ce50:
    // 0x19ce50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19ce50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ce54:
    // 0x19ce54: 0xc6020058  lwc1        $f2, 0x58($s0)
    ctx->pc = 0x19ce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19ce58:
    // 0x19ce58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19ce58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19ce5c:
    // 0x19ce5c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x19ce5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ce60:
    // 0x19ce60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19ce60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19ce64:
    // 0x19ce64: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x19ce64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19ce68:
    // 0x19ce68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19ce68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ce6c:
    // 0x19ce6c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x19ce6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19ce70:
    // 0x19ce70: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19ce70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19ce74:
    // 0x19ce74: 0xc066152  jal         func_198548
label_19ce78:
    if (ctx->pc == 0x19CE78u) {
        ctx->pc = 0x19CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE74u;
        // 0x19ce78: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE7Cu;
        goto label_19ce7c;
    }
    ctx->pc = 0x19CE74u;
    SET_GPR_U32(ctx, 31, 0x19CE7Cu);
    ctx->pc = 0x19CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CE74u;
    // 0x19ce78: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x198548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198548u, 0x19CE74u, 0x19CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE7Cu;
label_19ce7c:
    // 0x19ce7c: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x19ce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ce80:
    // 0x19ce80: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x19ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19ce84:
    // 0x19ce84: 0xc6020058  lwc1        $f2, 0x58($s0)
    ctx->pc = 0x19ce84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19ce88:
    // 0x19ce88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ce8c:
    // 0x19ce8c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x19ce8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ce90:
    // 0x19ce90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19ce90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19ce94:
    // 0x19ce94: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x19ce94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_19ce98:
    // 0x19ce98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19ce98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ce9c:
    // 0x19ce9c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x19ce9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_19cea0:
    // 0x19cea0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19cea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_19cea4:
    // 0x19cea4: 0xc066152  jal         func_198548
label_19cea8:
    if (ctx->pc == 0x19CEA8u) {
        ctx->pc = 0x19CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEA4u;
        // 0x19cea8: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEACu;
        goto label_19ceac;
    }
    ctx->pc = 0x19CEA4u;
    SET_GPR_U32(ctx, 31, 0x19CEACu);
    ctx->pc = 0x19CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CEA4u;
    // 0x19cea8: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x198548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198548u, 0x19CEA4u, 0x19CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEACu;
label_19ceac:
    // 0x19ceac: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x19ceacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ceb0:
    // 0x19ceb0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x19ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19ceb4:
    // 0x19ceb4: 0xc602005c  lwc1        $f2, 0x5C($s0)
    ctx->pc = 0x19ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19ceb8:
    // 0x19ceb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ceb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19cebc:
    // 0x19cebc: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x19cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19cec0:
    // 0x19cec0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19cec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19cec4:
    // 0x19cec4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x19cec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19cec8:
    // 0x19cec8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19cec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19cecc:
    // 0x19cecc: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x19ceccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_19ced0:
    // 0x19ced0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x19ced0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_19ced4:
    // 0x19ced4: 0xc066152  jal         func_198548
label_19ced8:
    if (ctx->pc == 0x19CED8u) {
        ctx->pc = 0x19CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CED4u;
        // 0x19ced8: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEDCu;
        goto label_19cedc;
    }
    ctx->pc = 0x19CED4u;
    SET_GPR_U32(ctx, 31, 0x19CEDCu);
    ctx->pc = 0x19CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CED4u;
    // 0x19ced8: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x198548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198548u, 0x19CED4u, 0x19CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEDCu;
label_19cedc:
    // 0x19cedc: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x19cedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cee0:
    // 0x19cee0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19cee4:
    // 0x19cee4: 0xc602005c  lwc1        $f2, 0x5C($s0)
    ctx->pc = 0x19cee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19cee8:
    // 0x19cee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ceec:
    // 0x19ceec: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x19ceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19cef0:
    // 0x19cef0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19cef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19cef4:
    // 0x19cef4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x19cef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19cef8:
    // 0x19cef8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19cef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19cefc:
    // 0x19cefc: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x19cefcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_19cf00:
    // 0x19cf00: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x19cf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_19cf04:
    // 0x19cf04: 0xc066152  jal         func_198548
label_19cf08:
    if (ctx->pc == 0x19CF08u) {
        ctx->pc = 0x19CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF04u;
        // 0x19cf08: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF0Cu;
        goto label_19cf0c;
    }
    ctx->pc = 0x19CF04u;
    SET_GPR_U32(ctx, 31, 0x19CF0Cu);
    ctx->pc = 0x19CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF04u;
    // 0x19cf08: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x198548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198548u, 0x19CF04u, 0x19CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF0Cu;
label_19cf0c:
    // 0x19cf0c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x19cf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cf10:
    // 0x19cf10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cf14:
    // 0x19cf14: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x19cf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19cf18:
    // 0x19cf18: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x19cf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19cf1c:
    // 0x19cf1c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x19cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19cf20:
    // 0x19cf20: 0xe6010060  swc1        $f1, 0x60($s0)
    ctx->pc = 0x19cf20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_19cf24:
    // 0x19cf24: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x19cf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
label_19cf28:
    // 0x19cf28: 0xe6020064  swc1        $f2, 0x64($s0)
    ctx->pc = 0x19cf28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_19cf2c:
    // 0x19cf2c: 0xe6030068  swc1        $f3, 0x68($s0)
    ctx->pc = 0x19cf2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_19cf30:
    // 0x19cf30: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19cf30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19cf34:
    // 0x19cf34: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19cf34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19cf38:
    // 0x19cf38: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19cf38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19cf3c:
    // 0x19cf3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19cf3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19cf40:
    // 0x19cf40: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19cf44:
    // 0x19cf44: 0x3e00008  jr          $ra
label_19cf48:
    if (ctx->pc == 0x19CF48u) {
        ctx->pc = 0x19CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF44u;
        // 0x19cf48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF4Cu;
        goto label_19cf4c;
    }
    ctx->pc = 0x19CF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF44u;
        // 0x19cf48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CF4Cu;
label_19cf4c:
    // 0x19cf4c: 0x0  nop
    ctx->pc = 0x19cf4cu;
    // NOP
    ctx->pc = 0x19cf50u;
}
