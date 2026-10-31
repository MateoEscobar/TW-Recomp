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

// Function: sub_002CE138
// Address: 0x2ce138 - 0x2ce260
void sub_002CE138_0x2ce138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE138_0x2ce138");
#endif

    switch (ctx->pc) {
        case 0x2ce138u: goto label_2ce138;
        case 0x2ce13cu: goto label_2ce13c;
        case 0x2ce140u: goto label_2ce140;
        case 0x2ce144u: goto label_2ce144;
        case 0x2ce148u: goto label_2ce148;
        case 0x2ce14cu: goto label_2ce14c;
        case 0x2ce150u: goto label_2ce150;
        case 0x2ce154u: goto label_2ce154;
        case 0x2ce158u: goto label_2ce158;
        case 0x2ce15cu: goto label_2ce15c;
        case 0x2ce160u: goto label_2ce160;
        case 0x2ce164u: goto label_2ce164;
        case 0x2ce168u: goto label_2ce168;
        case 0x2ce16cu: goto label_2ce16c;
        case 0x2ce170u: goto label_2ce170;
        case 0x2ce174u: goto label_2ce174;
        case 0x2ce178u: goto label_2ce178;
        case 0x2ce17cu: goto label_2ce17c;
        case 0x2ce180u: goto label_2ce180;
        case 0x2ce184u: goto label_2ce184;
        case 0x2ce188u: goto label_2ce188;
        case 0x2ce18cu: goto label_2ce18c;
        case 0x2ce190u: goto label_2ce190;
        case 0x2ce194u: goto label_2ce194;
        case 0x2ce198u: goto label_2ce198;
        case 0x2ce19cu: goto label_2ce19c;
        case 0x2ce1a0u: goto label_2ce1a0;
        case 0x2ce1a4u: goto label_2ce1a4;
        case 0x2ce1a8u: goto label_2ce1a8;
        case 0x2ce1acu: goto label_2ce1ac;
        case 0x2ce1b0u: goto label_2ce1b0;
        case 0x2ce1b4u: goto label_2ce1b4;
        case 0x2ce1b8u: goto label_2ce1b8;
        case 0x2ce1bcu: goto label_2ce1bc;
        case 0x2ce1c0u: goto label_2ce1c0;
        case 0x2ce1c4u: goto label_2ce1c4;
        case 0x2ce1c8u: goto label_2ce1c8;
        case 0x2ce1ccu: goto label_2ce1cc;
        case 0x2ce1d0u: goto label_2ce1d0;
        case 0x2ce1d4u: goto label_2ce1d4;
        case 0x2ce1d8u: goto label_2ce1d8;
        case 0x2ce1dcu: goto label_2ce1dc;
        case 0x2ce1e0u: goto label_2ce1e0;
        case 0x2ce1e4u: goto label_2ce1e4;
        case 0x2ce1e8u: goto label_2ce1e8;
        case 0x2ce1ecu: goto label_2ce1ec;
        case 0x2ce1f0u: goto label_2ce1f0;
        case 0x2ce1f4u: goto label_2ce1f4;
        case 0x2ce1f8u: goto label_2ce1f8;
        case 0x2ce1fcu: goto label_2ce1fc;
        case 0x2ce200u: goto label_2ce200;
        case 0x2ce204u: goto label_2ce204;
        case 0x2ce208u: goto label_2ce208;
        case 0x2ce20cu: goto label_2ce20c;
        case 0x2ce210u: goto label_2ce210;
        case 0x2ce214u: goto label_2ce214;
        case 0x2ce218u: goto label_2ce218;
        case 0x2ce21cu: goto label_2ce21c;
        case 0x2ce220u: goto label_2ce220;
        case 0x2ce224u: goto label_2ce224;
        case 0x2ce228u: goto label_2ce228;
        case 0x2ce22cu: goto label_2ce22c;
        case 0x2ce230u: goto label_2ce230;
        case 0x2ce234u: goto label_2ce234;
        case 0x2ce238u: goto label_2ce238;
        case 0x2ce23cu: goto label_2ce23c;
        case 0x2ce240u: goto label_2ce240;
        case 0x2ce244u: goto label_2ce244;
        case 0x2ce248u: goto label_2ce248;
        case 0x2ce24cu: goto label_2ce24c;
        case 0x2ce250u: goto label_2ce250;
        case 0x2ce254u: goto label_2ce254;
        case 0x2ce258u: goto label_2ce258;
        case 0x2ce25cu: goto label_2ce25c;
        default: break;
    }

    ctx->pc = 0x2ce138u;

