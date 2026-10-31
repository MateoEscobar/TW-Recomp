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

// Function: sub_002C1E80
// Address: 0x2c1e80 - 0x2c2068
void sub_002C1E80_0x2c1e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1E80_0x2c1e80");
#endif

    switch (ctx->pc) {
        case 0x2c1e80u: goto label_2c1e80;
        case 0x2c1e84u: goto label_2c1e84;
        case 0x2c1e88u: goto label_2c1e88;
        case 0x2c1e8cu: goto label_2c1e8c;
        case 0x2c1e90u: goto label_2c1e90;
        case 0x2c1e94u: goto label_2c1e94;
        case 0x2c1e98u: goto label_2c1e98;
        case 0x2c1e9cu: goto label_2c1e9c;
        case 0x2c1ea0u: goto label_2c1ea0;
        case 0x2c1ea4u: goto label_2c1ea4;
        case 0x2c1ea8u: goto label_2c1ea8;
        case 0x2c1eacu: goto label_2c1eac;
        case 0x2c1eb0u: goto label_2c1eb0;
        case 0x2c1eb4u: goto label_2c1eb4;
        case 0x2c1eb8u: goto label_2c1eb8;
        case 0x2c1ebcu: goto label_2c1ebc;
        case 0x2c1ec0u: goto label_2c1ec0;
        case 0x2c1ec4u: goto label_2c1ec4;
        case 0x2c1ec8u: goto label_2c1ec8;
        case 0x2c1eccu: goto label_2c1ecc;
        case 0x2c1ed0u: goto label_2c1ed0;
        case 0x2c1ed4u: goto label_2c1ed4;
        case 0x2c1ed8u: goto label_2c1ed8;
        case 0x2c1edcu: goto label_2c1edc;
        case 0x2c1ee0u: goto label_2c1ee0;
        case 0x2c1ee4u: goto label_2c1ee4;
        case 0x2c1ee8u: goto label_2c1ee8;
        case 0x2c1eecu: goto label_2c1eec;
        case 0x2c1ef0u: goto label_2c1ef0;
        case 0x2c1ef4u: goto label_2c1ef4;
        case 0x2c1ef8u: goto label_2c1ef8;
        case 0x2c1efcu: goto label_2c1efc;
        case 0x2c1f00u: goto label_2c1f00;
        case 0x2c1f04u: goto label_2c1f04;
        case 0x2c1f08u: goto label_2c1f08;
        case 0x2c1f0cu: goto label_2c1f0c;
        case 0x2c1f10u: goto label_2c1f10;
        case 0x2c1f14u: goto label_2c1f14;
        case 0x2c1f18u: goto label_2c1f18;
        case 0x2c1f1cu: goto label_2c1f1c;
        case 0x2c1f20u: goto label_2c1f20;
        case 0x2c1f24u: goto label_2c1f24;
        case 0x2c1f28u: goto label_2c1f28;
        case 0x2c1f2cu: goto label_2c1f2c;
        case 0x2c1f30u: goto label_2c1f30;
        case 0x2c1f34u: goto label_2c1f34;
        case 0x2c1f38u: goto label_2c1f38;
        case 0x2c1f3cu: goto label_2c1f3c;
        case 0x2c1f40u: goto label_2c1f40;
        case 0x2c1f44u: goto label_2c1f44;
        case 0x2c1f48u: goto label_2c1f48;
        case 0x2c1f4cu: goto label_2c1f4c;
        case 0x2c1f50u: goto label_2c1f50;
        case 0x2c1f54u: goto label_2c1f54;
        case 0x2c1f58u: goto label_2c1f58;
        case 0x2c1f5cu: goto label_2c1f5c;
        case 0x2c1f60u: goto label_2c1f60;
        case 0x2c1f64u: goto label_2c1f64;
        case 0x2c1f68u: goto label_2c1f68;
        case 0x2c1f6cu: goto label_2c1f6c;
        case 0x2c1f70u: goto label_2c1f70;
        case 0x2c1f74u: goto label_2c1f74;
        case 0x2c1f78u: goto label_2c1f78;
        case 0x2c1f7cu: goto label_2c1f7c;
        case 0x2c1f80u: goto label_2c1f80;
        case 0x2c1f84u: goto label_2c1f84;
        case 0x2c1f88u: goto label_2c1f88;
        case 0x2c1f8cu: goto label_2c1f8c;
        case 0x2c1f90u: goto label_2c1f90;
        case 0x2c1f94u: goto label_2c1f94;
        case 0x2c1f98u: goto label_2c1f98;
        case 0x2c1f9cu: goto label_2c1f9c;
        case 0x2c1fa0u: goto label_2c1fa0;
        case 0x2c1fa4u: goto label_2c1fa4;
        case 0x2c1fa8u: goto label_2c1fa8;
        case 0x2c1facu: goto label_2c1fac;
        case 0x2c1fb0u: goto label_2c1fb0;
        case 0x2c1fb4u: goto label_2c1fb4;
        case 0x2c1fb8u: goto label_2c1fb8;
        case 0x2c1fbcu: goto label_2c1fbc;
        case 0x2c1fc0u: goto label_2c1fc0;
        case 0x2c1fc4u: goto label_2c1fc4;
        case 0x2c1fc8u: goto label_2c1fc8;
        case 0x2c1fccu: goto label_2c1fcc;
        case 0x2c1fd0u: goto label_2c1fd0;
        case 0x2c1fd4u: goto label_2c1fd4;
        case 0x2c1fd8u: goto label_2c1fd8;
        case 0x2c1fdcu: goto label_2c1fdc;
        case 0x2c1fe0u: goto label_2c1fe0;
        case 0x2c1fe4u: goto label_2c1fe4;
        case 0x2c1fe8u: goto label_2c1fe8;
        case 0x2c1fecu: goto label_2c1fec;
        case 0x2c1ff0u: goto label_2c1ff0;
        case 0x2c1ff4u: goto label_2c1ff4;
        case 0x2c1ff8u: goto label_2c1ff8;
        case 0x2c1ffcu: goto label_2c1ffc;
        case 0x2c2000u: goto label_2c2000;
        case 0x2c2004u: goto label_2c2004;
        case 0x2c2008u: goto label_2c2008;
        case 0x2c200cu: goto label_2c200c;
        case 0x2c2010u: goto label_2c2010;
        case 0x2c2014u: goto label_2c2014;
        case 0x2c2018u: goto label_2c2018;
        case 0x2c201cu: goto label_2c201c;
        case 0x2c2020u: goto label_2c2020;
        case 0x2c2024u: goto label_2c2024;
        case 0x2c2028u: goto label_2c2028;
        case 0x2c202cu: goto label_2c202c;
        case 0x2c2030u: goto label_2c2030;
        case 0x2c2034u: goto label_2c2034;
        case 0x2c2038u: goto label_2c2038;
        case 0x2c203cu: goto label_2c203c;
        case 0x2c2040u: goto label_2c2040;
        case 0x2c2044u: goto label_2c2044;
        case 0x2c2048u: goto label_2c2048;
        case 0x2c204cu: goto label_2c204c;
        case 0x2c2050u: goto label_2c2050;
        case 0x2c2054u: goto label_2c2054;
        case 0x2c2058u: goto label_2c2058;
        case 0x2c205cu: goto label_2c205c;
        case 0x2c2060u: goto label_2c2060;
        case 0x2c2064u: goto label_2c2064;
        default: break;
    }

    ctx->pc = 0x2c1e80u;

