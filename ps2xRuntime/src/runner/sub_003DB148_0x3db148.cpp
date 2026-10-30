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

// Function: sub_003DB148
// Address: 0x3db148 - 0x3db208
void sub_003DB148_0x3db148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB148_0x3db148");
#endif

    switch (ctx->pc) {
        case 0x3db148u: goto label_3db148;
        case 0x3db14cu: goto label_3db14c;
        case 0x3db150u: goto label_3db150;
        case 0x3db154u: goto label_3db154;
        case 0x3db158u: goto label_3db158;
        case 0x3db15cu: goto label_3db15c;
        case 0x3db160u: goto label_3db160;
        case 0x3db164u: goto label_3db164;
        case 0x3db168u: goto label_3db168;
        case 0x3db16cu: goto label_3db16c;
        case 0x3db170u: goto label_3db170;
        case 0x3db174u: goto label_3db174;
        case 0x3db178u: goto label_3db178;
        case 0x3db17cu: goto label_3db17c;
        case 0x3db180u: goto label_3db180;
        case 0x3db184u: goto label_3db184;
        case 0x3db188u: goto label_3db188;
        case 0x3db18cu: goto label_3db18c;
        case 0x3db190u: goto label_3db190;
        case 0x3db194u: goto label_3db194;
        case 0x3db198u: goto label_3db198;
        case 0x3db19cu: goto label_3db19c;
        case 0x3db1a0u: goto label_3db1a0;
        case 0x3db1a4u: goto label_3db1a4;
        case 0x3db1a8u: goto label_3db1a8;
        case 0x3db1acu: goto label_3db1ac;
        case 0x3db1b0u: goto label_3db1b0;
        case 0x3db1b4u: goto label_3db1b4;
        case 0x3db1b8u: goto label_3db1b8;
        case 0x3db1bcu: goto label_3db1bc;
        case 0x3db1c0u: goto label_3db1c0;
        case 0x3db1c4u: goto label_3db1c4;
        case 0x3db1c8u: goto label_3db1c8;
        case 0x3db1ccu: goto label_3db1cc;
        case 0x3db1d0u: goto label_3db1d0;
        case 0x3db1d4u: goto label_3db1d4;
        case 0x3db1d8u: goto label_3db1d8;
        case 0x3db1dcu: goto label_3db1dc;
        case 0x3db1e0u: goto label_3db1e0;
        case 0x3db1e4u: goto label_3db1e4;
        case 0x3db1e8u: goto label_3db1e8;
        case 0x3db1ecu: goto label_3db1ec;
        case 0x3db1f0u: goto label_3db1f0;
        case 0x3db1f4u: goto label_3db1f4;
        case 0x3db1f8u: goto label_3db1f8;
        case 0x3db1fcu: goto label_3db1fc;
        case 0x3db200u: goto label_3db200;
        case 0x3db204u: goto label_3db204;
        default: break;
    }

    ctx->pc = 0x3db148u;

label_3db148:
    // 0x3db148: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3db148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3db14c:
    // 0x3db14c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3db14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3db150:
    // 0x3db150: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3db150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3db154:
    // 0x3db154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3db154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3db158:
    // 0x3db158: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3db158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3db15c:
    // 0x3db15c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3db15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3db160:
    // 0x3db160: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3db160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3db164:
    // 0x3db164: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3db164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3db168:
    // 0x3db168: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3db168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3db16c:
    // 0x3db16c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3db16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3db170:
    // 0x3db170: 0x40f809  jalr        $v0
label_3db174:
    if (ctx->pc == 0x3DB174u) {
        ctx->pc = 0x3DB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB170u;
        // 0x3db174: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB178u;
        goto label_3db178;
    }
    ctx->pc = 0x3DB170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DB178u);
        ctx->pc = 0x3DB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB170u;
        // 0x3db174: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB170u, 0x3DB178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DB178u;
