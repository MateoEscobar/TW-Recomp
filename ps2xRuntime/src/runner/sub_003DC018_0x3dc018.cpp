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

// Function: sub_003DC018
// Address: 0x3dc018 - 0x3dc168
void sub_003DC018_0x3dc018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC018_0x3dc018");
#endif

    switch (ctx->pc) {
        case 0x3dc018u: goto label_3dc018;
        case 0x3dc01cu: goto label_3dc01c;
        case 0x3dc020u: goto label_3dc020;
        case 0x3dc024u: goto label_3dc024;
        case 0x3dc028u: goto label_3dc028;
        case 0x3dc02cu: goto label_3dc02c;
        case 0x3dc030u: goto label_3dc030;
        case 0x3dc034u: goto label_3dc034;
        case 0x3dc038u: goto label_3dc038;
        case 0x3dc03cu: goto label_3dc03c;
        case 0x3dc040u: goto label_3dc040;
        case 0x3dc044u: goto label_3dc044;
        case 0x3dc048u: goto label_3dc048;
        case 0x3dc04cu: goto label_3dc04c;
        case 0x3dc050u: goto label_3dc050;
        case 0x3dc054u: goto label_3dc054;
        case 0x3dc058u: goto label_3dc058;
        case 0x3dc05cu: goto label_3dc05c;
        case 0x3dc060u: goto label_3dc060;
        case 0x3dc064u: goto label_3dc064;
        case 0x3dc068u: goto label_3dc068;
        case 0x3dc06cu: goto label_3dc06c;
        case 0x3dc070u: goto label_3dc070;
        case 0x3dc074u: goto label_3dc074;
        case 0x3dc078u: goto label_3dc078;
        case 0x3dc07cu: goto label_3dc07c;
        case 0x3dc080u: goto label_3dc080;
        case 0x3dc084u: goto label_3dc084;
        case 0x3dc088u: goto label_3dc088;
        case 0x3dc08cu: goto label_3dc08c;
        case 0x3dc090u: goto label_3dc090;
        case 0x3dc094u: goto label_3dc094;
        case 0x3dc098u: goto label_3dc098;
        case 0x3dc09cu: goto label_3dc09c;
        case 0x3dc0a0u: goto label_3dc0a0;
        case 0x3dc0a4u: goto label_3dc0a4;
        case 0x3dc0a8u: goto label_3dc0a8;
        case 0x3dc0acu: goto label_3dc0ac;
        case 0x3dc0b0u: goto label_3dc0b0;
        case 0x3dc0b4u: goto label_3dc0b4;
        case 0x3dc0b8u: goto label_3dc0b8;
        case 0x3dc0bcu: goto label_3dc0bc;
        case 0x3dc0c0u: goto label_3dc0c0;
        case 0x3dc0c4u: goto label_3dc0c4;
        case 0x3dc0c8u: goto label_3dc0c8;
        case 0x3dc0ccu: goto label_3dc0cc;
        case 0x3dc0d0u: goto label_3dc0d0;
        case 0x3dc0d4u: goto label_3dc0d4;
        case 0x3dc0d8u: goto label_3dc0d8;
        case 0x3dc0dcu: goto label_3dc0dc;
        case 0x3dc0e0u: goto label_3dc0e0;
        case 0x3dc0e4u: goto label_3dc0e4;
        case 0x3dc0e8u: goto label_3dc0e8;
        case 0x3dc0ecu: goto label_3dc0ec;
        case 0x3dc0f0u: goto label_3dc0f0;
        case 0x3dc0f4u: goto label_3dc0f4;
        case 0x3dc0f8u: goto label_3dc0f8;
        case 0x3dc0fcu: goto label_3dc0fc;
        case 0x3dc100u: goto label_3dc100;
        case 0x3dc104u: goto label_3dc104;
        case 0x3dc108u: goto label_3dc108;
        case 0x3dc10cu: goto label_3dc10c;
        case 0x3dc110u: goto label_3dc110;
        case 0x3dc114u: goto label_3dc114;
        case 0x3dc118u: goto label_3dc118;
        case 0x3dc11cu: goto label_3dc11c;
        case 0x3dc120u: goto label_3dc120;
        case 0x3dc124u: goto label_3dc124;
        case 0x3dc128u: goto label_3dc128;
        case 0x3dc12cu: goto label_3dc12c;
        case 0x3dc130u: goto label_3dc130;
        case 0x3dc134u: goto label_3dc134;
        case 0x3dc138u: goto label_3dc138;
        case 0x3dc13cu: goto label_3dc13c;
        case 0x3dc140u: goto label_3dc140;
        case 0x3dc144u: goto label_3dc144;
        case 0x3dc148u: goto label_3dc148;
        case 0x3dc14cu: goto label_3dc14c;
        case 0x3dc150u: goto label_3dc150;
        case 0x3dc154u: goto label_3dc154;
        case 0x3dc158u: goto label_3dc158;
        case 0x3dc15cu: goto label_3dc15c;
        case 0x3dc160u: goto label_3dc160;
        case 0x3dc164u: goto label_3dc164;
        default: break;
    }

    ctx->pc = 0x3dc018u;