label_2c1e80:
    // 0x2c1e80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2c1e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2c1e84:
    // 0x2c1e84: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2c1e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2c1e88:
    // 0x2c1e88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c1e88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c1e8c:
    // 0x2c1e8c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2c1e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2c1e90:
    // 0x2c1e90: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2c1e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2c1e94:
    // 0x2c1e94: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x2c1e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_2c1e98:
    // 0x2c1e98: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2c1e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2c1e9c:
    // 0x2c1e9c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2c1e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2c1ea0:
    // 0x2c1ea0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c1ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2c1ea4:
    // 0x2c1ea4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c1ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2c1ea8:
    // 0x2c1ea8: 0xc0e40a2  jal         func_390288
label_2c1eac:
    if (ctx->pc == 0x2C1EACu) {
        ctx->pc = 0x2C1EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EA8u;
        // 0x2c1eac: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1EB0u;
        goto label_2c1eb0;
    }
    ctx->pc = 0x2C1EA8u;
    SET_GPR_U32(ctx, 31, 0x2C1EB0u);
    ctx->pc = 0x2C1EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1EA8u;
    // 0x2c1eac: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2C1EA8u, 0x2C1EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1EB0u;
label_2c1eb0:
    // 0x2c1eb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c1eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1eb4:
    // 0x2c1eb4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2c1eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2c1eb8:
    // 0x2c1eb8: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x2c1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_2c1ebc:
    // 0x2c1ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c1ec0:
    // 0x2c1ec0: 0xc10587a  jal         func_4161E8
