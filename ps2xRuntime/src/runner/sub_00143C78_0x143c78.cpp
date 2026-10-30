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

// Function: sub_00143C78
// Address: 0x143c78 - 0x143ea0
void sub_00143C78_0x143c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143C78_0x143c78");
#endif

    switch (ctx->pc) {
        case 0x143c78u: goto label_143c78;
        case 0x143c7cu: goto label_143c7c;
        case 0x143c80u: goto label_143c80;
        case 0x143c84u: goto label_143c84;
        case 0x143c88u: goto label_143c88;
        case 0x143c8cu: goto label_143c8c;
        case 0x143c90u: goto label_143c90;
        case 0x143c94u: goto label_143c94;
        case 0x143c98u: goto label_143c98;
        case 0x143c9cu: goto label_143c9c;
        case 0x143ca0u: goto label_143ca0;
        case 0x143ca4u: goto label_143ca4;
        case 0x143ca8u: goto label_143ca8;
        case 0x143cacu: goto label_143cac;
        case 0x143cb0u: goto label_143cb0;
        case 0x143cb4u: goto label_143cb4;
        case 0x143cb8u: goto label_143cb8;
        case 0x143cbcu: goto label_143cbc;
        case 0x143cc0u: goto label_143cc0;
        case 0x143cc4u: goto label_143cc4;
        case 0x143cc8u: goto label_143cc8;
        case 0x143cccu: goto label_143ccc;
        case 0x143cd0u: goto label_143cd0;
        case 0x143cd4u: goto label_143cd4;
        case 0x143cd8u: goto label_143cd8;
        case 0x143cdcu: goto label_143cdc;
        case 0x143ce0u: goto label_143ce0;
        case 0x143ce4u: goto label_143ce4;
        case 0x143ce8u: goto label_143ce8;
        case 0x143cecu: goto label_143cec;
        case 0x143cf0u: goto label_143cf0;
        case 0x143cf4u: goto label_143cf4;
        case 0x143cf8u: goto label_143cf8;
        case 0x143cfcu: goto label_143cfc;
        case 0x143d00u: goto label_143d00;
        case 0x143d04u: goto label_143d04;
        case 0x143d08u: goto label_143d08;
        case 0x143d0cu: goto label_143d0c;
        case 0x143d10u: goto label_143d10;
        case 0x143d14u: goto label_143d14;
        case 0x143d18u: goto label_143d18;
        case 0x143d1cu: goto label_143d1c;
        case 0x143d20u: goto label_143d20;
        case 0x143d24u: goto label_143d24;
        case 0x143d28u: goto label_143d28;
        case 0x143d2cu: goto label_143d2c;
        case 0x143d30u: goto label_143d30;
        case 0x143d34u: goto label_143d34;
        case 0x143d38u: goto label_143d38;
        case 0x143d3cu: goto label_143d3c;
        case 0x143d40u: goto label_143d40;
        case 0x143d44u: goto label_143d44;
        case 0x143d48u: goto label_143d48;
        case 0x143d4cu: goto label_143d4c;
        case 0x143d50u: goto label_143d50;
        case 0x143d54u: goto label_143d54;
        case 0x143d58u: goto label_143d58;
        case 0x143d5cu: goto label_143d5c;
        case 0x143d60u: goto label_143d60;
        case 0x143d64u: goto label_143d64;
        case 0x143d68u: goto label_143d68;
        case 0x143d6cu: goto label_143d6c;
        case 0x143d70u: goto label_143d70;
        case 0x143d74u: goto label_143d74;
        case 0x143d78u: goto label_143d78;
        case 0x143d7cu: goto label_143d7c;
        case 0x143d80u: goto label_143d80;
        case 0x143d84u: goto label_143d84;
        case 0x143d88u: goto label_143d88;
        case 0x143d8cu: goto label_143d8c;
        case 0x143d90u: goto label_143d90;
        case 0x143d94u: goto label_143d94;
        case 0x143d98u: goto label_143d98;
        case 0x143d9cu: goto label_143d9c;
        case 0x143da0u: goto label_143da0;
        case 0x143da4u: goto label_143da4;
        case 0x143da8u: goto label_143da8;
        case 0x143dacu: goto label_143dac;
        case 0x143db0u: goto label_143db0;
        case 0x143db4u: goto label_143db4;
        case 0x143db8u: goto label_143db8;
        case 0x143dbcu: goto label_143dbc;
        case 0x143dc0u: goto label_143dc0;
        case 0x143dc4u: goto label_143dc4;
        case 0x143dc8u: goto label_143dc8;
        case 0x143dccu: goto label_143dcc;
        case 0x143dd0u: goto label_143dd0;
        case 0x143dd4u: goto label_143dd4;
        case 0x143dd8u: goto label_143dd8;
        case 0x143ddcu: goto label_143ddc;
        case 0x143de0u: goto label_143de0;
        case 0x143de4u: goto label_143de4;
        case 0x143de8u: goto label_143de8;
        case 0x143decu: goto label_143dec;
        case 0x143df0u: goto label_143df0;
        case 0x143df4u: goto label_143df4;
        case 0x143df8u: goto label_143df8;
        case 0x143dfcu: goto label_143dfc;
        case 0x143e00u: goto label_143e00;
        case 0x143e04u: goto label_143e04;
        case 0x143e08u: goto label_143e08;
        case 0x143e0cu: goto label_143e0c;
        case 0x143e10u: goto label_143e10;
        case 0x143e14u: goto label_143e14;
        case 0x143e18u: goto label_143e18;
        case 0x143e1cu: goto label_143e1c;
        case 0x143e20u: goto label_143e20;
        case 0x143e24u: goto label_143e24;
        case 0x143e28u: goto label_143e28;
        case 0x143e2cu: goto label_143e2c;
        case 0x143e30u: goto label_143e30;
        case 0x143e34u: goto label_143e34;
        case 0x143e38u: goto label_143e38;
        case 0x143e3cu: goto label_143e3c;
        case 0x143e40u: goto label_143e40;
        case 0x143e44u: goto label_143e44;
        case 0x143e48u: goto label_143e48;
        case 0x143e4cu: goto label_143e4c;
        case 0x143e50u: goto label_143e50;
        case 0x143e54u: goto label_143e54;
        case 0x143e58u: goto label_143e58;
        case 0x143e5cu: goto label_143e5c;
        case 0x143e60u: goto label_143e60;
        case 0x143e64u: goto label_143e64;
        case 0x143e68u: goto label_143e68;
        case 0x143e6cu: goto label_143e6c;
        case 0x143e70u: goto label_143e70;
        case 0x143e74u: goto label_143e74;
        case 0x143e78u: goto label_143e78;
        case 0x143e7cu: goto label_143e7c;
        case 0x143e80u: goto label_143e80;
        case 0x143e84u: goto label_143e84;
        case 0x143e88u: goto label_143e88;
        case 0x143e8cu: goto label_143e8c;
        case 0x143e90u: goto label_143e90;
        case 0x143e94u: goto label_143e94;
        case 0x143e98u: goto label_143e98;
        case 0x143e9cu: goto label_143e9c;
        default: break;
    }

    ctx->pc = 0x143c78u;

