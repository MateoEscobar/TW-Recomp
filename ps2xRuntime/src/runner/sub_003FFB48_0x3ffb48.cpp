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

// Function: sub_003FFB48
// Address: 0x3ffb48 - 0x3ffe90
void sub_003FFB48_0x3ffb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FFB48_0x3ffb48");
#endif

    switch (ctx->pc) {
        case 0x3ffb48u: goto label_3ffb48;
        case 0x3ffb4cu: goto label_3ffb4c;
        case 0x3ffb50u: goto label_3ffb50;
        case 0x3ffb54u: goto label_3ffb54;
        case 0x3ffb58u: goto label_3ffb58;
        case 0x3ffb5cu: goto label_3ffb5c;
        case 0x3ffb60u: goto label_3ffb60;
        case 0x3ffb64u: goto label_3ffb64;
        case 0x3ffb68u: goto label_3ffb68;
        case 0x3ffb6cu: goto label_3ffb6c;
        case 0x3ffb70u: goto label_3ffb70;
        case 0x3ffb74u: goto label_3ffb74;
        case 0x3ffb78u: goto label_3ffb78;
        case 0x3ffb7cu: goto label_3ffb7c;
        case 0x3ffb80u: goto label_3ffb80;
        case 0x3ffb84u: goto label_3ffb84;
        case 0x3ffb88u: goto label_3ffb88;
        case 0x3ffb8cu: goto label_3ffb8c;
        case 0x3ffb90u: goto label_3ffb90;
        case 0x3ffb94u: goto label_3ffb94;
        case 0x3ffb98u: goto label_3ffb98;
        case 0x3ffb9cu: goto label_3ffb9c;
        case 0x3ffba0u: goto label_3ffba0;
        case 0x3ffba4u: goto label_3ffba4;
        case 0x3ffba8u: goto label_3ffba8;
        case 0x3ffbacu: goto label_3ffbac;
        case 0x3ffbb0u: goto label_3ffbb0;
        case 0x3ffbb4u: goto label_3ffbb4;
        case 0x3ffbb8u: goto label_3ffbb8;
        case 0x3ffbbcu: goto label_3ffbbc;
        case 0x3ffbc0u: goto label_3ffbc0;
        case 0x3ffbc4u: goto label_3ffbc4;
        case 0x3ffbc8u: goto label_3ffbc8;
        case 0x3ffbccu: goto label_3ffbcc;
        case 0x3ffbd0u: goto label_3ffbd0;
        case 0x3ffbd4u: goto label_3ffbd4;
        case 0x3ffbd8u: goto label_3ffbd8;
        case 0x3ffbdcu: goto label_3ffbdc;
        case 0x3ffbe0u: goto label_3ffbe0;
        case 0x3ffbe4u: goto label_3ffbe4;
        case 0x3ffbe8u: goto label_3ffbe8;
        case 0x3ffbecu: goto label_3ffbec;
        case 0x3ffbf0u: goto label_3ffbf0;
        case 0x3ffbf4u: goto label_3ffbf4;
        case 0x3ffbf8u: goto label_3ffbf8;
        case 0x3ffbfcu: goto label_3ffbfc;
        case 0x3ffc00u: goto label_3ffc00;
        case 0x3ffc04u: goto label_3ffc04;
        case 0x3ffc08u: goto label_3ffc08;
        case 0x3ffc0cu: goto label_3ffc0c;
        case 0x3ffc10u: goto label_3ffc10;
        case 0x3ffc14u: goto label_3ffc14;
        case 0x3ffc18u: goto label_3ffc18;
        case 0x3ffc1cu: goto label_3ffc1c;
        case 0x3ffc20u: goto label_3ffc20;
        case 0x3ffc24u: goto label_3ffc24;
        case 0x3ffc28u: goto label_3ffc28;
        case 0x3ffc2cu: goto label_3ffc2c;
        case 0x3ffc30u: goto label_3ffc30;
        case 0x3ffc34u: goto label_3ffc34;
        case 0x3ffc38u: goto label_3ffc38;
        case 0x3ffc3cu: goto label_3ffc3c;
        case 0x3ffc40u: goto label_3ffc40;
        case 0x3ffc44u: goto label_3ffc44;
        case 0x3ffc48u: goto label_3ffc48;
        case 0x3ffc4cu: goto label_3ffc4c;
        case 0x3ffc50u: goto label_3ffc50;
        case 0x3ffc54u: goto label_3ffc54;
        case 0x3ffc58u: goto label_3ffc58;
        case 0x3ffc5cu: goto label_3ffc5c;
        case 0x3ffc60u: goto label_3ffc60;
        case 0x3ffc64u: goto label_3ffc64;
        case 0x3ffc68u: goto label_3ffc68;
        case 0x3ffc6cu: goto label_3ffc6c;
        case 0x3ffc70u: goto label_3ffc70;
        case 0x3ffc74u: goto label_3ffc74;
        case 0x3ffc78u: goto label_3ffc78;
        case 0x3ffc7cu: goto label_3ffc7c;
        case 0x3ffc80u: goto label_3ffc80;
        case 0x3ffc84u: goto label_3ffc84;
        case 0x3ffc88u: goto label_3ffc88;
        case 0x3ffc8cu: goto label_3ffc8c;
        case 0x3ffc90u: goto label_3ffc90;
        case 0x3ffc94u: goto label_3ffc94;
        case 0x3ffc98u: goto label_3ffc98;
        case 0x3ffc9cu: goto label_3ffc9c;
        case 0x3ffca0u: goto label_3ffca0;
        case 0x3ffca4u: goto label_3ffca4;
        case 0x3ffca8u: goto label_3ffca8;
        case 0x3ffcacu: goto label_3ffcac;
        case 0x3ffcb0u: goto label_3ffcb0;
        case 0x3ffcb4u: goto label_3ffcb4;
        case 0x3ffcb8u: goto label_3ffcb8;
        case 0x3ffcbcu: goto label_3ffcbc;
        case 0x3ffcc0u: goto label_3ffcc0;
        case 0x3ffcc4u: goto label_3ffcc4;
        case 0x3ffcc8u: goto label_3ffcc8;
        case 0x3ffcccu: goto label_3ffccc;
        case 0x3ffcd0u: goto label_3ffcd0;
        case 0x3ffcd4u: goto label_3ffcd4;
        case 0x3ffcd8u: goto label_3ffcd8;
        case 0x3ffcdcu: goto label_3ffcdc;
        case 0x3ffce0u: goto label_3ffce0;
        case 0x3ffce4u: goto label_3ffce4;
        case 0x3ffce8u: goto label_3ffce8;
        case 0x3ffcecu: goto label_3ffcec;
        case 0x3ffcf0u: goto label_3ffcf0;
        case 0x3ffcf4u: goto label_3ffcf4;
        case 0x3ffcf8u: goto label_3ffcf8;
        case 0x3ffcfcu: goto label_3ffcfc;
        case 0x3ffd00u: goto label_3ffd00;
        case 0x3ffd04u: goto label_3ffd04;
        case 0x3ffd08u: goto label_3ffd08;
        case 0x3ffd0cu: goto label_3ffd0c;
        case 0x3ffd10u: goto label_3ffd10;
        case 0x3ffd14u: goto label_3ffd14;
        case 0x3ffd18u: goto label_3ffd18;
        case 0x3ffd1cu: goto label_3ffd1c;
        case 0x3ffd20u: goto label_3ffd20;
        case 0x3ffd24u: goto label_3ffd24;
        case 0x3ffd28u: goto label_3ffd28;
        case 0x3ffd2cu: goto label_3ffd2c;
        case 0x3ffd30u: goto label_3ffd30;
        case 0x3ffd34u: goto label_3ffd34;
        case 0x3ffd38u: goto label_3ffd38;
        case 0x3ffd3cu: goto label_3ffd3c;
        case 0x3ffd40u: goto label_3ffd40;
        case 0x3ffd44u: goto label_3ffd44;
        case 0x3ffd48u: goto label_3ffd48;
        case 0x3ffd4cu: goto label_3ffd4c;
        case 0x3ffd50u: goto label_3ffd50;
        case 0x3ffd54u: goto label_3ffd54;
        case 0x3ffd58u: goto label_3ffd58;
        case 0x3ffd5cu: goto label_3ffd5c;
        case 0x3ffd60u: goto label_3ffd60;
        case 0x3ffd64u: goto label_3ffd64;
        case 0x3ffd68u: goto label_3ffd68;
        case 0x3ffd6cu: goto label_3ffd6c;
        case 0x3ffd70u: goto label_3ffd70;
        case 0x3ffd74u: goto label_3ffd74;
        case 0x3ffd78u: goto label_3ffd78;
        case 0x3ffd7cu: goto label_3ffd7c;
        case 0x3ffd80u: goto label_3ffd80;
        case 0x3ffd84u: goto label_3ffd84;
        case 0x3ffd88u: goto label_3ffd88;
        case 0x3ffd8cu: goto label_3ffd8c;
        case 0x3ffd90u: goto label_3ffd90;
        case 0x3ffd94u: goto label_3ffd94;
        case 0x3ffd98u: goto label_3ffd98;
        case 0x3ffd9cu: goto label_3ffd9c;
        case 0x3ffda0u: goto label_3ffda0;
        case 0x3ffda4u: goto label_3ffda4;
        case 0x3ffda8u: goto label_3ffda8;
        case 0x3ffdacu: goto label_3ffdac;
        case 0x3ffdb0u: goto label_3ffdb0;
        case 0x3ffdb4u: goto label_3ffdb4;
        case 0x3ffdb8u: goto label_3ffdb8;
        case 0x3ffdbcu: goto label_3ffdbc;
        case 0x3ffdc0u: goto label_3ffdc0;
        case 0x3ffdc4u: goto label_3ffdc4;
        case 0x3ffdc8u: goto label_3ffdc8;
        case 0x3ffdccu: goto label_3ffdcc;
        case 0x3ffdd0u: goto label_3ffdd0;
        case 0x3ffdd4u: goto label_3ffdd4;
        case 0x3ffdd8u: goto label_3ffdd8;
        case 0x3ffddcu: goto label_3ffddc;
        case 0x3ffde0u: goto label_3ffde0;
        case 0x3ffde4u: goto label_3ffde4;
        case 0x3ffde8u: goto label_3ffde8;
        case 0x3ffdecu: goto label_3ffdec;
        case 0x3ffdf0u: goto label_3ffdf0;
        case 0x3ffdf4u: goto label_3ffdf4;
        case 0x3ffdf8u: goto label_3ffdf8;
        case 0x3ffdfcu: goto label_3ffdfc;
        case 0x3ffe00u: goto label_3ffe00;
        case 0x3ffe04u: goto label_3ffe04;
        case 0x3ffe08u: goto label_3ffe08;
        case 0x3ffe0cu: goto label_3ffe0c;
        case 0x3ffe10u: goto label_3ffe10;
        case 0x3ffe14u: goto label_3ffe14;
        case 0x3ffe18u: goto label_3ffe18;
        case 0x3ffe1cu: goto label_3ffe1c;
        case 0x3ffe20u: goto label_3ffe20;
        case 0x3ffe24u: goto label_3ffe24;
        case 0x3ffe28u: goto label_3ffe28;
        case 0x3ffe2cu: goto label_3ffe2c;
        case 0x3ffe30u: goto label_3ffe30;
        case 0x3ffe34u: goto label_3ffe34;
        case 0x3ffe38u: goto label_3ffe38;
        case 0x3ffe3cu: goto label_3ffe3c;
        case 0x3ffe40u: goto label_3ffe40;
        case 0x3ffe44u: goto label_3ffe44;
        case 0x3ffe48u: goto label_3ffe48;
        case 0x3ffe4cu: goto label_3ffe4c;
        case 0x3ffe50u: goto label_3ffe50;
        case 0x3ffe54u: goto label_3ffe54;
        case 0x3ffe58u: goto label_3ffe58;
        case 0x3ffe5cu: goto label_3ffe5c;
        case 0x3ffe60u: goto label_3ffe60;
        case 0x3ffe64u: goto label_3ffe64;
        case 0x3ffe68u: goto label_3ffe68;
        case 0x3ffe6cu: goto label_3ffe6c;
        case 0x3ffe70u: goto label_3ffe70;
        case 0x3ffe74u: goto label_3ffe74;
        case 0x3ffe78u: goto label_3ffe78;
        case 0x3ffe7cu: goto label_3ffe7c;
        case 0x3ffe80u: goto label_3ffe80;
        case 0x3ffe84u: goto label_3ffe84;
        case 0x3ffe88u: goto label_3ffe88;
        case 0x3ffe8cu: goto label_3ffe8c;
        default: break;
    }

    ctx->pc = 0x3ffb48u;