label_3db178:
    // 0x3db178: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x3db178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_3db17c:
    // 0x3db17c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3db17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3db180:
    // 0x3db180: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3db180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3db184:
    // 0x3db184: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3db184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3db188:
    // 0x3db188: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3db188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3db18c:
    // 0x3db18c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3db18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3db190:
    // 0x3db190: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3db190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3db194:
    // 0x3db194: 0xc0e858c  jal         func_3A1630
label_3db198:
    if (ctx->pc == 0x3DB198u) {
        ctx->pc = 0x3DB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB194u;
        // 0x3db198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB19Cu;
        goto label_3db19c;
    }
    ctx->pc = 0x3DB194u;
    SET_GPR_U32(ctx, 31, 0x3DB19Cu);
    ctx->pc = 0x3DB198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB194u;
    // 0x3db198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DB194u, 0x3DB19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB19Cu;
label_3db19c:
    // 0x3db19c: 0xc0ea14c  jal         func_3A8530
label_3db1a0:
    if (ctx->pc == 0x3DB1A0u) {
        ctx->pc = 0x3DB1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB19Cu;
        // 0x3db1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB1A4u;
        goto label_3db1a4;
    }
    ctx->pc = 0x3DB19Cu;
    SET_GPR_U32(ctx, 31, 0x3DB1A4u);
    ctx->pc = 0x3DB1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB19Cu;
    // 0x3db1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DB19Cu, 0x3DB1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB1A4u;
label_3db1a4:
    // 0x3db1a4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3db1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3db1a8:
    // 0x3db1a8: 0xc0ea12a  jal         func_3A84A8
label_3db1ac:
    if (ctx->pc == 0x3DB1ACu) {
        ctx->pc = 0x3DB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB1A8u;
        // 0x3db1ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB1B0u;
        goto label_3db1b0;
    }
    ctx->pc = 0x3DB1A8u;
    SET_GPR_U32(ctx, 31, 0x3DB1B0u);
    ctx->pc = 0x3DB1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB1A8u;
    // 0x3db1ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DB1A8u, 0x3DB1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB1B0u;
label_3db1b0:
    // 0x3db1b0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3db1b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3db1b4:
    // 0x3db1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3db1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db1b8:
    // 0x3db1b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3db1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3db1bc:
    // 0x3db1bc: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3db1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3db1c0:
    // 0x3db1c0: 0xc0e858c  jal         func_3A1630
label_3db1c4:
    if (ctx->pc == 0x3DB1C4u) {
        ctx->pc = 0x3DB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB1C0u;
        // 0x3db1c4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB1C8u;
        goto label_3db1c8;
    }
    ctx->pc = 0x3DB1C0u;
    SET_GPR_U32(ctx, 31, 0x3DB1C8u);
    ctx->pc = 0x3DB1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB1C0u;
    // 0x3db1c4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DB1C0u, 0x3DB1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB1C8u;
label_3db1c8:
    // 0x3db1c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3db1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3db1cc:
    // 0x3db1cc: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3db1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_3db1d0:
    // 0x3db1d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3db1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3db1d4:
    // 0x3db1d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3db1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3db1d8:
    // 0x3db1d8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3db1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3db1dc:
    // 0x3db1dc: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3db1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3db1e0:
    // 0x3db1e0: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3db1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3db1e4:
    // 0x3db1e4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3db1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3db1e8:
    // 0x3db1e8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3db1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3db1ec:
    // 0x3db1ec: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3db1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3db1f0:
    // 0x3db1f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3db1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3db1f4:
    // 0x3db1f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3db1f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3db1f8:
    // 0x3db1f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3db1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3db1fc:
    // 0x3db1fc: 0x3e00008  jr          $ra
label_3db200:
    if (ctx->pc == 0x3DB200u) {
        ctx->pc = 0x3DB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB1FCu;
        // 0x3db200: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB204u;
        goto label_3db204;
    }
    ctx->pc = 0x3DB1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB1FCu;
        // 0x3db200: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB204u;
label_3db204:
    // 0x3db204: 0x0  nop
    ctx->pc = 0x3db204u;
    // NOP
    ctx->pc = 0x3db208u;
}