label_143c78:
    // 0x143c78: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x143c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_143c7c:
    // 0x143c7c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x143c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_143c80:
    // 0x143c80: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x143c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_143c84:
    // 0x143c84: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x143c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_143c88:
    // 0x143c88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x143c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_143c8c:
    // 0x143c8c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x143c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_143c90:
    // 0x143c90: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x143c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_143c94:
    // 0x143c94: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x143c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_143c98:
    // 0x143c98: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x143c98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_143c9c:
    // 0x143c9c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x143c9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_143ca0:
    // 0x143ca0: 0xe64c01a0  swc1        $f12, 0x1A0($s2)
    ctx->pc = 0x143ca0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
label_143ca4:
    // 0x143ca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x143ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_143ca8:
    // 0x143ca8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x143ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_143cac:
    // 0x143cac: 0x8c42deb8  lw          $v0, -0x2148($v0)
    ctx->pc = 0x143cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_143cb0:
    // 0x143cb0: 0xc44001d8  lwc1        $f0, 0x1D8($v0)
    ctx->pc = 0x143cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143cb4:
    // 0x143cb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x143cb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_143cb8:
    // 0x143cb8: 0x0  nop
    ctx->pc = 0x143cb8u;
    // NOP
label_143cbc:
    // 0x143cbc: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_143cc0:
    if (ctx->pc == 0x143CC0u) {
        ctx->pc = 0x143CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CBCu;
        // 0x143cc0: 0x8e4301f8  lw          $v1, 0x1F8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143CC4u;
        goto label_143cc4;
    }
    ctx->pc = 0x143CBCu;
    {
        const bool branch_taken_0x143cbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x143cbc) {
            ctx->pc = 0x143CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143CBCu;
            // 0x143cc0: 0x8e4301f8  lw          $v1, 0x1F8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143CE4u;
            goto label_143ce4;
        }
    }
    ctx->pc = 0x143CC4u;