label_3ffb48:
    // 0x3ffb48: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3ffb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3ffb4c:
    // 0x3ffb4c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3ffb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3ffb50:
    // 0x3ffb50: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3ffb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3ffb54:
    // 0x3ffb54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3ffb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ffb58:
    // 0x3ffb58: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3ffb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_3ffb5c:
    // 0x3ffb5c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ffb5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ffb60:
    // 0x3ffb60: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3ffb60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ffb64:
    // 0x3ffb64: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3ffb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3ffb68:
    // 0x3ffb68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ffb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ffb6c:
    // 0x3ffb6c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3ffb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3ffb70:
    // 0x3ffb70: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3ffb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3ffb74:
    // 0x3ffb74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ffb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ffb78:
    // 0x3ffb78: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3ffb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3ffb7c:
    // 0x3ffb7c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3ffb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3ffb80:
    // 0x3ffb80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ffb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3ffb84:
    // 0x3ffb84: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x3ffb84u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_3ffb88:
    // 0x3ffb88: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x3ffb88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3ffb8c:
    // 0x3ffb8c: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x3ffb8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3ffb90:
    // 0x3ffb90: 0xc0ea12a  jal         func_3A84A8
label_3ffb94:
    if (ctx->pc == 0x3FFB94u) {
        ctx->pc = 0x3FFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFB90u;
        // 0x3ffb94: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFB98u;
        goto label_3ffb98;
    }
    ctx->pc = 0x3FFB90u;
    SET_GPR_U32(ctx, 31, 0x3FFB98u);
    ctx->pc = 0x3FFB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFB90u;
    // 0x3ffb94: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FFB90u, 0x3FFB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFB98u;