label_3dc018:
    // 0x3dc018: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3dc018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3dc01c:
    // 0x3dc01c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3dc01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3dc020:
    // 0x3dc020: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3dc020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3dc024:
    // 0x3dc024: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dc024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dc028:
    // 0x3dc028: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3dc028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3dc02c:
    // 0x3dc02c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dc02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dc030:
    // 0x3dc030: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3dc030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3dc034:
    // 0x3dc034: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3dc034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3dc038:
    // 0x3dc038: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3dc038u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3dc03c:
    // 0x3dc03c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dc03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dc040:
    // 0x3dc040: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dc040u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dc044:
    // 0x3dc044: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dc044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dc048:
    // 0x3dc048: 0x40f809  jalr        $v0
label_3dc04c:
    if (ctx->pc == 0x3DC04Cu) {
        ctx->pc = 0x3DC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC048u;
        // 0x3dc04c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC050u;
        goto label_3dc050;
    }
    ctx->pc = 0x3DC048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DC050u);
        ctx->pc = 0x3DC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC048u;
        // 0x3dc04c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC048u, 0x3DC050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DC050u;
label_3dc050:
    // 0x3dc050: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dc050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc054:
    // 0x3dc054: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dc054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dc058:
    // 0x3dc058: 0xc0e858c  jal         func_3A1630
label_3dc05c:
    if (ctx->pc == 0x3DC05Cu) {
        ctx->pc = 0x3DC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC058u;
        // 0x3dc05c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC060u;
        goto label_3dc060;
    }
    ctx->pc = 0x3DC058u;
    SET_GPR_U32(ctx, 31, 0x3DC060u);
    ctx->pc = 0x3DC05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC058u;
    // 0x3dc05c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DC058u, 0x3DC060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC060u;
label_3dc060:
    // 0x3dc060: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3dc060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3dc064:
    // 0x3dc064: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dc064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dc068:
    // 0x3dc068: 0x3c022005  lui         $v0, 0x2005
    ctx->pc = 0x3dc068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8197 << 16));
label_3dc06c:
    // 0x3dc06c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3dc06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3dc070:
    // 0x3dc070: 0x34420500  ori         $v0, $v0, 0x500
    ctx->pc = 0x3dc070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
label_3dc074:
    // 0x3dc074: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3dc074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3dc078:
    // 0x3dc078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc07c:
    // 0x3dc07c: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x3dc07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_3dc080:
    // 0x3dc080: 0xc0ea146  jal         func_3A8518
label_3dc084:
    if (ctx->pc == 0x3DC084u) {
        ctx->pc = 0x3DC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC080u;
        // 0x3dc084: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC088u;
        goto label_3dc088;
    }
    ctx->pc = 0x3DC080u;
    SET_GPR_U32(ctx, 31, 0x3DC088u);
    ctx->pc = 0x3DC084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC080u;
    // 0x3dc084: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DC080u, 0x3DC088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC088u;
