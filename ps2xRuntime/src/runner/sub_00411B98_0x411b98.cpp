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

// Function: sub_00411B98
// Address: 0x411b98 - 0x411d10
void sub_00411B98_0x411b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411B98_0x411b98");
#endif

    switch (ctx->pc) {
        case 0x411b98u: goto label_411b98;
        case 0x411b9cu: goto label_411b9c;
        case 0x411ba0u: goto label_411ba0;
        case 0x411ba4u: goto label_411ba4;
        case 0x411ba8u: goto label_411ba8;
        case 0x411bacu: goto label_411bac;
        case 0x411bb0u: goto label_411bb0;
        case 0x411bb4u: goto label_411bb4;
        case 0x411bb8u: goto label_411bb8;
        case 0x411bbcu: goto label_411bbc;
        case 0x411bc0u: goto label_411bc0;
        case 0x411bc4u: goto label_411bc4;
        case 0x411bc8u: goto label_411bc8;
        case 0x411bccu: goto label_411bcc;
        case 0x411bd0u: goto label_411bd0;
        case 0x411bd4u: goto label_411bd4;
        case 0x411bd8u: goto label_411bd8;
        case 0x411bdcu: goto label_411bdc;
        case 0x411be0u: goto label_411be0;
        case 0x411be4u: goto label_411be4;
        case 0x411be8u: goto label_411be8;
        case 0x411becu: goto label_411bec;
        case 0x411bf0u: goto label_411bf0;
        case 0x411bf4u: goto label_411bf4;
        case 0x411bf8u: goto label_411bf8;
        case 0x411bfcu: goto label_411bfc;
        case 0x411c00u: goto label_411c00;
        case 0x411c04u: goto label_411c04;
        case 0x411c08u: goto label_411c08;
        case 0x411c0cu: goto label_411c0c;
        case 0x411c10u: goto label_411c10;
        case 0x411c14u: goto label_411c14;
        case 0x411c18u: goto label_411c18;
        case 0x411c1cu: goto label_411c1c;
        case 0x411c20u: goto label_411c20;
        case 0x411c24u: goto label_411c24;
        case 0x411c28u: goto label_411c28;
        case 0x411c2cu: goto label_411c2c;
        case 0x411c30u: goto label_411c30;
        case 0x411c34u: goto label_411c34;
        case 0x411c38u: goto label_411c38;
        case 0x411c3cu: goto label_411c3c;
        case 0x411c40u: goto label_411c40;
        case 0x411c44u: goto label_411c44;
        case 0x411c48u: goto label_411c48;
        case 0x411c4cu: goto label_411c4c;
        case 0x411c50u: goto label_411c50;
        case 0x411c54u: goto label_411c54;
        case 0x411c58u: goto label_411c58;
        case 0x411c5cu: goto label_411c5c;
        case 0x411c60u: goto label_411c60;
        case 0x411c64u: goto label_411c64;
        case 0x411c68u: goto label_411c68;
        case 0x411c6cu: goto label_411c6c;
        case 0x411c70u: goto label_411c70;
        case 0x411c74u: goto label_411c74;
        case 0x411c78u: goto label_411c78;
        case 0x411c7cu: goto label_411c7c;
        case 0x411c80u: goto label_411c80;
        case 0x411c84u: goto label_411c84;
        case 0x411c88u: goto label_411c88;
        case 0x411c8cu: goto label_411c8c;
        case 0x411c90u: goto label_411c90;
        case 0x411c94u: goto label_411c94;
        case 0x411c98u: goto label_411c98;
        case 0x411c9cu: goto label_411c9c;
        case 0x411ca0u: goto label_411ca0;
        case 0x411ca4u: goto label_411ca4;
        case 0x411ca8u: goto label_411ca8;
        case 0x411cacu: goto label_411cac;
        case 0x411cb0u: goto label_411cb0;
        case 0x411cb4u: goto label_411cb4;
        case 0x411cb8u: goto label_411cb8;
        case 0x411cbcu: goto label_411cbc;
        case 0x411cc0u: goto label_411cc0;
        case 0x411cc4u: goto label_411cc4;
        case 0x411cc8u: goto label_411cc8;
        case 0x411cccu: goto label_411ccc;
        case 0x411cd0u: goto label_411cd0;
        case 0x411cd4u: goto label_411cd4;
        case 0x411cd8u: goto label_411cd8;
        case 0x411cdcu: goto label_411cdc;
        case 0x411ce0u: goto label_411ce0;
        case 0x411ce4u: goto label_411ce4;
        case 0x411ce8u: goto label_411ce8;
        case 0x411cecu: goto label_411cec;
        case 0x411cf0u: goto label_411cf0;
        case 0x411cf4u: goto label_411cf4;
        case 0x411cf8u: goto label_411cf8;
        case 0x411cfcu: goto label_411cfc;
        case 0x411d00u: goto label_411d00;
        case 0x411d04u: goto label_411d04;
        case 0x411d08u: goto label_411d08;
        case 0x411d0cu: goto label_411d0c;
        default: break;
    }

    ctx->pc = 0x411b98u;