label_3ffb98:
    // 0x3ffb98: 0xc0ea14c  jal         func_3A8530
label_3ffb9c:
    if (ctx->pc == 0x3FFB9Cu) {
        ctx->pc = 0x3FFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFB98u;
        // 0x3ffb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFBA0u;
        goto label_3ffba0;
    }
    ctx->pc = 0x3FFB98u;
    SET_GPR_U32(ctx, 31, 0x3FFBA0u);
    ctx->pc = 0x3FFB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFB98u;
    // 0x3ffb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FFB98u, 0x3FFBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFBA0u;
label_3ffba0:
    // 0x3ffba0: 0xc08a61a  jal         func_229868
label_3ffba4:
    if (ctx->pc == 0x3FFBA4u) {
        ctx->pc = 0x3FFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFBA0u;
        // 0x3ffba4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFBA8u;
        goto label_3ffba8;
    }
    ctx->pc = 0x3FFBA0u;
    SET_GPR_U32(ctx, 31, 0x3FFBA8u);
    ctx->pc = 0x3FFBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFBA0u;
    // 0x3ffba4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3FFBA0u, 0x3FFBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFBA8u;
label_3ffba8:
    // 0x3ffba8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3ffba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ffbac:
    // 0x3ffbac: 0x8e9500c4  lw          $s5, 0xC4($s4)
    ctx->pc = 0x3ffbacu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_3ffbb0:
    // 0x3ffbb0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3ffbb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3ffbb4:
    // 0x3ffbb4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3ffbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3ffbb8:
    // 0x3ffbb8: 0x40f809  jalr        $v0
label_3ffbbc:
    if (ctx->pc == 0x3FFBBCu) {
        ctx->pc = 0x3FFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFBB8u;
        // 0x3ffbbc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFBC0u;
        goto label_3ffbc0;
    }
    ctx->pc = 0x3FFBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FFBC0u);
        ctx->pc = 0x3FFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFBB8u;
        // 0x3ffbbc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FFBB8u, 0x3FFBC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FFBC0u;
label_3ffbc0:
    // 0x3ffbc0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3ffbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3ffbc4:
    // 0x3ffbc4: 0x50400098  beql        $v0, $zero, . + 4 + (0x98 << 2)