label_3dc088:
    // 0x3dc088: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3dc088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc08c:
    // 0x3dc08c: 0xc0ea146  jal         func_3A8518
label_3dc090:
    if (ctx->pc == 0x3DC090u) {
        ctx->pc = 0x3DC090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC08Cu;
        // 0x3dc090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC094u;
        goto label_3dc094;
    }
    ctx->pc = 0x3DC08Cu;
    SET_GPR_U32(ctx, 31, 0x3DC094u);
    ctx->pc = 0x3DC090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC08Cu;
    // 0x3dc090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DC08Cu, 0x3DC094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC094u;
label_3dc094:
    // 0x3dc094: 0xc0ea13a  jal         func_3A84E8
label_3dc098:
    if (ctx->pc == 0x3DC098u) {
        ctx->pc = 0x3DC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC094u;
        // 0x3dc098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC09Cu;
        goto label_3dc09c;
    }
    ctx->pc = 0x3DC094u;
    SET_GPR_U32(ctx, 31, 0x3DC09Cu);
    ctx->pc = 0x3DC098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC094u;
    // 0x3dc098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3DC094u, 0x3DC09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC09Cu;
label_3dc09c:
    // 0x3dc09c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3dc09cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3dc0a0:
    // 0x3dc0a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dc0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dc0a4:
    // 0x3dc0a4: 0xc0ea12a  jal         func_3A84A8
label_3dc0a8:
    if (ctx->pc == 0x3DC0A8u) {
        ctx->pc = 0x3DC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC0A4u;
        // 0x3dc0a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC0ACu;
        goto label_3dc0ac;
    }
    ctx->pc = 0x3DC0A4u;
    SET_GPR_U32(ctx, 31, 0x3DC0ACu);
    ctx->pc = 0x3DC0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC0A4u;
    // 0x3dc0a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DC0A4u, 0x3DC0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC0ACu;
label_3dc0ac:
    // 0x3dc0ac: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dc0acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dc0b0:
    // 0x3dc0b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dc0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dc0b4:
    // 0x3dc0b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dc0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc0b8:
    // 0x3dc0b8: 0xc0ea12a  jal         func_3A84A8
label_3dc0bc:
    if (ctx->pc == 0x3DC0BCu) {
        ctx->pc = 0x3DC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC0B8u;
        // 0x3dc0bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC0C0u;
        goto label_3dc0c0;
    }
    ctx->pc = 0x3DC0B8u;
    SET_GPR_U32(ctx, 31, 0x3DC0C0u);
    ctx->pc = 0x3DC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC0B8u;
    // 0x3dc0bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DC0B8u, 0x3DC0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC0C0u;
label_3dc0c0:
    // 0x3dc0c0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dc0c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dc0c4:
    // 0x3dc0c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3dc0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3dc0c8:
    // 0x3dc0c8: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x3dc0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_3dc0cc:
    // 0x3dc0cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dc0ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dc0d0:
    // 0x3dc0d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3dc0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3dc0d4:
    // 0x3dc0d4: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3dc0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3dc0d8:
    // 0x3dc0d8: 0xc136b24  jal         func_4DAC90
label_3dc0dc:
    if (ctx->pc == 0x3DC0DCu) {
        ctx->pc = 0x3DC0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC0D8u;
        // 0x3dc0dc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC0E0u;
        goto label_3dc0e0;
    }
    ctx->pc = 0x3DC0D8u;
    SET_GPR_U32(ctx, 31, 0x3DC0E0u);
    ctx->pc = 0x3DC0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC0D8u;
    // 0x3dc0dc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DC0D8u, 0x3DC0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC0E0u;
