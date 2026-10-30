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

// Function: sub_00293E40
// Address: 0x293e40 - 0x294088
void sub_00293E40_0x293e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293E40_0x293e40");
#endif

    switch (ctx->pc) {
        case 0x293e40u: goto label_293e40;
        case 0x293e44u: goto label_293e44;
        case 0x293e48u: goto label_293e48;
        case 0x293e4cu: goto label_293e4c;
        case 0x293e50u: goto label_293e50;
        case 0x293e54u: goto label_293e54;
        case 0x293e58u: goto label_293e58;
        case 0x293e5cu: goto label_293e5c;
        case 0x293e60u: goto label_293e60;
        case 0x293e64u: goto label_293e64;
        case 0x293e68u: goto label_293e68;
        case 0x293e6cu: goto label_293e6c;
        case 0x293e70u: goto label_293e70;
        case 0x293e74u: goto label_293e74;
        case 0x293e78u: goto label_293e78;
        case 0x293e7cu: goto label_293e7c;
        case 0x293e80u: goto label_293e80;
        case 0x293e84u: goto label_293e84;
        case 0x293e88u: goto label_293e88;
        case 0x293e8cu: goto label_293e8c;
        case 0x293e90u: goto label_293e90;
        case 0x293e94u: goto label_293e94;
        case 0x293e98u: goto label_293e98;
        case 0x293e9cu: goto label_293e9c;
        case 0x293ea0u: goto label_293ea0;
        case 0x293ea4u: goto label_293ea4;
        case 0x293ea8u: goto label_293ea8;
        case 0x293eacu: goto label_293eac;
        case 0x293eb0u: goto label_293eb0;
        case 0x293eb4u: goto label_293eb4;
        case 0x293eb8u: goto label_293eb8;
        case 0x293ebcu: goto label_293ebc;
        case 0x293ec0u: goto label_293ec0;
        case 0x293ec4u: goto label_293ec4;
        case 0x293ec8u: goto label_293ec8;
        case 0x293eccu: goto label_293ecc;
        case 0x293ed0u: goto label_293ed0;
        case 0x293ed4u: goto label_293ed4;
        case 0x293ed8u: goto label_293ed8;
        case 0x293edcu: goto label_293edc;
        case 0x293ee0u: goto label_293ee0;
        case 0x293ee4u: goto label_293ee4;
        case 0x293ee8u: goto label_293ee8;
        case 0x293eecu: goto label_293eec;
        case 0x293ef0u: goto label_293ef0;
        case 0x293ef4u: goto label_293ef4;
        case 0x293ef8u: goto label_293ef8;
        case 0x293efcu: goto label_293efc;
        case 0x293f00u: goto label_293f00;
        case 0x293f04u: goto label_293f04;
        case 0x293f08u: goto label_293f08;
        case 0x293f0cu: goto label_293f0c;
        case 0x293f10u: goto label_293f10;
        case 0x293f14u: goto label_293f14;
        case 0x293f18u: goto label_293f18;
        case 0x293f1cu: goto label_293f1c;
        case 0x293f20u: goto label_293f20;
        case 0x293f24u: goto label_293f24;
        case 0x293f28u: goto label_293f28;
        case 0x293f2cu: goto label_293f2c;
        case 0x293f30u: goto label_293f30;
        case 0x293f34u: goto label_293f34;
        case 0x293f38u: goto label_293f38;
        case 0x293f3cu: goto label_293f3c;
        case 0x293f40u: goto label_293f40;
        case 0x293f44u: goto label_293f44;
        case 0x293f48u: goto label_293f48;
        case 0x293f4cu: goto label_293f4c;
        case 0x293f50u: goto label_293f50;
        case 0x293f54u: goto label_293f54;
        case 0x293f58u: goto label_293f58;
        case 0x293f5cu: goto label_293f5c;
        case 0x293f60u: goto label_293f60;
        case 0x293f64u: goto label_293f64;
        case 0x293f68u: goto label_293f68;
        case 0x293f6cu: goto label_293f6c;
        case 0x293f70u: goto label_293f70;
        case 0x293f74u: goto label_293f74;
        case 0x293f78u: goto label_293f78;
        case 0x293f7cu: goto label_293f7c;
        case 0x293f80u: goto label_293f80;
        case 0x293f84u: goto label_293f84;
        case 0x293f88u: goto label_293f88;
        case 0x293f8cu: goto label_293f8c;
        case 0x293f90u: goto label_293f90;
        case 0x293f94u: goto label_293f94;
        case 0x293f98u: goto label_293f98;
        case 0x293f9cu: goto label_293f9c;
        case 0x293fa0u: goto label_293fa0;
        case 0x293fa4u: goto label_293fa4;
        case 0x293fa8u: goto label_293fa8;
        case 0x293facu: goto label_293fac;
        case 0x293fb0u: goto label_293fb0;
        case 0x293fb4u: goto label_293fb4;
        case 0x293fb8u: goto label_293fb8;
        case 0x293fbcu: goto label_293fbc;
        case 0x293fc0u: goto label_293fc0;
        case 0x293fc4u: goto label_293fc4;
        case 0x293fc8u: goto label_293fc8;
        case 0x293fccu: goto label_293fcc;
        case 0x293fd0u: goto label_293fd0;
        case 0x293fd4u: goto label_293fd4;
        case 0x293fd8u: goto label_293fd8;
        case 0x293fdcu: goto label_293fdc;
        case 0x293fe0u: goto label_293fe0;
        case 0x293fe4u: goto label_293fe4;
        case 0x293fe8u: goto label_293fe8;
        case 0x293fecu: goto label_293fec;
        case 0x293ff0u: goto label_293ff0;
        case 0x293ff4u: goto label_293ff4;
        case 0x293ff8u: goto label_293ff8;
        case 0x293ffcu: goto label_293ffc;
        case 0x294000u: goto label_294000;
        case 0x294004u: goto label_294004;
        case 0x294008u: goto label_294008;
        case 0x29400cu: goto label_29400c;
        case 0x294010u: goto label_294010;
        case 0x294014u: goto label_294014;
        case 0x294018u: goto label_294018;
        case 0x29401cu: goto label_29401c;
        case 0x294020u: goto label_294020;
        case 0x294024u: goto label_294024;
        case 0x294028u: goto label_294028;
        case 0x29402cu: goto label_29402c;
        case 0x294030u: goto label_294030;
        case 0x294034u: goto label_294034;
        case 0x294038u: goto label_294038;
        case 0x29403cu: goto label_29403c;
        case 0x294040u: goto label_294040;
        case 0x294044u: goto label_294044;
        case 0x294048u: goto label_294048;
        case 0x29404cu: goto label_29404c;
        case 0x294050u: goto label_294050;
        case 0x294054u: goto label_294054;
        case 0x294058u: goto label_294058;
        case 0x29405cu: goto label_29405c;
        case 0x294060u: goto label_294060;
        case 0x294064u: goto label_294064;
        case 0x294068u: goto label_294068;
        case 0x29406cu: goto label_29406c;
        case 0x294070u: goto label_294070;
        case 0x294074u: goto label_294074;
        case 0x294078u: goto label_294078;
        case 0x29407cu: goto label_29407c;
        case 0x294080u: goto label_294080;
        case 0x294084u: goto label_294084;
        default: break;
    }

    ctx->pc = 0x293e40u;