label_3ffbc8:
    if (ctx->pc == 0x3FFBC8u) {
        ctx->pc = 0x3FFBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFBC4u;
        // 0x3ffbc8: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFBCCu;
        goto label_3ffbcc;
    }
    ctx->pc = 0x3FFBC4u;
    {
        const bool branch_taken_0x3ffbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffbc4) {
            ctx->pc = 0x3FFBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFBC4u;
            // 0x3ffbc8: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFE28u;
            goto label_3ffe28;
        }
    }
    ctx->pc = 0x3FFBCCu;
label_3ffbcc:
    // 0x3ffbcc: 0xc0e8630  jal         func_3A18C0
label_3ffbd0:
    if (ctx->pc == 0x3FFBD0u) {
        ctx->pc = 0x3FFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFBCCu;
        // 0x3ffbd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFBD4u;
        goto label_3ffbd4;
    }
    ctx->pc = 0x3FFBCCu;
    SET_GPR_U32(ctx, 31, 0x3FFBD4u);
    ctx->pc = 0x3FFBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFBCCu;
    // 0x3ffbd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3FFBCCu, 0x3FFBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFBD4u;
label_3ffbd4:
    // 0x3ffbd4: 0x50400094  beql        $v0, $zero, . + 4 + (0x94 << 2)
label_3ffbd8:
    if (ctx->pc == 0x3FFBD8u) {
        ctx->pc = 0x3FFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFBD4u;
        // 0x3ffbd8: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFBDCu;
        goto label_3ffbdc;
    }
    ctx->pc = 0x3FFBD4u;
    {
        const bool branch_taken_0x3ffbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffbd4) {
            ctx->pc = 0x3FFBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFBD4u;
            // 0x3ffbd8: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFE28u;
            goto label_3ffe28;
        }
    }
    ctx->pc = 0x3FFBDCu;
label_3ffbdc:
    // 0x3ffbdc: 0xc0e8630  jal         func_3A18C0
label_3ffbe0:
    if (ctx->pc == 0x3FFBE0u) {
        ctx->pc = 0x3FFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFBDCu;
        // 0x3ffbe0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFBE4u;
        goto label_3ffbe4;
    }
    ctx->pc = 0x3FFBDCu;
    SET_GPR_U32(ctx, 31, 0x3FFBE4u);
    ctx->pc = 0x3FFBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFBDCu;
    // 0x3ffbe0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3FFBDCu, 0x3FFBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFBE4u;
label_3ffbe4:
    // 0x3ffbe4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ffbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ffbe8:
    // 0x3ffbe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ffbe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ffbec:
    // 0x3ffbec: 0xaee30008  sw          $v1, 0x8($s7)
    ctx->pc = 0x3ffbecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 3));
label_3ffbf0:
    // 0x3ffbf0: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x3ffbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_3ffbf4:
    // 0x3ffbf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ffbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ffbf8:
    // 0x3ffbf8: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3ffbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3ffbfc:
    // 0x3ffbfc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3ffbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3ffc00:
    // 0x3ffc00: 0xc0e8616  jal         func_3A1858
label_3ffc04:
    if (ctx->pc == 0x3FFC04u) {
        ctx->pc = 0x3FFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFC00u;
        // 0x3ffc04: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFC08u;
        goto label_3ffc08;
    }
    ctx->pc = 0x3FFC00u;
    SET_GPR_U32(ctx, 31, 0x3FFC08u);
    ctx->pc = 0x3FFC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFC00u;
    // 0x3ffc04: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3FFC00u, 0x3FFC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFC08u;
label_3ffc08:
    // 0x3ffc08: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3ffc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ffc0c:
    // 0x3ffc0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ffc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ffc10:
    // 0x3ffc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ffc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ffc14:
    // 0x3ffc14: 0xc0e911e  jal         func_3A4478
label_3ffc18:
    if (ctx->pc == 0x3FFC18u) {
        ctx->pc = 0x3FFC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFC14u;
        // 0x3ffc18: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFC1Cu;
        goto label_3ffc1c;
    }
    ctx->pc = 0x3FFC14u;
    SET_GPR_U32(ctx, 31, 0x3FFC1Cu);
    ctx->pc = 0x3FFC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFC14u;
    // 0x3ffc18: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3FFC14u, 0x3FFC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFC1Cu;
label_3ffc1c:
    // 0x3ffc1c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ffc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ffc20:
    // 0x3ffc20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ffc20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ffc24:
    // 0x3ffc24: 0xc136b30  jal         func_4DACC0
label_3ffc28:
    if (ctx->pc == 0x3FFC28u) {
        ctx->pc = 0x3FFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFC24u;
        // 0x3ffc28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFC2Cu;
        goto label_3ffc2c;
    }
    ctx->pc = 0x3FFC24u;
    SET_GPR_U32(ctx, 31, 0x3FFC2Cu);
    ctx->pc = 0x3FFC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFC24u;
    // 0x3ffc28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3FFC24u, 0x3FFC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFC2Cu;
label_3ffc2c:
    // 0x3ffc2c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ffc2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ffc30:
    // 0x3ffc30: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3ffc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ffc34:
    // 0x3ffc34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ffc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ffc38:
    // 0x3ffc38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ffc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ffc3c:
    // 0x3ffc3c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3ffc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3ffc40:
    // 0x3ffc40: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3ffc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3ffc44:
    // 0x3ffc44: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3ffc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ffc48:
    // 0x3ffc48: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3ffc48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3ffc4c:
    // 0x3ffc4c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3ffc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3ffc50:
    // 0x3ffc50: 0x60f809  jalr        $v1
label_3ffc54:
    if (ctx->pc == 0x3FFC54u) {
        ctx->pc = 0x3FFC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFC50u;
        // 0x3ffc54: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFC58u;
        goto label_3ffc58;
    }
    ctx->pc = 0x3FFC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FFC58u);
        ctx->pc = 0x3FFC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFC50u;
        // 0x3ffc54: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FFC50u, 0x3FFC58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FFC58u;