label_411b98:
    // 0x411b98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x411b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_411b9c:
    // 0x411b9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x411b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_411ba0:
    // 0x411ba0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x411ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_411ba4:
    // 0x411ba4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x411ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_411ba8:
    // 0x411ba8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x411ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_411bac:
    // 0x411bac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x411bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_411bb0:
    // 0x411bb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x411bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_411bb4:
    // 0x411bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x411bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_411bb8:
    // 0x411bb8: 0x8c4347ec  lw          $v1, 0x47EC($v0)
    ctx->pc = 0x411bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18412)));
label_411bbc:
    // 0x411bbc: 0x8c622160  lw          $v0, 0x2160($v1)
    ctx->pc = 0x411bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8544)));
label_411bc0:
    // 0x411bc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_411bc4:
    if (ctx->pc == 0x411BC4u) {
        ctx->pc = 0x411BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411BC0u;
        // 0x411bc4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411BC8u;
        goto label_411bc8;
    }
    ctx->pc = 0x411BC0u;
    {
        const bool branch_taken_0x411bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x411BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411BC0u;
        // 0x411bc4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411bc0) {
            ctx->pc = 0x411BE4u;
            goto label_411be4;
        }
    }
    ctx->pc = 0x411BC8u;
label_411bc8:
    // 0x411bc8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x411bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_411bcc:
    // 0x411bcc: 0x8c43539c  lw          $v1, 0x539C($v0)
    ctx->pc = 0x411bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21404)));
label_411bd0:
    // 0x411bd0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_411bd4:
    if (ctx->pc == 0x411BD4u) {
        ctx->pc = 0x411BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411BD0u;
        // 0x411bd4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411BD8u;
        goto label_411bd8;
    }
    ctx->pc = 0x411BD0u;
    {
        const bool branch_taken_0x411bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x411BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411BD0u;
        // 0x411bd4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411bd0) {
            ctx->pc = 0x411BE8u;
            goto label_411be8;
        }
    }
    ctx->pc = 0x411BD8u;
label_411bd8:
    // 0x411bd8: 0xc12fbcc  jal         func_4BEF30
label_411bdc:
    if (ctx->pc == 0x411BDCu) {
        ctx->pc = 0x411BE0u;
        goto label_411be0;
    }
    ctx->pc = 0x411BD8u;
    SET_GPR_U32(ctx, 31, 0x411BE0u);
    ctx->pc = 0x4BEF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BEF30u, 0x411BD8u, 0x411BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411BE0u;
label_411be0:
    // 0x411be0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x411be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411be4:
    // 0x411be4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x411be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_411be8:
    // 0x411be8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x411be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_411bec:
    // 0x411bec: 0x8c62ced0  lw          $v0, -0x3130($v1)
    ctx->pc = 0x411becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954704)));
label_411bf0:
    // 0x411bf0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x411bf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_411bf4:
    // 0x411bf4: 0x8c853790  lw          $a1, 0x3790($a0)
    ctx->pc = 0x411bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14224)));
label_411bf8:
    // 0x411bf8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x411bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_411bfc:
    // 0x411bfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x411bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_411c00:
    // 0x411c00: 0x1065003a  beq         $v1, $a1, . + 4 + (0x3A << 2)