label_2ce138:
    // 0x2ce138: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ce138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2ce13c:
    // 0x2ce13c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ce13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ce140:
    // 0x2ce140: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2ce140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2ce144:
    // 0x2ce144: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2ce144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2ce148:
    // 0x2ce148: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2ce148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2ce14c:
    // 0x2ce14c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ce150:
    // 0x2ce150: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2ce150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2ce154:
    // 0x2ce154: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ce154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce158:
    // 0x2ce158: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ce158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2ce15c:
    // 0x2ce15c: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2ce15cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2ce160:
    // 0x2ce160: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2ce160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2ce164:
    // 0x2ce164: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce168:
    // 0x2ce168: 0x8ca32c7c  lw          $v1, 0x2C7C($a1)
    ctx->pc = 0x2ce168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11388)));
label_2ce16c:
    // 0x2ce16c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ce16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ce170:
    // 0x2ce170: 0x8c640840  lw          $a0, 0x840($v1)
    ctx->pc = 0x2ce170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
label_2ce174:
    // 0x2ce174: 0x84460092  lh          $a2, 0x92($v0)
    ctx->pc = 0x2ce174u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2ce178:
    // 0x2ce178: 0x96050022  lhu         $a1, 0x22($s0)
    ctx->pc = 0x2ce178u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_2ce17c:
    // 0x2ce17c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2ce17cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2ce180:
    // 0x2ce180: 0xc0e68b0  jal         func_39A2C0
label_2ce184:
    if (ctx->pc == 0x2CE184u) {
        ctx->pc = 0x2CE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE180u;
        // 0x2ce184: 0xd23021  addu        $a2, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE188u;
        goto label_2ce188;
    }
    ctx->pc = 0x2CE180u;
    SET_GPR_U32(ctx, 31, 0x2CE188u);
    ctx->pc = 0x2CE184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE180u;
    // 0x2ce184: 0xd23021  addu        $a2, $a2, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2C0u, 0x2CE180u, 0x2CE188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE188u;
label_2ce188:
    // 0x2ce188: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2ce188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2ce18c:
    // 0x2ce18c: 0xc0e4060  jal         func_390180
label_2ce190:
    if (ctx->pc == 0x2CE190u) {
        ctx->pc = 0x2CE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE18Cu;
        // 0x2ce190: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE194u;
        goto label_2ce194;
    }
    ctx->pc = 0x2CE18Cu;
    SET_GPR_U32(ctx, 31, 0x2CE194u);
    ctx->pc = 0x2CE190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE18Cu;
    // 0x2ce190: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CE18Cu, 0x2CE194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE194u;
label_2ce194:
    // 0x2ce194: 0xc0e57ce  jal         func_395F38
label_2ce198:
    if (ctx->pc == 0x2CE198u) {
        ctx->pc = 0x2CE198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE194u;
        // 0x2ce198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE19Cu;
        goto label_2ce19c;
    }
    ctx->pc = 0x2CE194u;
    SET_GPR_U32(ctx, 31, 0x2CE19Cu);
    ctx->pc = 0x2CE198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE194u;
    // 0x2ce198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2CE194u, 0x2CE19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE19Cu;
label_2ce19c:
    // 0x2ce19c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce1a0:
    // 0x2ce1a0: 0x52200029  beql        $s1, $zero, . + 4 + (0x29 << 2)
label_2ce1a4:
    if (ctx->pc == 0x2CE1A4u) {
        ctx->pc = 0x2CE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1A0u;
        // 0x2ce1a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE1A8u;
        goto label_2ce1a8;
    }
    ctx->pc = 0x2CE1A0u;
    {
        const bool branch_taken_0x2ce1a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce1a0) {
            ctx->pc = 0x2CE1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE1A0u;
            // 0x2ce1a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE248u;
            goto label_2ce248;
        }
    }
    ctx->pc = 0x2CE1A8u;
label_2ce1a8:
    // 0x2ce1a8: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2ce1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ce1ac:
    // 0x2ce1ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ce1acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ce1b0:
    // 0x2ce1b0: 0x0  nop
    ctx->pc = 0x2ce1b0u;
    // NOP
label_2ce1b4:
    // 0x2ce1b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ce1b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce1b8:
    // 0x2ce1b8: 0x0  nop
    ctx->pc = 0x2ce1b8u;
    // NOP
label_2ce1bc:
    // 0x2ce1bc: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_2ce1c0:
    if (ctx->pc == 0x2CE1C0u) {
        ctx->pc = 0x2CE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1BCu;
        // 0x2ce1c0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE1C4u;
        goto label_2ce1c4;
    }
    ctx->pc = 0x2CE1BCu;
    {
        const bool branch_taken_0x2ce1bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1BCu;
        // 0x2ce1c0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1bc) {
            ctx->pc = 0x2CE224u;
            goto label_2ce224;
        }
    }
    ctx->pc = 0x2CE1C4u;
label_2ce1c4:
    // 0x2ce1c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ce1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ce1c8:
    // 0x2ce1c8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2ce1c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2ce1cc:
    // 0x2ce1cc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2ce1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2ce1d0:
    // 0x2ce1d0: 0x60f809  jalr        $v1