label_3ffc58:
    // 0x3ffc58: 0x3c02de48  lui         $v0, 0xDE48
    ctx->pc = 0x3ffc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56904 << 16));
label_3ffc5c:
    // 0x3ffc5c: 0x3442ed43  ori         $v0, $v0, 0xED43
    ctx->pc = 0x3ffc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60739);
label_3ffc60:
    // 0x3ffc60: 0x52a20012  beql        $s5, $v0, . + 4 + (0x12 << 2)
label_3ffc64:
    if (ctx->pc == 0x3FFC64u) {
        ctx->pc = 0x3FFC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFC60u;
        // 0x3ffc64: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFC68u;
        goto label_3ffc68;
    }
    ctx->pc = 0x3FFC60u;
    {
        const bool branch_taken_0x3ffc60 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ffc60) {
            ctx->pc = 0x3FFC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFC60u;
            // 0x3ffc64: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFCACu;
            goto label_3ffcac;
        }
    }
    ctx->pc = 0x3FFC68u;
label_3ffc68:
    // 0x3ffc68: 0x3c02ec1e  lui         $v0, 0xEC1E
    ctx->pc = 0x3ffc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60446 << 16));
label_3ffc6c:
    // 0x3ffc6c: 0x344281b2  ori         $v0, $v0, 0x81B2
    ctx->pc = 0x3ffc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33202);
label_3ffc70:
    // 0x3ffc70: 0x52a2000e  beql        $s5, $v0, . + 4 + (0xE << 2)
label_3ffc74:
    if (ctx->pc == 0x3FFC74u) {
        ctx->pc = 0x3FFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFC70u;
        // 0x3ffc74: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFC78u;
        goto label_3ffc78;
    }
    ctx->pc = 0x3FFC70u;
    {
        const bool branch_taken_0x3ffc70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ffc70) {
            ctx->pc = 0x3FFC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFC70u;
            // 0x3ffc74: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFCACu;
            goto label_3ffcac;
        }
    }
    ctx->pc = 0x3FFC78u;
label_3ffc78:
    // 0x3ffc78: 0x3c0295c2  lui         $v0, 0x95C2
    ctx->pc = 0x3ffc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38338 << 16));
label_3ffc7c:
    // 0x3ffc7c: 0x34423916  ori         $v0, $v0, 0x3916
    ctx->pc = 0x3ffc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14614);
label_3ffc80:
    // 0x3ffc80: 0x52a2000a  beql        $s5, $v0, . + 4 + (0xA << 2)
label_3ffc84:
    if (ctx->pc == 0x3FFC84u) {
        ctx->pc = 0x3FFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFC80u;
        // 0x3ffc84: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFC88u;
        goto label_3ffc88;
    }
    ctx->pc = 0x3FFC80u;
    {
        const bool branch_taken_0x3ffc80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ffc80) {
            ctx->pc = 0x3FFC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFC80u;
            // 0x3ffc84: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFCACu;
            goto label_3ffcac;
        }
    }
    ctx->pc = 0x3FFC88u;
label_3ffc88:
    // 0x3ffc88: 0x3c0286ae  lui         $v0, 0x86AE
    ctx->pc = 0x3ffc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34478 << 16));
label_3ffc8c:
    // 0x3ffc8c: 0x3442a140  ori         $v0, $v0, 0xA140
    ctx->pc = 0x3ffc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41280);
label_3ffc90:
    // 0x3ffc90: 0x52a20006  beql        $s5, $v0, . + 4 + (0x6 << 2)
label_3ffc94:
    if (ctx->pc == 0x3FFC94u) {
        ctx->pc = 0x3FFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFC90u;
        // 0x3ffc94: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFC98u;
        goto label_3ffc98;
    }
    ctx->pc = 0x3FFC90u;
    {
        const bool branch_taken_0x3ffc90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ffc90) {
            ctx->pc = 0x3FFC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFC90u;
            // 0x3ffc94: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFCACu;
            goto label_3ffcac;
        }
    }
    ctx->pc = 0x3FFC98u;
label_3ffc98:
    // 0x3ffc98: 0x3c0281c3  lui         $v0, 0x81C3
    ctx->pc = 0x3ffc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33219 << 16));
label_3ffc9c:
    // 0x3ffc9c: 0x34426559  ori         $v0, $v0, 0x6559
    ctx->pc = 0x3ffc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25945);
label_3ffca0:
    // 0x3ffca0: 0x56a20020  bnel        $s5, $v0, . + 4 + (0x20 << 2)
label_3ffca4:
    if (ctx->pc == 0x3FFCA4u) {
        ctx->pc = 0x3FFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFCA0u;
        // 0x3ffca4: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFCA8u;
        goto label_3ffca8;
    }
    ctx->pc = 0x3FFCA0u;
    {
        const bool branch_taken_0x3ffca0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ffca0) {
            ctx->pc = 0x3FFCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFCA0u;
            // 0x3ffca4: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFD24u;
            goto label_3ffd24;
        }
    }
    ctx->pc = 0x3FFCA8u;
label_3ffca8:
    // 0x3ffca8: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x3ffca8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ffcac:
    // 0x3ffcac: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x3ffcacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_3ffcb0:
    // 0x3ffcb0: 0x3c01c020  lui         $at, 0xC020
    ctx->pc = 0x3ffcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49184 << 16));
label_3ffcb4:
    // 0x3ffcb4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3ffcb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3ffcb8:
    // 0x3ffcb8: 0x2670b8b8  addiu       $s0, $s3, -0x4748
    ctx->pc = 0x3ffcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949048));