label_143cc4:
    // 0x143cc4: 0xc44101dc  lwc1        $f1, 0x1DC($v0)
    ctx->pc = 0x143cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143cc8:
    // 0x143cc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_143ccc:
    // 0x143ccc: 0x0  nop
    ctx->pc = 0x143cccu;
    // NOP
label_143cd0:
    // 0x143cd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x143cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_143cd4:
    // 0x143cd4: 0x0  nop
    ctx->pc = 0x143cd4u;
    // NOP
label_143cd8:
    // 0x143cd8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_143cdc:
    if (ctx->pc == 0x143CDCu) {
        ctx->pc = 0x143CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CD8u;
        // 0x143cdc: 0xae4001f8  sw          $zero, 0x1F8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143CE0u;
        goto label_143ce0;
    }
    ctx->pc = 0x143CD8u;
    {
        const bool branch_taken_0x143cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143cd8) {
            ctx->pc = 0x143CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143CD8u;
            // 0x143cdc: 0xae4001f8  sw          $zero, 0x1F8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143CE0u;
            goto label_143ce0;
        }
    }
    ctx->pc = 0x143CE0u;
label_143ce0:
    // 0x143ce0: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x143ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
label_143ce4:
    // 0x143ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143ce8:
    // 0x143ce8: 0x54620061  bnel        $v1, $v0, . + 4 + (0x61 << 2)
label_143cec:
    if (ctx->pc == 0x143CECu) {
        ctx->pc = 0x143CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CE8u;
        // 0x143cec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143CF0u;
        goto label_143cf0;
    }
    ctx->pc = 0x143CE8u;
    {
        const bool branch_taken_0x143ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x143ce8) {
            ctx->pc = 0x143CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143CE8u;
            // 0x143cec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143E70u;
            goto label_143e70;
        }
    }
    ctx->pc = 0x143CF0u;
label_143cf0:
    // 0x143cf0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x143cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_143cf4:
    // 0x143cf4: 0x26510180  addiu       $s1, $s2, 0x180
    ctx->pc = 0x143cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_143cf8:
    // 0x143cf8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x143cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_143cfc:
    // 0x143cfc: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x143cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_143d00:
    // 0x143d00: 0x40f809  jalr        $v0
label_143d04:
    if (ctx->pc == 0x143D04u) {
        ctx->pc = 0x143D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D00u;
        // 0x143d04: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143D08u;
        goto label_143d08;
    }
    ctx->pc = 0x143D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143D08u);
        ctx->pc = 0x143D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D00u;
        // 0x143d04: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143D00u, 0x143D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143D08u;
label_143d08:
    // 0x143d08: 0xc65401f4  lwc1        $f20, 0x1F4($s2)
    ctx->pc = 0x143d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_143d0c:
    // 0x143d0c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x143d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_143d10:
    // 0x143d10: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x143d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_143d14:
    // 0x143d14: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x143d14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_143d18:
    // 0x143d18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x143d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_143d1c:
    // 0x143d1c: 0x26101740  addiu       $s0, $s0, 0x1740
    ctx->pc = 0x143d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
label_143d20:
    // 0x143d20: 0xc64101f0  lwc1        $f1, 0x1F0($s2)
    ctx->pc = 0x143d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143d24:
    // 0x143d24: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x143d24u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_143d28:
    // 0x143d28: 0xc64201a0  lwc1        $f2, 0x1A0($s2)
    ctx->pc = 0x143d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_143d2c:
    // 0x143d2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x143d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_143d30:
    // 0x143d30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x143d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_143d34:
    // 0x143d34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x143d34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_143d38:
    // 0x143d38: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x143d38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_143d3c:
    // 0x143d3c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x143d3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_143d40:
    // 0x143d40: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x143d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_143d44:
    // 0x143d44: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x143d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_143d48:
    // 0x143d48: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x143d48u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_143d4c:
    // 0x143d4c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x143d4cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_143d50:
    // 0x143d50: 0xc12e310  jal         func_4B8C40
label_143d54:
    if (ctx->pc == 0x143D54u) {
        ctx->pc = 0x143D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D50u;
        // 0x143d54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x143D58u;
        goto label_143d58;
    }
    ctx->pc = 0x143D50u;
    SET_GPR_U32(ctx, 31, 0x143D58u);
    ctx->pc = 0x143D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D50u;
    // 0x143d54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x143D50u, 0x143D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D58u;