label_293e40:
    // 0x293e40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x293e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_293e44:
    // 0x293e44: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x293e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_293e48:
    // 0x293e48: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x293e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_293e4c:
    // 0x293e4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x293e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_293e50:
    // 0x293e50: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x293e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_293e54:
    // 0x293e54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x293e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_293e58:
    // 0x293e58: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x293e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_293e5c:
    // 0x293e5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x293e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_293e60:
    // 0x293e60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x293e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_293e64:
    // 0x293e64: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x293e64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_293e68:
    // 0x293e68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x293e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_293e6c:
    // 0x293e6c: 0x84650028  lh          $a1, 0x28($v1)
    ctx->pc = 0x293e6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_293e70:
    // 0x293e70: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x293e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_293e74:
    // 0x293e74: 0x40f809  jalr        $v0
label_293e78:
    if (ctx->pc == 0x293E78u) {
        ctx->pc = 0x293E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E74u;
        // 0x293e78: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293E7Cu;
        goto label_293e7c;
    }
    ctx->pc = 0x293E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x293E7Cu);
        ctx->pc = 0x293E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E74u;
        // 0x293e78: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293E74u, 0x293E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x293E7Cu;
label_293e7c:
    // 0x293e7c: 0x32100004  andi        $s0, $s0, 0x4
    ctx->pc = 0x293e7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_293e80:
    // 0x293e80: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_293e84:
    if (ctx->pc == 0x293E84u) {
        ctx->pc = 0x293E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E80u;
        // 0x293e84: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293E88u;
        goto label_293e88;
    }
    ctx->pc = 0x293E80u;
    {
        const bool branch_taken_0x293e80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x293E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E80u;
        // 0x293e84: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e80) {
            ctx->pc = 0x293EF4u;
            goto label_293ef4;
        }
    }
    ctx->pc = 0x293E88u;