label_3ffcbc:
    // 0x3ffcbc: 0x86320078  lh          $s2, 0x78($s1)
    ctx->pc = 0x3ffcbcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_3ffcc0:
    // 0x3ffcc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ffcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ffcc4:
    // 0x3ffcc4: 0x3c01c090  lui         $at, 0xC090
    ctx->pc = 0x3ffcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49296 << 16));
label_3ffcc8:
    // 0x3ffcc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ffcc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ffccc:
    // 0x3ffccc: 0x26310078  addiu       $s1, $s1, 0x78
    ctx->pc = 0x3ffcccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3ffcd0:
    // 0x3ffcd0: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x3ffcd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_3ffcd4:
    // 0x3ffcd4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3ffcd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3ffcd8:
    // 0x3ffcd8: 0xc0cd518  jal         func_335460
label_3ffcdc:
    if (ctx->pc == 0x3FFCDCu) {
        ctx->pc = 0x3FFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFCD8u;
        // 0x3ffcdc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFCE0u;
        goto label_3ffce0;
    }
    ctx->pc = 0x3FFCD8u;
    SET_GPR_U32(ctx, 31, 0x3FFCE0u);
    ctx->pc = 0x3FFCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFCD8u;
    // 0x3ffcdc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FFCD8u, 0x3FFCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFCE0u;
label_3ffce0:
    // 0x3ffce0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3ffce0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3ffce4:
    // 0x3ffce4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3ffce4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3ffce8:
    // 0x3ffce8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3ffce8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3ffcec:
    // 0x3ffcec: 0xc0cd518  jal         func_335460
label_3ffcf0:
    if (ctx->pc == 0x3FFCF0u) {
        ctx->pc = 0x3FFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFCECu;
        // 0x3ffcf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFCF4u;
        goto label_3ffcf4;
    }
    ctx->pc = 0x3FFCECu;
    SET_GPR_U32(ctx, 31, 0x3FFCF4u);
    ctx->pc = 0x3FFCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFCECu;
    // 0x3ffcf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FFCECu, 0x3FFCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFCF4u;
label_3ffcf4:
    // 0x3ffcf4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3ffcf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ffcf8:
    // 0x3ffcf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ffcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ffcfc:
    // 0x3ffcfc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3ffcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ffd00:
    // 0x3ffd00: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3ffd00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3ffd04:
    // 0x3ffd04: 0xc0cd55c  jal         func_335570
label_3ffd08:
    if (ctx->pc == 0x3FFD08u) {
        ctx->pc = 0x3FFD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFD04u;
        // 0x3ffd08: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFD0Cu;
        goto label_3ffd0c;
    }
    ctx->pc = 0x3FFD04u;
    SET_GPR_U32(ctx, 31, 0x3FFD0Cu);
    ctx->pc = 0x3FFD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFD04u;
    // 0x3ffd08: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3FFD04u, 0x3FFD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFD0Cu;
label_3ffd0c:
    // 0x3ffd0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ffd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ffd10:
    // 0x3ffd10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ffd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ffd14:
    // 0x3ffd14: 0x40f809  jalr        $v0
label_3ffd18:
    if (ctx->pc == 0x3FFD18u) {
        ctx->pc = 0x3FFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFD14u;
        // 0x3ffd18: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFD1Cu;
        goto label_3ffd1c;
    }
    ctx->pc = 0x3FFD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FFD1Cu);
        ctx->pc = 0x3FFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFD14u;
        // 0x3ffd18: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FFD14u, 0x3FFD1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FFD1Cu;
label_3ffd1c:
    // 0x3ffd1c: 0x10000017  b           . + 4 + (0x17 << 2)
label_3ffd20:
    if (ctx->pc == 0x3FFD20u) {
        ctx->pc = 0x3FFD24u;
        goto label_3ffd24;
    }
    ctx->pc = 0x3FFD1Cu;
    {
        const bool branch_taken_0x3ffd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffd1c) {
            ctx->pc = 0x3FFD7Cu;
            goto label_3ffd7c;
        }
    }
    ctx->pc = 0x3FFD24u;
label_3ffd24:
    // 0x3ffd24: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x3ffd24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_3ffd28:
    // 0x3ffd28: 0x2672b8b8  addiu       $s2, $s3, -0x4748
    ctx->pc = 0x3ffd28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949048));
label_3ffd2c:
    // 0x3ffd2c: 0x3c01c020  lui         $at, 0xC020
    ctx->pc = 0x3ffd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49184 << 16));
label_3ffd30:
    // 0x3ffd30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ffd30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ffd34:
    // 0x3ffd34: 0x86110078  lh          $s1, 0x78($s0)
    ctx->pc = 0x3ffd34u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
label_3ffd38:
    // 0x3ffd38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ffd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ffd3c:
    // 0x3ffd3c: 0x3c01c090  lui         $at, 0xC090
    ctx->pc = 0x3ffd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49296 << 16));
label_3ffd40:
    // 0x3ffd40: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ffd40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ffd44:
    // 0x3ffd44: 0x26100078  addiu       $s0, $s0, 0x78
    ctx->pc = 0x3ffd44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_3ffd48:
    // 0x3ffd48: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3ffd48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ffd4c:
    // 0x3ffd4c: 0xc0cd518  jal         func_335460
label_3ffd50:
    if (ctx->pc == 0x3FFD50u) {
        ctx->pc = 0x3FFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFD4Cu;
        // 0x3ffd50: 0x2918821  addu        $s1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFD54u;
        goto label_3ffd54;
    }
    ctx->pc = 0x3FFD4Cu;
    SET_GPR_U32(ctx, 31, 0x3FFD54u);
    ctx->pc = 0x3FFD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFD4Cu;
    // 0x3ffd50: 0x2918821  addu        $s1, $s4, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FFD4Cu, 0x3FFD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFD54u;