label_143d58:
    // 0x143d58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x143d58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_143d5c:
    // 0x143d5c: 0xc12e29c  jal         func_4B8A70
label_143d60:
    if (ctx->pc == 0x143D60u) {
        ctx->pc = 0x143D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D5Cu;
        // 0x143d60: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x143D64u;
        goto label_143d64;
    }
    ctx->pc = 0x143D5Cu;
    SET_GPR_U32(ctx, 31, 0x143D64u);
    ctx->pc = 0x143D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D5Cu;
    // 0x143d60: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x143D5Cu, 0x143D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D64u;
label_143d64:
    // 0x143d64: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x143d64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_143d68:
    // 0x143d68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x143d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143d6c:
    // 0x143d6c: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x143d6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_143d70:
    // 0x143d70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x143d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_143d74:
    // 0x143d74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x143d74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_143d78:
    // 0x143d78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x143d78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_143d7c:
    // 0x143d7c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x143d7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_143d80:
    // 0x143d80: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x143d80u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_143d84:
    // 0x143d84: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x143d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_143d88:
    // 0x143d88: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x143d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_143d8c:
    // 0x143d8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x143d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_143d90:
    // 0x143d90: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x143d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_143d94:
    // 0x143d94: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x143d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143d98:
    // 0x143d98: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x143d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143d9c:
    // 0x143d9c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x143d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_143da0:
    // 0x143da0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x143da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_143da4:
    // 0x143da4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x143da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_143da8:
    // 0x143da8: 0xc136afa  jal         func_4DABE8
label_143dac:
    if (ctx->pc == 0x143DACu) {
        ctx->pc = 0x143DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DA8u;
        // 0x143dac: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x143DB0u;
        goto label_143db0;
    }
    ctx->pc = 0x143DA8u;
    SET_GPR_U32(ctx, 31, 0x143DB0u);
    ctx->pc = 0x143DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DA8u;
    // 0x143dac: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x143DA8u, 0x143DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DB0u;
label_143db0:
    // 0x143db0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x143db0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_143db4:
    // 0x143db4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x143db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143db8:
    // 0x143db8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x143db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_143dbc:
    // 0x143dbc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x143dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_143dc0:
    // 0x143dc0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x143dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_143dc4:
    // 0x143dc4: 0xc136b30  jal         func_4DACC0
label_143dc8:
    if (ctx->pc == 0x143DC8u) {
        ctx->pc = 0x143DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DC4u;
        // 0x143dc8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143DCCu;
        goto label_143dcc;
    }
    ctx->pc = 0x143DC4u;
    SET_GPR_U32(ctx, 31, 0x143DCCu);
    ctx->pc = 0x143DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DC4u;
    // 0x143dc8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x143DC4u, 0x143DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DCCu;
label_143dcc:
    // 0x143dcc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x143dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_143dd0:
    // 0x143dd0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x143dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143dd4:
    // 0x143dd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x143dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_143dd8:
    // 0x143dd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x143dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_143ddc:
    // 0x143ddc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x143ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_143de0:
    // 0x143de0: 0xc136b18  jal         func_4DAC60
label_143de4:
    if (ctx->pc == 0x143DE4u) {
        ctx->pc = 0x143DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DE0u;
        // 0x143de4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143DE8u;
        goto label_143de8;
    }
    ctx->pc = 0x143DE0u;
    SET_GPR_U32(ctx, 31, 0x143DE8u);
    ctx->pc = 0x143DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DE0u;
    // 0x143de4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x143DE0u, 0x143DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DE8u;
label_143de8:
    // 0x143de8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x143de8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_143dec:
    // 0x143dec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x143decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_143df0:
    // 0x143df0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x143df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_143df4:
    // 0x143df4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x143df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_143df8:
    // 0x143df8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x143df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_143dfc:
    // 0x143dfc: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x143dfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_143e00:
    // 0x143e00: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x143e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_143e04:
    // 0x143e04: 0x40f809  jalr        $v0
label_143e08:
    if (ctx->pc == 0x143E08u) {
        ctx->pc = 0x143E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E04u;
        // 0x143e08: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E0Cu;
        goto label_143e0c;
    }
    ctx->pc = 0x143E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143E0Cu);
        ctx->pc = 0x143E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E04u;
        // 0x143e08: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E04u, 0x143E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143E0Cu;