label_2c1ec4:
    if (ctx->pc == 0x2C1EC4u) {
        ctx->pc = 0x2C1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EC0u;
        // 0x2c1ec4: 0x8c500840  lw          $s0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1EC8u;
        goto label_2c1ec8;
    }
    ctx->pc = 0x2C1EC0u;
    SET_GPR_U32(ctx, 31, 0x2C1EC8u);
    ctx->pc = 0x2C1EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1EC0u;
    // 0x2c1ec4: 0x8c500840  lw          $s0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C1EC0u, 0x2C1EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1EC8u;
label_2c1ec8:
    // 0x2c1ec8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c1ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1ecc:
    // 0x2c1ecc: 0xc0e69ac  jal         func_39A6B0
label_2c1ed0:
    if (ctx->pc == 0x2C1ED0u) {
        ctx->pc = 0x2C1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1ECCu;
        // 0x2c1ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1ED4u;
        goto label_2c1ed4;
    }
    ctx->pc = 0x2C1ECCu;
    SET_GPR_U32(ctx, 31, 0x2C1ED4u);
    ctx->pc = 0x2C1ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1ECCu;
    // 0x2c1ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A6B0u, 0x2C1ECCu, 0x2C1ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1ED4u;
label_2c1ed4:
    // 0x2c1ed4: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x2c1ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
label_2c1ed8:
    // 0x2c1ed8: 0xc0e4060  jal         func_390180
label_2c1edc:
    if (ctx->pc == 0x2C1EDCu) {
        ctx->pc = 0x2C1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1ED8u;
        // 0x2c1edc: 0xae620034  sw          $v0, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1EE0u;
        goto label_2c1ee0;
    }
    ctx->pc = 0x2C1ED8u;
    SET_GPR_U32(ctx, 31, 0x2C1EE0u);
    ctx->pc = 0x2C1EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1ED8u;
    // 0x2c1edc: 0xae620034  sw          $v0, 0x34($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2C1ED8u, 0x2C1EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1EE0u;
label_2c1ee0:
    // 0x2c1ee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1ee4:
    // 0x2c1ee4: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2c1ee4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c1ee8:
    // 0x2c1ee8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c1ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c1eec:
    // 0x2c1eec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c1eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c1ef0:
    // 0x2c1ef0: 0x26150020  addiu       $s5, $s0, 0x20
    ctx->pc = 0x2c1ef0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2c1ef4:
    // 0x2c1ef4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2c1ef4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2c1ef8:
    // 0x2c1ef8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2c1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2c1efc:
    // 0x2c1efc: 0x40f809  jalr        $v0