label_411c04:
    if (ctx->pc == 0x411C04u) {
        ctx->pc = 0x411C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C00u;
        // 0x411c04: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C08u;
        goto label_411c08;
    }
    ctx->pc = 0x411C00u;
    {
        const bool branch_taken_0x411c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x411C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C00u;
        // 0x411c04: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411c00) {
            ctx->pc = 0x411CECu;
            goto label_411cec;
        }
    }
    ctx->pc = 0x411C08u;
label_411c08:
    // 0x411c08: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_411c0c:
    if (ctx->pc == 0x411C0Cu) {
        ctx->pc = 0x411C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C08u;
        // 0x411c0c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C10u;
        goto label_411c10;
    }
    ctx->pc = 0x411C08u;
    {
        const bool branch_taken_0x411c08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x411C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C08u;
        // 0x411c0c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411c08) {
            ctx->pc = 0x411C84u;
            goto label_411c84;
        }
    }
    ctx->pc = 0x411C10u;
label_411c10:
    // 0x411c10: 0xc0cdfb6  jal         func_337ED8
label_411c14:
    if (ctx->pc == 0x411C14u) {
        ctx->pc = 0x411C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C10u;
        // 0x411c14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C18u;
        goto label_411c18;
    }
    ctx->pc = 0x411C10u;
    SET_GPR_U32(ctx, 31, 0x411C18u);
    ctx->pc = 0x411C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411C10u;
    // 0x411c14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337ED8u, 0x411C10u, 0x411C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411C18u;
label_411c18:
    // 0x411c18: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x411c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_411c1c:
    // 0x411c1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x411c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_411c20:
    // 0x411c20: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x411c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_411c24:
    // 0x411c24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x411c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_411c28:
    // 0x411c28: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x411c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_411c2c:
    // 0x411c2c: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x411c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_411c30:
    // 0x411c30: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x411c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_411c34:
    // 0x411c34: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x411c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_411c38:
    // 0x411c38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x411c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_411c3c:
    // 0x411c3c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x411c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_411c40:
    // 0x411c40: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x411c40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_411c44:
    // 0x411c44: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x411c44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_411c48:
    // 0x411c48: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x411c48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_411c4c:
    // 0x411c4c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x411c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_411c50:
    // 0x411c50: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x411c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_411c54:
    // 0x411c54: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x411c54u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_411c58:
    // 0x411c58: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x411c58u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_411c5c:
    // 0x411c5c: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x411c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_411c60:
    // 0x411c60: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x411c60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_411c64:
    // 0x411c64: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x411c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_411c68:
    // 0x411c68: 0xc05e9ce  jal         func_17A738
label_411c6c:
    if (ctx->pc == 0x411C6Cu) {
        ctx->pc = 0x411C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C68u;
        // 0x411c6c: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C70u;
        goto label_411c70;
    }
    ctx->pc = 0x411C68u;
    SET_GPR_U32(ctx, 31, 0x411C70u);
    ctx->pc = 0x411C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411C68u;
    // 0x411c6c: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A738u, 0x411C68u, 0x411C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411C70u;
label_411c70:
    // 0x411c70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x411c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_411c74:
    // 0x411c74: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_411c78:
    if (ctx->pc == 0x411C78u) {
        ctx->pc = 0x411C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C74u;
        // 0x411c78: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C7Cu;
        goto label_411c7c;
    }
    ctx->pc = 0x411C74u;
    {
        const bool branch_taken_0x411c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x411C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C74u;
        // 0x411c78: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411c74) {
            ctx->pc = 0x411C84u;
            goto label_411c84;
        }
    }
    ctx->pc = 0x411C7Cu;
label_411c7c:
    // 0x411c7c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_411c80:
    if (ctx->pc == 0x411C80u) {
        ctx->pc = 0x411C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C7Cu;
        // 0x411c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C84u;
        goto label_411c84;
    }
    ctx->pc = 0x411C7Cu;
    {
        const bool branch_taken_0x411c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C7Cu;
        // 0x411c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411c7c) {
            ctx->pc = 0x411CF4u;
            goto label_411cf4;
        }
    }
    ctx->pc = 0x411C84u;