label_293e88:
    // 0x293e88: 0xc09443e  jal         func_2510F8
label_293e8c:
    if (ctx->pc == 0x293E8Cu) {
        ctx->pc = 0x293E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E88u;
        // 0x293e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293E90u;
        goto label_293e90;
    }
    ctx->pc = 0x293E88u;
    SET_GPR_U32(ctx, 31, 0x293E90u);
    ctx->pc = 0x293E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E88u;
    // 0x293e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2510F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2510F8u, 0x293E88u, 0x293E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E90u;
label_293e90:
    // 0x293e90: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_293e94:
    if (ctx->pc == 0x293E94u) {
        ctx->pc = 0x293E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E90u;
        // 0x293e94: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293E98u;
        goto label_293e98;
    }
    ctx->pc = 0x293E90u;
    {
        const bool branch_taken_0x293e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E90u;
        // 0x293e94: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e90) {
            ctx->pc = 0x293EF4u;
            goto label_293ef4;
        }
    }
    ctx->pc = 0x293E98u;
label_293e98:
    // 0x293e98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x293e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_293e9c:
    // 0x293e9c: 0xc0a4f42  jal         func_293D08
label_293ea0:
    if (ctx->pc == 0x293EA0u) {
        ctx->pc = 0x293EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E9Cu;
        // 0x293ea0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293EA4u;
        goto label_293ea4;
    }
    ctx->pc = 0x293E9Cu;
    SET_GPR_U32(ctx, 31, 0x293EA4u);
    ctx->pc = 0x293EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E9Cu;
    // 0x293ea0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293D08u, 0x293E9Cu, 0x293EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EA4u;
label_293ea4:
    // 0x293ea4: 0x10000070  b           . + 4 + (0x70 << 2)
label_293ea8:
    if (ctx->pc == 0x293EA8u) {
        ctx->pc = 0x293EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EA4u;
        // 0x293ea8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293EACu;
        goto label_293eac;
    }
    ctx->pc = 0x293EA4u;
    {
        const bool branch_taken_0x293ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EA4u;
        // 0x293ea8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ea4) {
            ctx->pc = 0x294068u;
            goto label_294068;
        }
    }
    ctx->pc = 0x293EACu;
label_293eac:
    // 0x293eac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293eb0:
    // 0x293eb0: 0x1000006c  b           . + 4 + (0x6C << 2)
label_293eb4:
    if (ctx->pc == 0x293EB4u) {
        ctx->pc = 0x293EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EB0u;
        // 0x293eb4: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293EB8u;
        goto label_293eb8;
    }
    ctx->pc = 0x293EB0u;
    {
        const bool branch_taken_0x293eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EB0u;
        // 0x293eb4: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293eb0) {
            ctx->pc = 0x294064u;
            goto label_294064;
        }
    }
    ctx->pc = 0x293EB8u;
label_293eb8:
    // 0x293eb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x293eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_293ebc:
    // 0x293ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_293ec0:
    // 0x293ec0: 0xc0a5022  jal         func_294088
label_293ec4:
    if (ctx->pc == 0x293EC4u) {
        ctx->pc = 0x293EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EC0u;
        // 0x293ec4: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293EC8u;
        goto label_293ec8;
    }
    ctx->pc = 0x293EC0u;
    SET_GPR_U32(ctx, 31, 0x293EC8u);
    ctx->pc = 0x293EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EC0u;
    // 0x293ec4: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294088u, 0x293EC0u, 0x293EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EC8u;
label_293ec8:
    // 0x293ec8: 0x10000066  b           . + 4 + (0x66 << 2)
label_293ecc:
    if (ctx->pc == 0x293ECCu) {
        ctx->pc = 0x293ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EC8u;
        // 0x293ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293ED0u;
        goto label_293ed0;
    }
    ctx->pc = 0x293EC8u;
    {
        const bool branch_taken_0x293ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EC8u;
        // 0x293ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ec8) {
            ctx->pc = 0x294064u;
            goto label_294064;
        }
    }
    ctx->pc = 0x293ED0u;