label_2c1f00:
    if (ctx->pc == 0x2C1F00u) {
        ctx->pc = 0x2C1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EFCu;
        // 0x2c1f00: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1F04u;
        goto label_2c1f04;
    }
    ctx->pc = 0x2C1EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C1F04u);
        ctx->pc = 0x2C1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EFCu;
        // 0x2c1f00: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1EFCu, 0x2C1F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C1F04u;
label_2c1f04:
    // 0x2c1f04: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2c1f04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1f08:
    // 0x2c1f08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c1f0c:
    // 0x2c1f0c: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x2c1f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_2c1f10:
    // 0x2c1f10: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2c1f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2c1f14:
    // 0x2c1f14: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2c1f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2c1f18:
    // 0x2c1f18: 0xc0e44cc  jal         func_391330
label_2c1f1c:
    if (ctx->pc == 0x2C1F1Cu) {
        ctx->pc = 0x2C1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F18u;
        // 0x2c1f1c: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1F20u;
        goto label_2c1f20;
    }
    ctx->pc = 0x2C1F18u;
    SET_GPR_U32(ctx, 31, 0x2C1F20u);
    ctx->pc = 0x2C1F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F18u;
    // 0x2c1f1c: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2C1F18u, 0x2C1F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F20u;
label_2c1f20:
    // 0x2c1f20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c1f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1f24:
    // 0x2c1f24: 0xc0e45f6  jal         func_3917D8
label_2c1f28:
    if (ctx->pc == 0x2C1F28u) {
        ctx->pc = 0x2C1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F24u;
        // 0x2c1f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1F2Cu;
        goto label_2c1f2c;
    }
    ctx->pc = 0x2C1F24u;
    SET_GPR_U32(ctx, 31, 0x2C1F2Cu);
    ctx->pc = 0x2C1F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F24u;
    // 0x2c1f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3917D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3917D8u, 0x2C1F24u, 0x2C1F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F2Cu;
label_2c1f2c:
    // 0x2c1f2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c1f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c1f30:
    // 0x2c1f30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c1f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c1f34:
    // 0x2c1f34: 0xc136b30  jal         func_4DACC0
label_2c1f38:
    if (ctx->pc == 0x2C1F38u) {
        ctx->pc = 0x2C1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F34u;
        // 0x2c1f38: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1F3Cu;
        goto label_2c1f3c;
    }
    ctx->pc = 0x2C1F34u;
    SET_GPR_U32(ctx, 31, 0x2C1F3Cu);
    ctx->pc = 0x2C1F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F34u;
    // 0x2c1f38: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x2C1F34u, 0x2C1F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F3Cu;
label_2c1f3c:
    // 0x2c1f3c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2c1f3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c1f40:
    // 0x2c1f40: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c1f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c1f44:
    // 0x2c1f44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c1f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c1f48:
    // 0x2c1f48: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c1f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2c1f4c:
    // 0x2c1f4c: 0xc136b18  jal         func_4DAC60
label_2c1f50:
    if (ctx->pc == 0x2C1F50u) {
        ctx->pc = 0x2C1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F4Cu;
        // 0x2c1f50: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1F54u;
        goto label_2c1f54;
    }
    ctx->pc = 0x2C1F4Cu;
    SET_GPR_U32(ctx, 31, 0x2C1F54u);
    ctx->pc = 0x2C1F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F4Cu;
    // 0x2c1f50: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x2C1F4Cu, 0x2C1F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F54u;
label_2c1f54:
    // 0x2c1f54: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2c1f54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c1f58:
    // 0x2c1f58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c1f5c:
    // 0x2c1f5c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2c1f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2c1f60:
    // 0x2c1f60: 0xc10587a  jal         func_4161E8