label_3ffd54:
    // 0x3ffd54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ffd54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3ffd58:
    // 0x3ffd58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ffd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ffd5c:
    // 0x3ffd5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3ffd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ffd60:
    // 0x3ffd60: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x3ffd60u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_3ffd64:
    // 0x3ffd64: 0xc0cd55c  jal         func_335570
label_3ffd68:
    if (ctx->pc == 0x3FFD68u) {
        ctx->pc = 0x3FFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFD64u;
        // 0x3ffd68: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFD6Cu;
        goto label_3ffd6c;
    }
    ctx->pc = 0x3FFD64u;
    SET_GPR_U32(ctx, 31, 0x3FFD6Cu);
    ctx->pc = 0x3FFD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFD64u;
    // 0x3ffd68: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3FFD64u, 0x3FFD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFD6Cu;
label_3ffd6c:
    // 0x3ffd6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ffd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ffd70:
    // 0x3ffd70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ffd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ffd74:
    // 0x3ffd74: 0x40f809  jalr        $v0
label_3ffd78:
    if (ctx->pc == 0x3FFD78u) {
        ctx->pc = 0x3FFD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFD74u;
        // 0x3ffd78: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFD7Cu;
        goto label_3ffd7c;
    }
    ctx->pc = 0x3FFD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FFD7Cu);
        ctx->pc = 0x3FFD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFD74u;
        // 0x3ffd78: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FFD74u, 0x3FFD7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FFD7Cu;
label_3ffd7c:
    // 0x3ffd7c: 0x3c02f10d  lui         $v0, 0xF10D
    ctx->pc = 0x3ffd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61709 << 16));
label_3ffd80:
    // 0x3ffd80: 0x34424da4  ori         $v0, $v0, 0x4DA4
    ctx->pc = 0x3ffd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19876);
label_3ffd84:
    // 0x3ffd84: 0x12a20005  beq         $s5, $v0, . + 4 + (0x5 << 2)
label_3ffd88:
    if (ctx->pc == 0x3FFD88u) {
        ctx->pc = 0x3FFD8Cu;
        goto label_3ffd8c;
    }
    ctx->pc = 0x3FFD84u;
    {
        const bool branch_taken_0x3ffd84 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ffd84) {
            ctx->pc = 0x3FFD9Cu;
            goto label_3ffd9c;
        }
    }
    ctx->pc = 0x3FFD8Cu;
label_3ffd8c:
    // 0x3ffd8c: 0x3c02860a  lui         $v0, 0x860A
    ctx->pc = 0x3ffd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34314 << 16));
label_3ffd90:
    // 0x3ffd90: 0x34427d32  ori         $v0, $v0, 0x7D32
    ctx->pc = 0x3ffd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32050);
label_3ffd94:
    // 0x3ffd94: 0x56a20023  bnel        $s5, $v0, . + 4 + (0x23 << 2)
label_3ffd98:
    if (ctx->pc == 0x3FFD98u) {
        ctx->pc = 0x3FFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFD94u;
        // 0x3ffd98: 0xaee00004  sw          $zero, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFD9Cu;
        goto label_3ffd9c;
    }
    ctx->pc = 0x3FFD94u;
    {
        const bool branch_taken_0x3ffd94 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ffd94) {
            ctx->pc = 0x3FFD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FFD94u;
            // 0x3ffd98: 0xaee00004  sw          $zero, 0x4($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FFE24u;
            goto label_3ffe24;
        }
    }
    ctx->pc = 0x3FFD9Cu;
label_3ffd9c:
    // 0x3ffd9c: 0x3c014116  lui         $at, 0x4116
    ctx->pc = 0x3ffd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16662 << 16));
label_3ffda0:
    // 0x3ffda0: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x3ffda0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_3ffda4:
    // 0x3ffda4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3ffda4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3ffda8:
    // 0x3ffda8: 0x2670b8b8  addiu       $s0, $s3, -0x4748
    ctx->pc = 0x3ffda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949048));
label_3ffdac:
    // 0x3ffdac: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x3ffdacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ffdb0:
    // 0x3ffdb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ffdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ffdb4:
    // 0x3ffdb4: 0x4600ad07  neg.s       $f20, $f21
    ctx->pc = 0x3ffdb4u;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
label_3ffdb8:
    // 0x3ffdb8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3ffdb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3ffdbc:
    // 0x3ffdbc: 0x86320078  lh          $s2, 0x78($s1)
    ctx->pc = 0x3ffdbcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_3ffdc0:
    // 0x3ffdc0: 0x26310078  addiu       $s1, $s1, 0x78
    ctx->pc = 0x3ffdc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3ffdc4:
    // 0x3ffdc4: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x3ffdc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_3ffdc8:
    // 0x3ffdc8: 0xc0cd518  jal         func_335460
label_3ffdcc:
    if (ctx->pc == 0x3FFDCCu) {
        ctx->pc = 0x3FFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFDC8u;
        // 0x3ffdcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFDD0u;
        goto label_3ffdd0;
    }
    ctx->pc = 0x3FFDC8u;
    SET_GPR_U32(ctx, 31, 0x3FFDD0u);
    ctx->pc = 0x3FFDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFDC8u;
    // 0x3ffdcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FFDC8u, 0x3FFDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFDD0u;
label_3ffdd0:
    // 0x3ffdd0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3ffdd0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3ffdd4:
    // 0x3ffdd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ffdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ffdd8:
    // 0x3ffdd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ffdd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3ffddc:
    // 0x3ffddc: 0xc0cd518  jal         func_335460