label_293ed0:
    // 0x293ed0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x293ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_293ed4:
    // 0x293ed4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x293ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_293ed8:
    // 0x293ed8: 0x2442e978  addiu       $v0, $v0, -0x1688
    ctx->pc = 0x293ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961528));
label_293edc:
    // 0x293edc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x293edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_293ee0:
    // 0x293ee0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x293ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_293ee4:
    // 0x293ee4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x293ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_293ee8:
    // 0x293ee8: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x293ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
label_293eec:
    // 0x293eec: 0x1000005c  b           . + 4 + (0x5C << 2)
label_293ef0:
    if (ctx->pc == 0x293EF0u) {
        ctx->pc = 0x293EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EECu;
        // 0x293ef0: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293EF4u;
        goto label_293ef4;
    }
    ctx->pc = 0x293EECu;
    {
        const bool branch_taken_0x293eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EECu;
        // 0x293ef0: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293eec) {
            ctx->pc = 0x294060u;
            goto label_294060;
        }
    }
    ctx->pc = 0x293EF4u;
label_293ef4:
    // 0x293ef4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_293ef8:
    // 0x293ef8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x293ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_293efc:
    // 0x293efc: 0x2442e978  addiu       $v0, $v0, -0x1688
    ctx->pc = 0x293efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961528));
label_293f00:
    // 0x293f00: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x293f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_293f04:
    // 0x293f04: 0x2468eab8  addiu       $t0, $v1, -0x1548
    ctx->pc = 0x293f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961848));
label_293f08:
    // 0x293f08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x293f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293f0c:
    // 0x293f0c: 0x24944b00  addiu       $s4, $a0, 0x4B00
    ctx->pc = 0x293f0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_293f10:
    // 0x293f10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293f14:
    // 0x293f14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x293f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293f18:
    // 0x293f18: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x293f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_293f1c:
    // 0x293f1c: 0x0  nop
    ctx->pc = 0x293f1cu;
    // NOP
label_293f20:
    // 0x293f20: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x293f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
label_293f24:
    // 0x293f24: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x293f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_293f28:
    // 0x293f28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x293f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_293f2c:
    // 0x293f2c: 0x872004  sllv        $a0, $a3, $a0
    ctx->pc = 0x293f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_293f30:
    // 0x293f30: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x293f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_293f34:
    // 0x293f34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x293f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_293f38:
    // 0x293f38: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x293f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_293f3c:
    // 0x293f3c: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
label_293f40:
    if (ctx->pc == 0x293F40u) {
        ctx->pc = 0x293F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F3Cu;
        // 0x293f40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293F44u;
        goto label_293f44;
    }
    ctx->pc = 0x293F3Cu;
    {
        const bool branch_taken_0x293f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x293f3c) {
            ctx->pc = 0x293F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293F3Cu;
            // 0x293f40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294008u;
            goto label_294008;
        }
    }
    ctx->pc = 0x293F44u;
label_293f44:
    // 0x293f44: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x293f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_293f48:
    // 0x293f48: 0x5452002f  bnel        $v0, $s2, . + 4 + (0x2F << 2)
label_293f4c:
    if (ctx->pc == 0x293F4Cu) {
        ctx->pc = 0x293F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F48u;
        // 0x293f4c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293F50u;
        goto label_293f50;
    }
    ctx->pc = 0x293F48u;
    {
        const bool branch_taken_0x293f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x293f48) {
            ctx->pc = 0x293F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293F48u;
            // 0x293f4c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294008u;
            goto label_294008;
        }
    }
    ctx->pc = 0x293F50u;
label_293f50:
    // 0x293f50: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x293f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_293f54:
    // 0x293f54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x293f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_293f58:
    // 0x293f58: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
label_293f5c:
    if (ctx->pc == 0x293F5Cu) {
        ctx->pc = 0x293F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F58u;
        // 0x293f5c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293F60u;
        goto label_293f60;
    }
    ctx->pc = 0x293F58u;
    {
        const bool branch_taken_0x293f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x293F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F58u;
        // 0x293f5c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f58) {
            ctx->pc = 0x294060u;
            goto label_294060;
        }
    }
    ctx->pc = 0x293F60u;
label_293f60:
    // 0x293f60: 0xc0e409a  jal         func_390268