label_2ce1d4:
    if (ctx->pc == 0x2CE1D4u) {
        ctx->pc = 0x2CE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1D0u;
        // 0x2ce1d4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE1D8u;
        goto label_2ce1d8;
    }
    ctx->pc = 0x2CE1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CE1D8u);
        ctx->pc = 0x2CE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1D0u;
        // 0x2ce1d4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE1D0u, 0x2CE1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE1D8u;
label_2ce1d8:
    // 0x2ce1d8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2ce1d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ce1dc:
    // 0x2ce1dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ce1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce1e0:
    // 0x2ce1e0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2ce1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2ce1e4:
    // 0x2ce1e4: 0xc05959e  jal         func_165678
label_2ce1e8:
    if (ctx->pc == 0x2CE1E8u) {
        ctx->pc = 0x2CE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1E4u;
        // 0x2ce1e8: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE1ECu;
        goto label_2ce1ec;
    }
    ctx->pc = 0x2CE1E4u;
    SET_GPR_U32(ctx, 31, 0x2CE1ECu);
    ctx->pc = 0x2CE1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE1E4u;
    // 0x2ce1e8: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2CE1E4u, 0x2CE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE1ECu;
label_2ce1ec:
    // 0x2ce1ec: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x2ce1ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2ce1f0:
    // 0x2ce1f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ce1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ce1f4:
    // 0x2ce1f4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ce1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ce1f8:
    // 0x2ce1f8: 0xc0cdb38  jal         func_336CE0
label_2ce1fc:
    if (ctx->pc == 0x2CE1FCu) {
        ctx->pc = 0x2CE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1F8u;
        // 0x2ce1fc: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE200u;
        goto label_2ce200;
    }
    ctx->pc = 0x2CE1F8u;
    SET_GPR_U32(ctx, 31, 0x2CE200u);
    ctx->pc = 0x2CE1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE1F8u;
    // 0x2ce1fc: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CE1F8u, 0x2CE200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE200u;
label_2ce200:
    // 0x2ce200: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2ce200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ce204:
    // 0x2ce204: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ce204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2ce208:
    // 0x2ce208: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ce208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce20c:
    // 0x2ce20c: 0x0  nop
    ctx->pc = 0x2ce20cu;
    // NOP
label_2ce210:
    // 0x2ce210: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2ce214:
    if (ctx->pc == 0x2CE214u) {
        ctx->pc = 0x2CE214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE210u;
        // 0x2ce214: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE218u;
        goto label_2ce218;
    }
    ctx->pc = 0x2CE210u;
    {
        const bool branch_taken_0x2ce210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE210u;
        // 0x2ce214: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce210) {
            ctx->pc = 0x2CE224u;
            goto label_2ce224;
        }
    }
    ctx->pc = 0x2CE218u;
label_2ce218:
    // 0x2ce218: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2ce218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ce21c:
    // 0x2ce21c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2ce220:
    if (ctx->pc == 0x2CE220u) {
        ctx->pc = 0x2CE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE21Cu;
        // 0x2ce220: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE224u;
        goto label_2ce224;
    }
    ctx->pc = 0x2CE21Cu;
    {
        const bool branch_taken_0x2ce21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE21Cu;
        // 0x2ce220: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce21c) {
            ctx->pc = 0x2CE244u;
            goto label_2ce244;
        }
    }
    ctx->pc = 0x2CE224u;
label_2ce224:
    // 0x2ce224: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce228:
    // 0x2ce228: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ce228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2ce22c:
    // 0x2ce22c: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2ce22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2ce230:
    // 0x2ce230: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x2ce230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_2ce234:
    // 0x2ce234: 0xae2300ec  sw          $v1, 0xEC($s1)
    ctx->pc = 0x2ce234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 3));
label_2ce238:
    // 0x2ce238: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2ce238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2ce23c:
    // 0x2ce23c: 0x24421f40  addiu       $v0, $v0, 0x1F40
    ctx->pc = 0x2ce23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8000));
label_2ce240:
    // 0x2ce240: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x2ce240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_2ce244:
    // 0x2ce244: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2ce244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ce248:
    // 0x2ce248: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2ce248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ce24c:
    // 0x2ce24c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ce24cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ce250:
    // 0x2ce250: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ce250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ce254:
    // 0x2ce254: 0x3e00008  jr          $ra
label_2ce258:
    if (ctx->pc == 0x2CE258u) {
        ctx->pc = 0x2CE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE254u;
        // 0x2ce258: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE25Cu;
        goto label_2ce25c;
    }
    ctx->pc = 0x2CE254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE254u;
        // 0x2ce258: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE25Cu;
label_2ce25c:
    // 0x2ce25c: 0x0  nop
    ctx->pc = 0x2ce25cu;
    // NOP
    ctx->pc = 0x2ce260u;
}