label_2c1f64:
    if (ctx->pc == 0x2C1F64u) {
        ctx->pc = 0x2C1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F60u;
        // 0x2c1f64: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1F68u;
        goto label_2c1f68;
    }
    ctx->pc = 0x2C1F60u;
    SET_GPR_U32(ctx, 31, 0x2C1F68u);
    ctx->pc = 0x2C1F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F60u;
    // 0x2c1f64: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C1F60u, 0x2C1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F68u;
label_2c1f68:
    // 0x2c1f68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c1f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c1f6c:
    // 0x2c1f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c1f70:
    // 0x2c1f70: 0xc10587a  jal         func_4161E8
label_2c1f74:
    if (ctx->pc == 0x2C1F74u) {
        ctx->pc = 0x2C1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F70u;
        // 0x2c1f74: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1F78u;
        goto label_2c1f78;
    }
    ctx->pc = 0x2C1F70u;
    SET_GPR_U32(ctx, 31, 0x2C1F78u);
    ctx->pc = 0x2C1F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F70u;
    // 0x2c1f74: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C1F70u, 0x2C1F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F78u;
label_2c1f78:
    // 0x2c1f78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c1f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2c1f7c:
    // 0x2c1f7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c1f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c1f80:
    // 0x2c1f80: 0xc136afa  jal         func_4DABE8
label_2c1f84:
    if (ctx->pc == 0x2C1F84u) {
        ctx->pc = 0x2C1F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F80u;
        // 0x2c1f84: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1F88u;
        goto label_2c1f88;
    }
    ctx->pc = 0x2C1F80u;
    SET_GPR_U32(ctx, 31, 0x2C1F88u);
    ctx->pc = 0x2C1F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1F80u;
    // 0x2c1f84: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2C1F80u, 0x2C1F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1F88u;
label_2c1f88:
    // 0x2c1f88: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2c1f88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c1f8c:
    // 0x2c1f8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c1f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c1f90:
    // 0x2c1f90: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c1f90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2c1f94:
    // 0x2c1f94: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2c1f94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c1f98:
    // 0x2c1f98: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2c1f98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c1f9c:
    // 0x2c1f9c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2c1f9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c1fa0:
    // 0x2c1fa0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2c1fa0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2c1fa4:
    // 0x2c1fa4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c1fa4u;
    // VWAITQ (Q already resolved in this runtime)
label_2c1fa8:
    // 0x2c1fa8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2c1fa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2c1fac:
    // 0x2c1fac: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2c1facu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2c1fb0:
    // 0x2c1fb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c1fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c1fb4:
    // 0x2c1fb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c1fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c1fb8:
    // 0x2c1fb8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2c1fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c1fbc:
    // 0x2c1fbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c1fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c1fc0:
    // 0x2c1fc0: 0x0  nop
    ctx->pc = 0x2c1fc0u;
    // NOP
label_2c1fc4:
    // 0x2c1fc4: 0x0  nop
    ctx->pc = 0x2c1fc4u;
    // NOP
label_2c1fc8:
    // 0x2c1fc8: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x2c1fc8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
label_2c1fcc:
    // 0x2c1fcc: 0xc136b24  jal         func_4DAC90
label_2c1fd0:
    if (ctx->pc == 0x2C1FD0u) {
        ctx->pc = 0x2C1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FCCu;
        // 0x2c1fd0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1FD4u;
        goto label_2c1fd4;
    }
    ctx->pc = 0x2C1FCCu;
    SET_GPR_U32(ctx, 31, 0x2C1FD4u);
    ctx->pc = 0x2C1FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FCCu;
    // 0x2c1fd0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2C1FCCu, 0x2C1FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FD4u;
label_2c1fd4:
    // 0x2c1fd4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2c1fd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c1fd8:
    // 0x2c1fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c1fdc:
    // 0x2c1fdc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2c1fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2c1fe0:
    // 0x2c1fe0: 0xc10587a  jal         func_4161E8