label_293f64:
    if (ctx->pc == 0x293F64u) {
        ctx->pc = 0x293F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F60u;
        // 0x293f64: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293F68u;
        goto label_293f68;
    }
    ctx->pc = 0x293F60u;
    SET_GPR_U32(ctx, 31, 0x293F68u);
    ctx->pc = 0x293F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F60u;
    // 0x293f64: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x293F60u, 0x293F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F68u;
label_293f68:
    // 0x293f68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x293f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293f6c:
    // 0x293f6c: 0x1220ffcf  beqz        $s1, . + 4 + (-0x31 << 2)
label_293f70:
    if (ctx->pc == 0x293F70u) {
        ctx->pc = 0x293F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F6Cu;
        // 0x293f70: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293F74u;
        goto label_293f74;
    }
    ctx->pc = 0x293F6Cu;
    {
        const bool branch_taken_0x293f6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x293F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F6Cu;
        // 0x293f70: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f6c) {
            ctx->pc = 0x293EACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293eac;
        }
    }
    ctx->pc = 0x293F74u;
label_293f74:
    // 0x293f74: 0xc0e409a  jal         func_390268
label_293f78:
    if (ctx->pc == 0x293F78u) {
        ctx->pc = 0x293F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F74u;
        // 0x293f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293F7Cu;
        goto label_293f7c;
    }
    ctx->pc = 0x293F74u;
    SET_GPR_U32(ctx, 31, 0x293F7Cu);
    ctx->pc = 0x293F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F74u;
    // 0x293f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x293F74u, 0x293F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F7Cu;
label_293f7c:
    // 0x293f7c: 0x86260092  lh          $a2, 0x92($s1)
    ctx->pc = 0x293f7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_293f80:
    // 0x293f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293f84:
    // 0x293f84: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x293f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_293f88:
    // 0x293f88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x293f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_293f8c:
    // 0x293f8c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x293f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_293f90:
    // 0x293f90: 0xc136afa  jal         func_4DABE8
label_293f94:
    if (ctx->pc == 0x293F94u) {
        ctx->pc = 0x293F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F90u;
        // 0x293f94: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293F98u;
        goto label_293f98;
    }
    ctx->pc = 0x293F90u;
    SET_GPR_U32(ctx, 31, 0x293F98u);
    ctx->pc = 0x293F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F90u;
    // 0x293f94: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x293F90u, 0x293F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F98u;
label_293f98:
    // 0x293f98: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x293f98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_293f9c:
    // 0x293f9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x293f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_293fa0:
    // 0x293fa0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x293fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_293fa4:
    // 0x293fa4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x293fa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_293fa8:
    // 0x293fa8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x293fa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_293fac:
    // 0x293fac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x293facu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_293fb0:
    // 0x293fb0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x293fb0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_293fb4:
    // 0x293fb4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x293fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_293fb8:
    // 0x293fb8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x293fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_293fbc:
    // 0x293fbc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x293fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_293fc0:
    // 0x293fc0: 0x86060092  lh          $a2, 0x92($s0)
    ctx->pc = 0x293fc0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_293fc4:
    // 0x293fc4: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x293fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_293fc8:
    // 0x293fc8: 0xc136afa  jal         func_4DABE8
label_293fcc:
    if (ctx->pc == 0x293FCCu) {
        ctx->pc = 0x293FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FC8u;
        // 0x293fcc: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293FD0u;
        goto label_293fd0;
    }
    ctx->pc = 0x293FC8u;
    SET_GPR_U32(ctx, 31, 0x293FD0u);
    ctx->pc = 0x293FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293FC8u;
    // 0x293fcc: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x293FC8u, 0x293FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FD0u;
label_293fd0:
    // 0x293fd0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x293fd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_293fd4:
    // 0x293fd4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x293fd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_293fd8:
    // 0x293fd8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x293fd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_293fdc:
    // 0x293fdc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x293fdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_293fe0:
    // 0x293fe0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x293fe0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_293fe4:
    // 0x293fe4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x293fe4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_293fe8:
    // 0x293fe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293fec:
    // 0x293fec: 0x0  nop
    ctx->pc = 0x293fecu;
    // NOP
label_293ff0:
    // 0x293ff0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x293ff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_293ff4:
    // 0x293ff4: 0x0  nop
    ctx->pc = 0x293ff4u;
    // NOP
label_293ff8:
    // 0x293ff8: 0x4501ffaf  bc1t        . + 4 + (-0x51 << 2)