label_3ffde0:
    if (ctx->pc == 0x3FFDE0u) {
        ctx->pc = 0x3FFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFDDCu;
        // 0x3ffde0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFDE4u;
        goto label_3ffde4;
    }
    ctx->pc = 0x3FFDDCu;
    SET_GPR_U32(ctx, 31, 0x3FFDE4u);
    ctx->pc = 0x3FFDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFDDCu;
    // 0x3ffde0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FFDDCu, 0x3FFDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFDE4u;
label_3ffde4:
    // 0x3ffde4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3ffde4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3ffde8:
    // 0x3ffde8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ffde8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3ffdec:
    // 0x3ffdec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3ffdecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3ffdf0:
    // 0x3ffdf0: 0xc0cd518  jal         func_335460
label_3ffdf4:
    if (ctx->pc == 0x3FFDF4u) {
        ctx->pc = 0x3FFDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFDF0u;
        // 0x3ffdf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFDF8u;
        goto label_3ffdf8;
    }
    ctx->pc = 0x3FFDF0u;
    SET_GPR_U32(ctx, 31, 0x3FFDF8u);
    ctx->pc = 0x3FFDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFDF0u;
    // 0x3ffdf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3FFDF0u, 0x3FFDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFDF8u;
label_3ffdf8:
    // 0x3ffdf8: 0x46000387  neg.s       $f14, $f0
    ctx->pc = 0x3ffdf8u;
    ctx->f[14] = FPU_NEG_S(ctx->f[0]);
label_3ffdfc:
    // 0x3ffdfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ffdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ffe00:
    // 0x3ffe00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3ffe00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ffe04:
    // 0x3ffe04: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ffe04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3ffe08:
    // 0x3ffe08: 0xc0cd55c  jal         func_335570
label_3ffe0c:
    if (ctx->pc == 0x3FFE0Cu) {
        ctx->pc = 0x3FFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFE08u;
        // 0x3ffe0c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFE10u;
        goto label_3ffe10;
    }
    ctx->pc = 0x3FFE08u;
    SET_GPR_U32(ctx, 31, 0x3FFE10u);
    ctx->pc = 0x3FFE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FFE08u;
    // 0x3ffe0c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3FFE08u, 0x3FFE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FFE10u;
label_3ffe10:
    // 0x3ffe10: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ffe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ffe14:
    // 0x3ffe14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ffe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ffe18:
    // 0x3ffe18: 0x40f809  jalr        $v0
label_3ffe1c:
    if (ctx->pc == 0x3FFE1Cu) {
        ctx->pc = 0x3FFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFE18u;
        // 0x3ffe1c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFE20u;
        goto label_3ffe20;
    }
    ctx->pc = 0x3FFE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FFE20u);
        ctx->pc = 0x3FFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFE18u;
        // 0x3ffe1c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FFE18u, 0x3FFE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FFE20u;
label_3ffe20:
    // 0x3ffe20: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x3ffe20u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_3ffe24:
    // 0x3ffe24: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3ffe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3ffe28:
    // 0x3ffe28: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3ffe28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_3ffe2c:
    // 0x3ffe2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3ffe2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3ffe30:
    // 0x3ffe30: 0x3c04ac6f  lui         $a0, 0xAC6F
    ctx->pc = 0x3ffe30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44143 << 16));
label_3ffe34:
    // 0x3ffe34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ffe34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ffe38:
    // 0x3ffe38: 0x34845902  ori         $a0, $a0, 0x5902
    ctx->pc = 0x3ffe38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22786);
label_3ffe3c:
    // 0x3ffe3c: 0x16a40005  bne         $s5, $a0, . + 4 + (0x5 << 2)
label_3ffe40:
    if (ctx->pc == 0x3FFE40u) {
        ctx->pc = 0x3FFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFE3Cu;
        // 0x3ffe40: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFE44u;
        goto label_3ffe44;
    }
    ctx->pc = 0x3FFE3Cu;
    {
        const bool branch_taken_0x3ffe3c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        ctx->pc = 0x3FFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFE3Cu;
        // 0x3ffe40: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffe3c) {
            ctx->pc = 0x3FFE54u;
            goto label_3ffe54;
        }
    }
    ctx->pc = 0x3FFE44u;
label_3ffe44:
    // 0x3ffe44: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3ffe44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3ffe48:
    // 0x3ffe48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ffe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ffe4c:
    // 0x3ffe4c: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x3ffe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_3ffe50:
    // 0x3ffe50: 0xaee30004  sw          $v1, 0x4($s7)
    ctx->pc = 0x3ffe50u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 3));
label_3ffe54:
    // 0x3ffe54: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3ffe54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ffe58:
    // 0x3ffe58: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3ffe58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ffe5c:
    // 0x3ffe5c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3ffe5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ffe60:
    // 0x3ffe60: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3ffe60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ffe64:
    // 0x3ffe64: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3ffe64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ffe68:
    // 0x3ffe68: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3ffe68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ffe6c:
    // 0x3ffe6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ffe6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ffe70:
    // 0x3ffe70: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3ffe70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ffe74:
    // 0x3ffe74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ffe74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ffe78:
    // 0x3ffe78: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x3ffe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3ffe7c:
    // 0x3ffe7c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x3ffe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ffe80:
    // 0x3ffe80: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x3ffe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ffe84:
    // 0x3ffe84: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3ffe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ffe88:
    // 0x3ffe88: 0x3e00008  jr          $ra
label_3ffe8c:
    if (ctx->pc == 0x3FFE8Cu) {
        ctx->pc = 0x3FFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFE88u;
        // 0x3ffe8c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FFE90u;
        goto label_fallthrough_0x3ffe88;
    }
    ctx->pc = 0x3FFE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FFE88u;
        // 0x3ffe8c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FFE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ffe88:
    ctx->pc = 0x3FFE90u;
}