label_2c1fe4:
    if (ctx->pc == 0x2C1FE4u) {
        ctx->pc = 0x2C1FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FE0u;
        // 0x2c1fe4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1FE8u;
        goto label_2c1fe8;
    }
    ctx->pc = 0x2C1FE0u;
    SET_GPR_U32(ctx, 31, 0x2C1FE8u);
    ctx->pc = 0x2C1FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FE0u;
    // 0x2c1fe4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C1FE0u, 0x2C1FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1FE8u;
label_2c1fe8:
    // 0x2c1fe8: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x2c1fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_2c1fec:
    // 0x2c1fec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c1fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c1ff0:
    // 0x2c1ff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1ff4:
    // 0x2c1ff4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c1ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c1ff8:
    // 0x2c1ff8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c1ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c1ffc:
    // 0x2c1ffc: 0xc136b24  jal         func_4DAC90
label_2c2000:
    if (ctx->pc == 0x2C2000u) {
        ctx->pc = 0x2C2000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FFCu;
        // 0x2c2000: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2004u;
        goto label_2c2004;
    }
    ctx->pc = 0x2C1FFCu;
    SET_GPR_U32(ctx, 31, 0x2C2004u);
    ctx->pc = 0x2C2000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FFCu;
    // 0x2c2000: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2C1FFCu, 0x2C2004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2004u;
label_2c2004:
    // 0x2c2004: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2c2004u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c2008:
    // 0x2c2008: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c2008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c200c:
    // 0x2c200c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c200cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2010:
    // 0x2c2010: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c2010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c2014:
    // 0x2c2014: 0xc136b18  jal         func_4DAC60
label_2c2018:
    if (ctx->pc == 0x2C2018u) {
        ctx->pc = 0x2C2018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2014u;
        // 0x2c2018: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C201Cu;
        goto label_2c201c;
    }
    ctx->pc = 0x2C2014u;
    SET_GPR_U32(ctx, 31, 0x2C201Cu);
    ctx->pc = 0x2C2018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2014u;
    // 0x2c2018: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x2C2014u, 0x2C201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C201Cu;
label_2c201c:
    // 0x2c201c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2c201cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c2020:
    // 0x2c2020: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2c2020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2c2024:
    // 0x2c2024: 0x7e620020  sq          $v0, 0x20($s3)
    ctx->pc = 0x2c2024u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
label_2c2028:
    // 0x2c2028: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2c2028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2c202c:
    // 0x2c202c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2c202cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2c2030:
    // 0x2c2030: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2c2030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2c2034:
    // 0x2c2034: 0x40f809  jalr        $v0
label_2c2038:
    if (ctx->pc == 0x2C2038u) {
        ctx->pc = 0x2C2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2034u;
        // 0x2c2038: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C203Cu;
        goto label_2c203c;
    }
    ctx->pc = 0x2C2034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C203Cu);
        ctx->pc = 0x2C2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2034u;
        // 0x2c2038: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2034u, 0x2C203Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C203Cu;
label_2c203c:
    // 0x2c203c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2c203cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c2040:
    // 0x2c2040: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2c2040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c2044:
    // 0x2c2044: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2c2044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c2048:
    // 0x2c2048: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2c2048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c204c:
    // 0x2c204c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2c204cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c2050:
    // 0x2c2050: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c2050u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c2054:
    // 0x2c2054: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c2054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c2058:
    // 0x2c2058: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2c2058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c205c:
    // 0x2c205c: 0x3e00008  jr          $ra
label_2c2060:
    if (ctx->pc == 0x2C2060u) {
        ctx->pc = 0x2C2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C205Cu;
        // 0x2c2060: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2064u;
        goto label_2c2064;
    }
    ctx->pc = 0x2C205Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C205Cu;
        // 0x2c2060: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C205Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2064u;
label_2c2064:
    // 0x2c2064: 0x0  nop
    ctx->pc = 0x2c2064u;
    // NOP
    ctx->pc = 0x2c2068u;
}