label_293ffc:
    if (ctx->pc == 0x293FFCu) {
        ctx->pc = 0x293FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FF8u;
        // 0x293ffc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294000u;
        goto label_294000;
    }
    ctx->pc = 0x293FF8u;
    {
        const bool branch_taken_0x293ff8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x293FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FF8u;
        // 0x293ffc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ff8) {
            ctx->pc = 0x293EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293eb8;
        }
    }
    ctx->pc = 0x294000u;
label_294000:
    // 0x294000: 0x10000018  b           . + 4 + (0x18 << 2)
label_294004:
    if (ctx->pc == 0x294004u) {
        ctx->pc = 0x294004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294000u;
        // 0x294004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294008u;
        goto label_294008;
    }
    ctx->pc = 0x294000u;
    {
        const bool branch_taken_0x294000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294000u;
        // 0x294004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294000) {
            ctx->pc = 0x294064u;
            goto label_294064;
        }
    }
    ctx->pc = 0x294008u;
label_294008:
    // 0x294008: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x294008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_29400c:
    // 0x29400c: 0x2ca20028  sltiu       $v0, $a1, 0x28
    ctx->pc = 0x29400cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
label_294010:
    // 0x294010: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_294014:
    if (ctx->pc == 0x294014u) {
        ctx->pc = 0x294014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294010u;
        // 0x294014: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294018u;
        goto label_294018;
    }
    ctx->pc = 0x294010u;
    {
        const bool branch_taken_0x294010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294010u;
        // 0x294014: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294010) {
            ctx->pc = 0x293F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293f20;
        }
    }
    ctx->pc = 0x294018u;
label_294018:
    // 0x294018: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x294018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_29401c:
    // 0x29401c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29401cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294020:
    // 0x294020: 0x2448eab8  addiu       $t0, $v0, -0x1548
    ctx->pc = 0x294020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961848));
label_294024:
    // 0x294024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x294024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294028:
    // 0x294028: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x294028u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_29402c:
    // 0x29402c: 0x0  nop
    ctx->pc = 0x29402cu;
    // NOP
label_294030:
    // 0x294030: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x294030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_294034:
    // 0x294034: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x294034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_294038:
    // 0x294038: 0x653804  sllv        $a3, $a1, $v1
    ctx->pc = 0x294038u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_29403c:
    // 0x29403c: 0x483021  addu        $a2, $v0, $t0
    ctx->pc = 0x29403cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_294040:
    // 0x294040: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x294040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_294044:
    // 0x294044: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x294044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_294048:
    // 0x294048: 0x1040ffa1  beqz        $v0, . + 4 + (-0x5F << 2)
label_29404c:
    if (ctx->pc == 0x29404Cu) {
        ctx->pc = 0x29404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294048u;
        // 0x29404c: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294050u;
        goto label_294050;
    }
    ctx->pc = 0x294048u;
    {
        const bool branch_taken_0x294048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294048u;
        // 0x29404c: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294048) {
            ctx->pc = 0x293ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293ed0;
        }
    }
    ctx->pc = 0x294050u;
label_294050:
    // 0x294050: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x294050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_294054:
    // 0x294054: 0x2c820028  sltiu       $v0, $a0, 0x28
    ctx->pc = 0x294054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
label_294058:
    // 0x294058: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_29405c:
    if (ctx->pc == 0x29405Cu) {
        ctx->pc = 0x29405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294058u;
        // 0x29405c: 0x41142  srl         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294060u;
        goto label_294060;
    }
    ctx->pc = 0x294058u;
    {
        const bool branch_taken_0x294058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294058u;
        // 0x29405c: 0x41142  srl         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294058) {
            ctx->pc = 0x294030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294030;
        }
    }
    ctx->pc = 0x294060u;
label_294060:
    // 0x294060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294064:
    // 0x294064: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x294064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_294068:
    // 0x294068: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x294068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29406c:
    // 0x29406c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x29406cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_294070:
    // 0x294070: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x294070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_294074:
    // 0x294074: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x294074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_294078:
    // 0x294078: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x294078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29407c:
    // 0x29407c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x29407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_294080:
    // 0x294080: 0x3e00008  jr          $ra
label_294084:
    if (ctx->pc == 0x294084u) {
        ctx->pc = 0x294084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294080u;
        // 0x294084: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294088u;
        goto label_fallthrough_0x294080;
    }
    ctx->pc = 0x294080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294080u;
        // 0x294084: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x294080:
    ctx->pc = 0x294088u;
}