label_411c84:
    // 0x411c84: 0x8c6247f4  lw          $v0, 0x47F4($v1)
    ctx->pc = 0x411c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18420)));
label_411c88:
    // 0x411c88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x411c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_411c8c:
    // 0x411c8c: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_411c90:
    if (ctx->pc == 0x411C90u) {
        ctx->pc = 0x411C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C8Cu;
        // 0x411c90: 0xac6247f4  sw          $v0, 0x47F4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C94u;
        goto label_411c94;
    }
    ctx->pc = 0x411C8Cu;
    {
        const bool branch_taken_0x411c8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x411C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C8Cu;
        // 0x411c90: 0xac6247f4  sw          $v0, 0x47F4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411c8c) {
            ctx->pc = 0x411CECu;
            goto label_411cec;
        }
    }
    ctx->pc = 0x411C94u;
label_411c94:
    // 0x411c94: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x411c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_411c98:
    // 0x411c98: 0x8c6247e4  lw          $v0, 0x47E4($v1)
    ctx->pc = 0x411c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18404)));
label_411c9c:
    // 0x411c9c: 0x40f809  jalr        $v0
label_411ca0:
    if (ctx->pc == 0x411CA0u) {
        ctx->pc = 0x411CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C9Cu;
        // 0x411ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411CA4u;
        goto label_411ca4;
    }
    ctx->pc = 0x411C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411CA4u);
        ctx->pc = 0x411CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411C9Cu;
        // 0x411ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411C9Cu, 0x411CA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411CA4u;
label_411ca4:
    // 0x411ca4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x411ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_411ca8:
    // 0x411ca8: 0xc103a34  jal         func_40E8D0
label_411cac:
    if (ctx->pc == 0x411CACu) {
        ctx->pc = 0x411CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411CA8u;
        // 0x411cac: 0x8c6447c4  lw          $a0, 0x47C4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411CB0u;
        goto label_411cb0;
    }
    ctx->pc = 0x411CA8u;
    SET_GPR_U32(ctx, 31, 0x411CB0u);
    ctx->pc = 0x411CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411CA8u;
    // 0x411cac: 0x8c6447c4  lw          $a0, 0x47C4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x411CA8u, 0x411CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411CB0u;
label_411cb0:
    // 0x411cb0: 0x8e63ced0  lw          $v1, -0x3130($s3)
    ctx->pc = 0x411cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954704)));
label_411cb4:
    // 0x411cb4: 0x244208f8  addiu       $v0, $v0, 0x8F8
    ctx->pc = 0x411cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2296));
label_411cb8:
    // 0x411cb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x411cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_411cbc:
    // 0x411cbc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x411cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_411cc0:
    // 0x411cc0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x411cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_411cc4:
    // 0x411cc4: 0x42942  srl         $a1, $a0, 5
    ctx->pc = 0x411cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_411cc8:
    // 0x411cc8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x411cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_411ccc:
    // 0x411ccc: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x411cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_411cd0:
    // 0x411cd0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x411cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_411cd4:
    // 0x411cd4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x411cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_411cd8:
    // 0x411cd8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x411cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_411cdc:
    // 0x411cdc: 0x863004  sllv        $a2, $a2, $a0
    ctx->pc = 0x411cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_411ce0:
    // 0x411ce0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x411ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_411ce4:
    // 0x411ce4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x411ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_411ce8:
    // 0x411ce8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x411ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_411cec:
    // 0x411cec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x411cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411cf0:
    // 0x411cf0: 0x232100b  movn        $v0, $s1, $s2
    ctx->pc = 0x411cf0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_411cf4:
    // 0x411cf4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x411cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_411cf8:
    // 0x411cf8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x411cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_411cfc:
    // 0x411cfc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x411cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_411d00:
    // 0x411d00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x411d00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_411d04:
    // 0x411d04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x411d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_411d08:
    // 0x411d08: 0x3e00008  jr          $ra
label_411d0c:
    if (ctx->pc == 0x411D0Cu) {
        ctx->pc = 0x411D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411D08u;
        // 0x411d0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411D10u;
        goto label_fallthrough_0x411d08;
    }
    ctx->pc = 0x411D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411D08u;
        // 0x411d0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x411d08:
    ctx->pc = 0x411D10u;
}