label_143e0c:
    // 0x143e0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x143e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_143e10:
    // 0x143e10: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x143e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_143e14:
    // 0x143e14: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x143e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_143e18:
    // 0x143e18: 0x40f809  jalr        $v0
label_143e1c:
    if (ctx->pc == 0x143E1Cu) {
        ctx->pc = 0x143E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E18u;
        // 0x143e1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E20u;
        goto label_143e20;
    }
    ctx->pc = 0x143E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143E20u);
        ctx->pc = 0x143E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E18u;
        // 0x143e1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E18u, 0x143E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143E20u;
label_143e20:
    // 0x143e20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x143e20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_143e24:
    // 0x143e24: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x143e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_143e28:
    // 0x143e28: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x143e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_143e2c:
    // 0x143e2c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x143e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_143e30:
    // 0x143e30: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x143e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_143e34:
    // 0x143e34: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x143e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_143e38:
    // 0x143e38: 0x40f809  jalr        $v0
label_143e3c:
    if (ctx->pc == 0x143E3Cu) {
        ctx->pc = 0x143E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E38u;
        // 0x143e3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E40u;
        goto label_143e40;
    }
    ctx->pc = 0x143E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143E40u);
        ctx->pc = 0x143E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E38u;
        // 0x143e3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E38u, 0x143E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143E40u;
label_143e40:
    // 0x143e40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x143e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143e44:
    // 0x143e44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x143e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_143e48:
    // 0x143e48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x143e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143e4c:
    // 0x143e4c: 0xc0cdc5a  jal         func_337168
label_143e50:
    if (ctx->pc == 0x143E50u) {
        ctx->pc = 0x143E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E4Cu;
        // 0x143e50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E54u;
        goto label_143e54;
    }
    ctx->pc = 0x143E4Cu;
    SET_GPR_U32(ctx, 31, 0x143E54u);
    ctx->pc = 0x143E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E4Cu;
    // 0x143e50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337168u, 0x143E4Cu, 0x143E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E54u;
label_143e54:
    // 0x143e54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_143e58:
    if (ctx->pc == 0x143E58u) {
        ctx->pc = 0x143E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E54u;
        // 0x143e58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E5Cu;
        goto label_143e5c;
    }
    ctx->pc = 0x143E54u;
    {
        const bool branch_taken_0x143e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E54u;
        // 0x143e58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e54) {
            ctx->pc = 0x143E6Cu;
            goto label_143e6c;
        }
    }
    ctx->pc = 0x143E5Cu;
label_143e5c:
    // 0x143e5c: 0xc0cd972  jal         func_3365C8
label_143e60:
    if (ctx->pc == 0x143E60u) {
        ctx->pc = 0x143E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E5Cu;
        // 0x143e60: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E64u;
        goto label_143e64;
    }
    ctx->pc = 0x143E5Cu;
    SET_GPR_U32(ctx, 31, 0x143E64u);
    ctx->pc = 0x143E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E5Cu;
    // 0x143e60: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x143E5Cu, 0x143E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E64u;
label_143e64:
    // 0x143e64: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x143e64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_143e68:
    // 0x143e68: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x143e68u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_143e6c:
    // 0x143e6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_143e70:
    // 0x143e70: 0xc04828c  jal         func_120A30
label_143e74:
    if (ctx->pc == 0x143E74u) {
        ctx->pc = 0x143E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E70u;
        // 0x143e74: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E78u;
        goto label_143e78;
    }
    ctx->pc = 0x143E70u;
    SET_GPR_U32(ctx, 31, 0x143E78u);
    ctx->pc = 0x143E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E70u;
    // 0x143e74: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x143E70u, 0x143E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E78u;
label_143e78:
    // 0x143e78: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x143e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_143e7c:
    // 0x143e7c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x143e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_143e80:
    // 0x143e80: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x143e80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_143e84:
    // 0x143e84: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x143e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_143e88:
    // 0x143e88: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x143e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_143e8c:
    // 0x143e8c: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x143e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_143e90:
    // 0x143e90: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x143e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_143e94:
    // 0x143e94: 0x3e00008  jr          $ra
label_143e98:
    if (ctx->pc == 0x143E98u) {
        ctx->pc = 0x143E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E94u;
        // 0x143e98: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E9Cu;
        goto label_143e9c;
    }
    ctx->pc = 0x143E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E94u;
        // 0x143e98: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143E9Cu;
label_143e9c:
    // 0x143e9c: 0x0  nop
    ctx->pc = 0x143e9cu;
    // NOP
    ctx->pc = 0x143ea0u;
}