label_3dc0e0:
    // 0x3dc0e0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3dc0e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dc0e4:
    // 0x3dc0e4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3dc0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3dc0e8:
    // 0x3dc0e8: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3dc0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3dc0ec:
    // 0x3dc0ec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3dc0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3dc0f0:
    // 0x3dc0f0: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x3dc0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
label_3dc0f4:
    // 0x3dc0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc0f8:
    // 0x3dc0f8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3dc0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3dc0fc:
    // 0x3dc0fc: 0xe6540000  swc1        $f20, 0x0($s2)
    ctx->pc = 0x3dc0fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_3dc100:
    // 0x3dc100: 0xc0cd4ee  jal         func_3353B8
label_3dc104:
    if (ctx->pc == 0x3DC104u) {
        ctx->pc = 0x3DC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC100u;
        // 0x3dc104: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC108u;
        goto label_3dc108;
    }
    ctx->pc = 0x3DC100u;
    SET_GPR_U32(ctx, 31, 0x3DC108u);
    ctx->pc = 0x3DC104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC100u;
    // 0x3dc104: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DC100u, 0x3DC108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC108u;
label_3dc108:
    // 0x3dc108: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x3dc108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
label_3dc10c:
    // 0x3dc10c: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x3dc10cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
label_3dc110:
    // 0x3dc110: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3dc110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3dc114:
    // 0x3dc114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc118:
    // 0x3dc118: 0xae3300c4  sw          $s3, 0xC4($s1)
    ctx->pc = 0x3dc118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 19));
label_3dc11c:
    // 0x3dc11c: 0xc0cd4ee  jal         func_3353B8
label_3dc120:
    if (ctx->pc == 0x3DC120u) {
        ctx->pc = 0x3DC120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC11Cu;
        // 0x3dc120: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC124u;
        goto label_3dc124;
    }
    ctx->pc = 0x3DC11Cu;
    SET_GPR_U32(ctx, 31, 0x3DC124u);
    ctx->pc = 0x3DC120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC11Cu;
    // 0x3dc120: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DC11Cu, 0x3DC124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC124u;
label_3dc124:
    // 0x3dc124: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3dc124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3dc128:
    // 0x3dc128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dc128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dc12c:
    // 0x3dc12c: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x3dc12cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
label_3dc130:
    // 0x3dc130: 0xc0e9404  jal         func_3A5010
label_3dc134:
    if (ctx->pc == 0x3DC134u) {
        ctx->pc = 0x3DC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC130u;
        // 0x3dc134: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC138u;
        goto label_3dc138;
    }
    ctx->pc = 0x3DC130u;
    SET_GPR_U32(ctx, 31, 0x3DC138u);
    ctx->pc = 0x3DC134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC130u;
    // 0x3dc134: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3DC130u, 0x3DC138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC138u;
label_3dc138:
    // 0x3dc138: 0x3c032005  lui         $v1, 0x2005
    ctx->pc = 0x3dc138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8197 << 16));
label_3dc13c:
    // 0x3dc13c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3dc13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3dc140:
    // 0x3dc140: 0x34630580  ori         $v1, $v1, 0x580
    ctx->pc = 0x3dc140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1408);
label_3dc144:
    // 0x3dc144: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3dc144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3dc148:
    // 0x3dc148: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3dc148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3dc14c:
    // 0x3dc14c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3dc14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3dc150:
    // 0x3dc150: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3dc150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dc154:
    // 0x3dc154: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3dc154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3dc158:
    // 0x3dc158: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3dc158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dc15c:
    // 0x3dc15c: 0x3e00008  jr          $ra
label_3dc160:
    if (ctx->pc == 0x3DC160u) {
        ctx->pc = 0x3DC160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC15Cu;
        // 0x3dc160: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC164u;
        goto label_3dc164;
    }
    ctx->pc = 0x3DC15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC15Cu;
        // 0x3dc160: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC164u;
label_3dc164:
    // 0x3dc164: 0x0  nop
    ctx->pc = 0x3dc164u;
    // NOP
    ctx->pc = 0x3dc168u;
}
