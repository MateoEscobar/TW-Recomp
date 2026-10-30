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

// Function: sub_002E8BC8
// Address: 0x2e8bc8 - 0x2e8da8
void sub_002E8BC8_0x2e8bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8BC8_0x2e8bc8");
#endif

    switch (ctx->pc) {
        case 0x2e8bc8u: goto label_2e8bc8;
        case 0x2e8bccu: goto label_2e8bcc;
        case 0x2e8bd0u: goto label_2e8bd0;
        case 0x2e8bd4u: goto label_2e8bd4;
        case 0x2e8bd8u: goto label_2e8bd8;
        case 0x2e8bdcu: goto label_2e8bdc;
        case 0x2e8be0u: goto label_2e8be0;
        case 0x2e8be4u: goto label_2e8be4;
        case 0x2e8be8u: goto label_2e8be8;
        case 0x2e8becu: goto label_2e8bec;
        case 0x2e8bf0u: goto label_2e8bf0;
        case 0x2e8bf4u: goto label_2e8bf4;
        case 0x2e8bf8u: goto label_2e8bf8;
        case 0x2e8bfcu: goto label_2e8bfc;
        case 0x2e8c00u: goto label_2e8c00;
        case 0x2e8c04u: goto label_2e8c04;
        case 0x2e8c08u: goto label_2e8c08;
        case 0x2e8c0cu: goto label_2e8c0c;
        case 0x2e8c10u: goto label_2e8c10;
        case 0x2e8c14u: goto label_2e8c14;
        case 0x2e8c18u: goto label_2e8c18;
        case 0x2e8c1cu: goto label_2e8c1c;
        case 0x2e8c20u: goto label_2e8c20;
        case 0x2e8c24u: goto label_2e8c24;
        case 0x2e8c28u: goto label_2e8c28;
        case 0x2e8c2cu: goto label_2e8c2c;
        case 0x2e8c30u: goto label_2e8c30;
        case 0x2e8c34u: goto label_2e8c34;
        case 0x2e8c38u: goto label_2e8c38;
        case 0x2e8c3cu: goto label_2e8c3c;
        case 0x2e8c40u: goto label_2e8c40;
        case 0x2e8c44u: goto label_2e8c44;
        case 0x2e8c48u: goto label_2e8c48;
        case 0x2e8c4cu: goto label_2e8c4c;
        case 0x2e8c50u: goto label_2e8c50;
        case 0x2e8c54u: goto label_2e8c54;
        case 0x2e8c58u: goto label_2e8c58;
        case 0x2e8c5cu: goto label_2e8c5c;
        case 0x2e8c60u: goto label_2e8c60;
        case 0x2e8c64u: goto label_2e8c64;
        case 0x2e8c68u: goto label_2e8c68;
        case 0x2e8c6cu: goto label_2e8c6c;
        case 0x2e8c70u: goto label_2e8c70;
        case 0x2e8c74u: goto label_2e8c74;
        case 0x2e8c78u: goto label_2e8c78;
        case 0x2e8c7cu: goto label_2e8c7c;
        case 0x2e8c80u: goto label_2e8c80;
        case 0x2e8c84u: goto label_2e8c84;
        case 0x2e8c88u: goto label_2e8c88;
        case 0x2e8c8cu: goto label_2e8c8c;
        case 0x2e8c90u: goto label_2e8c90;
        case 0x2e8c94u: goto label_2e8c94;
        case 0x2e8c98u: goto label_2e8c98;
        case 0x2e8c9cu: goto label_2e8c9c;
        case 0x2e8ca0u: goto label_2e8ca0;
        case 0x2e8ca4u: goto label_2e8ca4;
        case 0x2e8ca8u: goto label_2e8ca8;
        case 0x2e8cacu: goto label_2e8cac;
        case 0x2e8cb0u: goto label_2e8cb0;
        case 0x2e8cb4u: goto label_2e8cb4;
        case 0x2e8cb8u: goto label_2e8cb8;
        case 0x2e8cbcu: goto label_2e8cbc;
        case 0x2e8cc0u: goto label_2e8cc0;
        case 0x2e8cc4u: goto label_2e8cc4;
        case 0x2e8cc8u: goto label_2e8cc8;
        case 0x2e8cccu: goto label_2e8ccc;
        case 0x2e8cd0u: goto label_2e8cd0;
        case 0x2e8cd4u: goto label_2e8cd4;
        case 0x2e8cd8u: goto label_2e8cd8;
        case 0x2e8cdcu: goto label_2e8cdc;
        case 0x2e8ce0u: goto label_2e8ce0;
        case 0x2e8ce4u: goto label_2e8ce4;
        case 0x2e8ce8u: goto label_2e8ce8;
        case 0x2e8cecu: goto label_2e8cec;
        case 0x2e8cf0u: goto label_2e8cf0;
        case 0x2e8cf4u: goto label_2e8cf4;
        case 0x2e8cf8u: goto label_2e8cf8;
        case 0x2e8cfcu: goto label_2e8cfc;
        case 0x2e8d00u: goto label_2e8d00;
        case 0x2e8d04u: goto label_2e8d04;
        case 0x2e8d08u: goto label_2e8d08;
        case 0x2e8d0cu: goto label_2e8d0c;
        case 0x2e8d10u: goto label_2e8d10;
        case 0x2e8d14u: goto label_2e8d14;
        case 0x2e8d18u: goto label_2e8d18;
        case 0x2e8d1cu: goto label_2e8d1c;
        case 0x2e8d20u: goto label_2e8d20;
        case 0x2e8d24u: goto label_2e8d24;
        case 0x2e8d28u: goto label_2e8d28;
        case 0x2e8d2cu: goto label_2e8d2c;
        case 0x2e8d30u: goto label_2e8d30;
        case 0x2e8d34u: goto label_2e8d34;
        case 0x2e8d38u: goto label_2e8d38;
        case 0x2e8d3cu: goto label_2e8d3c;
        case 0x2e8d40u: goto label_2e8d40;
        case 0x2e8d44u: goto label_2e8d44;
        case 0x2e8d48u: goto label_2e8d48;
        case 0x2e8d4cu: goto label_2e8d4c;
        case 0x2e8d50u: goto label_2e8d50;
        case 0x2e8d54u: goto label_2e8d54;
        case 0x2e8d58u: goto label_2e8d58;
        case 0x2e8d5cu: goto label_2e8d5c;
        case 0x2e8d60u: goto label_2e8d60;
        case 0x2e8d64u: goto label_2e8d64;
        case 0x2e8d68u: goto label_2e8d68;
        case 0x2e8d6cu: goto label_2e8d6c;
        case 0x2e8d70u: goto label_2e8d70;
        case 0x2e8d74u: goto label_2e8d74;
        case 0x2e8d78u: goto label_2e8d78;
        case 0x2e8d7cu: goto label_2e8d7c;
        case 0x2e8d80u: goto label_2e8d80;
        case 0x2e8d84u: goto label_2e8d84;
        case 0x2e8d88u: goto label_2e8d88;
        case 0x2e8d8cu: goto label_2e8d8c;
        case 0x2e8d90u: goto label_2e8d90;
        case 0x2e8d94u: goto label_2e8d94;
        case 0x2e8d98u: goto label_2e8d98;
        case 0x2e8d9cu: goto label_2e8d9c;
        case 0x2e8da0u: goto label_2e8da0;
        case 0x2e8da4u: goto label_2e8da4;
        default: break;
    }

    ctx->pc = 0x2e8bc8u;

label_2e8bc8:
    // 0x2e8bc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e8bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e8bcc:
    // 0x2e8bcc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e8bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2e8bd0:
    // 0x2e8bd0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2e8bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2e8bd4:
    // 0x2e8bd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e8bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8bd8:
    // 0x2e8bd8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2e8bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2e8bdc:
    // 0x2e8bdc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e8bdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e8be0:
    // 0x2e8be0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2e8be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2e8be4:
    // 0x2e8be4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2e8be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2e8be8:
    // 0x2e8be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e8bec:
    // 0x2e8bec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e8becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8bf0:
    // 0x2e8bf0: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2e8bf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2e8bf4:
    // 0x2e8bf4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_2e8bf8:
    if (ctx->pc == 0x2E8BF8u) {
        ctx->pc = 0x2E8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BF4u;
        // 0x2e8bf8: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8BFCu;
        goto label_2e8bfc;
    }
    ctx->pc = 0x2E8BF4u;
    {
        const bool branch_taken_0x2e8bf4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BF4u;
        // 0x2e8bf8: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8bf4) {
            ctx->pc = 0x2E8C0Cu;
            goto label_2e8c0c;
        }
    }
    ctx->pc = 0x2E8BFCu;
label_2e8bfc:
    // 0x2e8bfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e8c00:
    // 0x2e8c00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e8c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e8c04:
    // 0x2e8c04: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e8c08:
    if (ctx->pc == 0x2E8C08u) {
        ctx->pc = 0x2E8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C04u;
        // 0x2e8c08: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C0Cu;
        goto label_2e8c0c;
    }
    ctx->pc = 0x2E8C04u;
    {
        const bool branch_taken_0x2e8c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C04u;
        // 0x2e8c08: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c04) {
            ctx->pc = 0x2E8C10u;
            goto label_2e8c10;
        }
    }
    ctx->pc = 0x2E8C0Cu;
label_2e8c0c:
    // 0x2e8c0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e8c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8c10:
    // 0x2e8c10: 0x8e6201a8  lw          $v0, 0x1A8($s3)
    ctx->pc = 0x2e8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
label_2e8c14:
    // 0x2e8c14: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2e8c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2e8c18:
    // 0x2e8c18: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e8c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2e8c1c:
    // 0x2e8c1c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2e8c20:
    if (ctx->pc == 0x2E8C20u) {
        ctx->pc = 0x2E8C24u;
        goto label_2e8c24;
    }
    ctx->pc = 0x2E8C1Cu;
    {
        const bool branch_taken_0x2e8c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8c1c) {
            ctx->pc = 0x2E8C78u;
            goto label_2e8c78;
        }
    }
    ctx->pc = 0x2E8C24u;
label_2e8c24:
    // 0x2e8c24: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8c28:
    // 0x2e8c28: 0x245000f8  addiu       $s0, $v0, 0xF8
    ctx->pc = 0x2e8c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 248));
label_2e8c2c:
    // 0x2e8c2c: 0xc0a5d08  jal         func_297420
label_2e8c30:
    if (ctx->pc == 0x2E8C30u) {
        ctx->pc = 0x2E8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C2Cu;
        // 0x2e8c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C34u;
        goto label_2e8c34;
    }
    ctx->pc = 0x2E8C2Cu;
    SET_GPR_U32(ctx, 31, 0x2E8C34u);
    ctx->pc = 0x2E8C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8C2Cu;
    // 0x2e8c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297420u, 0x2E8C2Cu, 0x2E8C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8C34u;
label_2e8c34:
    // 0x2e8c34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2e8c38:
    if (ctx->pc == 0x2E8C38u) {
        ctx->pc = 0x2E8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C34u;
        // 0x2e8c38: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C3Cu;
        goto label_2e8c3c;
    }
    ctx->pc = 0x2E8C34u;
    {
        const bool branch_taken_0x2e8c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C34u;
        // 0x2e8c38: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c34) {
            ctx->pc = 0x2E8C50u;
            goto label_2e8c50;
        }
    }
    ctx->pc = 0x2E8C3Cu;
label_2e8c3c:
    // 0x2e8c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8c40:
    // 0x2e8c40: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e8c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e8c44:
    // 0x2e8c44: 0xc0a5d0c  jal         func_297430
label_2e8c48:
    if (ctx->pc == 0x2E8C48u) {
        ctx->pc = 0x2E8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C44u;
        // 0x2e8c48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C4Cu;
        goto label_2e8c4c;
    }
    ctx->pc = 0x2E8C44u;
    SET_GPR_U32(ctx, 31, 0x2E8C4Cu);
    ctx->pc = 0x2E8C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8C44u;
    // 0x2e8c48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297430u, 0x2E8C44u, 0x2E8C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8C4Cu;
label_2e8c4c:
    // 0x2e8c4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2e8c50:
    // 0x2e8c50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e8c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e8c54:
    // 0x2e8c54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e8c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e8c58:
    // 0x2e8c58: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2e8c58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e8c5c:
    // 0x2e8c5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e8c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e8c60:
    // 0x2e8c60: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e8c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e8c64:
    // 0x2e8c64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8c68:
    // 0x2e8c68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e8c68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8c6c:
    // 0x2e8c6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e8c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8c70:
    // 0x2e8c70: 0xc088178  jal         func_2205E0
label_2e8c74:
    if (ctx->pc == 0x2E8C74u) {
        ctx->pc = 0x2E8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C70u;
        // 0x2e8c74: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C78u;
        goto label_2e8c78;
    }
    ctx->pc = 0x2E8C70u;
    SET_GPR_U32(ctx, 31, 0x2E8C78u);
    ctx->pc = 0x2E8C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8C70u;
    // 0x2e8c74: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E8C70u, 0x2E8C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8C78u;
label_2e8c78:
    // 0x2e8c78: 0x52200012  beql        $s1, $zero, . + 4 + (0x12 << 2)
label_2e8c7c:
    if (ctx->pc == 0x2E8C7Cu) {
        ctx->pc = 0x2E8C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C78u;
        // 0x2e8c7c: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C80u;
        goto label_2e8c80;
    }
    ctx->pc = 0x2E8C78u;
    {
        const bool branch_taken_0x2e8c78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8c78) {
            ctx->pc = 0x2E8C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8C78u;
            // 0x2e8c7c: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8CC4u;
            goto label_2e8cc4;
        }
    }
    ctx->pc = 0x2E8C80u;
label_2e8c80:
    // 0x2e8c80: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2e8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2e8c84:
    // 0x2e8c84: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2e8c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2e8c88:
    // 0x2e8c88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2e8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2e8c8c:
    // 0x2e8c8c: 0x40f809  jalr        $v0
label_2e8c90:
    if (ctx->pc == 0x2E8C90u) {
        ctx->pc = 0x2E8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C8Cu;
        // 0x2e8c90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8C94u;
        goto label_2e8c94;
    }
    ctx->pc = 0x2E8C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E8C94u);
        ctx->pc = 0x2E8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C8Cu;
        // 0x2e8c90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8C8Cu, 0x2E8C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8C94u;
label_2e8c94:
    // 0x2e8c94: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x2e8c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2e8c98:
    // 0x2e8c98: 0x1043003b  beq         $v0, $v1, . + 4 + (0x3B << 2)
label_2e8c9c:
    if (ctx->pc == 0x2E8C9Cu) {
        ctx->pc = 0x2E8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C98u;
        // 0x2e8c9c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CA0u;
        goto label_2e8ca0;
    }
    ctx->pc = 0x2E8C98u;
    {
        const bool branch_taken_0x2e8c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C98u;
        // 0x2e8c9c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c98) {
            ctx->pc = 0x2E8D88u;
            goto label_2e8d88;
        }
    }
    ctx->pc = 0x2E8CA0u;
label_2e8ca0:
    // 0x2e8ca0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2e8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2e8ca4:
    // 0x2e8ca4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2e8ca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2e8ca8:
    // 0x2e8ca8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2e8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2e8cac:
    // 0x2e8cac: 0x40f809  jalr        $v0
label_2e8cb0:
    if (ctx->pc == 0x2E8CB0u) {
        ctx->pc = 0x2E8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CACu;
        // 0x2e8cb0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CB4u;
        goto label_2e8cb4;
    }
    ctx->pc = 0x2E8CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E8CB4u);
        ctx->pc = 0x2E8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CACu;
        // 0x2e8cb0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8CACu, 0x2E8CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8CB4u;
label_2e8cb4:
    // 0x2e8cb4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2e8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2e8cb8:
    // 0x2e8cb8: 0x10430033  beq         $v0, $v1, . + 4 + (0x33 << 2)
label_2e8cbc:
    if (ctx->pc == 0x2E8CBCu) {
        ctx->pc = 0x2E8CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CB8u;
        // 0x2e8cbc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CC0u;
        goto label_2e8cc0;
    }
    ctx->pc = 0x2E8CB8u;
    {
        const bool branch_taken_0x2e8cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E8CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CB8u;
        // 0x2e8cbc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8cb8) {
            ctx->pc = 0x2E8D88u;
            goto label_2e8d88;
        }
    }
    ctx->pc = 0x2E8CC0u;
label_2e8cc0:
    // 0x2e8cc0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2e8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2e8cc4:
    // 0x2e8cc4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2e8cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_2e8cc8:
    // 0x2e8cc8: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_2e8ccc:
    if (ctx->pc == 0x2E8CCCu) {
        ctx->pc = 0x2E8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CC8u;
        // 0x2e8ccc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CD0u;
        goto label_2e8cd0;
    }
    ctx->pc = 0x2E8CC8u;
    {
        const bool branch_taken_0x2e8cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CC8u;
        // 0x2e8ccc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8cc8) {
            ctx->pc = 0x2E8D88u;
            goto label_2e8d88;
        }
    }
    ctx->pc = 0x2E8CD0u;
label_2e8cd0:
    // 0x2e8cd0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8cd4:
    // 0x2e8cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8cd8:
    // 0x2e8cd8: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2e8cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e8cdc:
    // 0x2e8cdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e8cdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8ce0:
    // 0x2e8ce0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e8ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8ce4:
    // 0x2e8ce4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2e8ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_2e8ce8:
    // 0x2e8ce8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e8ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e8cec:
    // 0x2e8cec: 0xc0a4d90  jal         func_293640
label_2e8cf0:
    if (ctx->pc == 0x2E8CF0u) {
        ctx->pc = 0x2E8CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CECu;
        // 0x2e8cf0: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8CF4u;
        goto label_2e8cf4;
    }
    ctx->pc = 0x2E8CECu;
    SET_GPR_U32(ctx, 31, 0x2E8CF4u);
    ctx->pc = 0x2E8CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8CECu;
    // 0x2e8cf0: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x2E8CECu, 0x2E8CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8CF4u;
label_2e8cf4:
    // 0x2e8cf4: 0x92420045  lbu         $v0, 0x45($s2)
    ctx->pc = 0x2e8cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
label_2e8cf8:
    // 0x2e8cf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e8cfc:
    // 0x2e8cfc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e8cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e8d00:
    // 0x2e8d00: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x2e8d00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2e8d04:
    // 0x2e8d04: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
label_2e8d08:
    if (ctx->pc == 0x2E8D08u) {
        ctx->pc = 0x2E8D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D04u;
        // 0x2e8d08: 0xa2420045  sb          $v0, 0x45($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D0Cu;
        goto label_2e8d0c;
    }
    ctx->pc = 0x2E8D04u;
    {
        const bool branch_taken_0x2e8d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D04u;
        // 0x2e8d08: 0xa2420045  sb          $v0, 0x45($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d04) {
            ctx->pc = 0x2E8D84u;
            goto label_2e8d84;
        }
    }
    ctx->pc = 0x2E8D0Cu;
label_2e8d0c:
    // 0x2e8d0c: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2e8d0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2e8d10:
    // 0x2e8d10: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2e8d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2e8d14:
    // 0x2e8d14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e8d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e8d18:
    // 0x2e8d18: 0xc0a4e54  jal         func_293950
label_2e8d1c:
    if (ctx->pc == 0x2E8D1Cu) {
        ctx->pc = 0x2E8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D18u;
        // 0x2e8d1c: 0xfe6200e0  sd          $v0, 0xE0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D20u;
        goto label_2e8d20;
    }
    ctx->pc = 0x2E8D18u;
    SET_GPR_U32(ctx, 31, 0x2E8D20u);
    ctx->pc = 0x2E8D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D18u;
    // 0x2e8d1c: 0xfe6200e0  sd          $v0, 0xE0($s3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E8D18u, 0x2E8D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D20u;
label_2e8d20:
    // 0x2e8d20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e8d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e8d24:
    // 0x2e8d24: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
label_2e8d28:
    if (ctx->pc == 0x2E8D28u) {
        ctx->pc = 0x2E8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D24u;
        // 0x2e8d28: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D2Cu;
        goto label_2e8d2c;
    }
    ctx->pc = 0x2E8D24u;
    {
        const bool branch_taken_0x2e8d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8d24) {
            ctx->pc = 0x2E8D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8D24u;
            // 0x2e8d28: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8D58u;
            goto label_2e8d58;
        }
    }
    ctx->pc = 0x2E8D2Cu;
label_2e8d2c:
    // 0x2e8d2c: 0xc0ba20c  jal         func_2E8830
label_2e8d30:
    if (ctx->pc == 0x2E8D30u) {
        ctx->pc = 0x2E8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D2Cu;
        // 0x2e8d30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D34u;
        goto label_2e8d34;
    }
    ctx->pc = 0x2E8D2Cu;
    SET_GPR_U32(ctx, 31, 0x2E8D34u);
    ctx->pc = 0x2E8D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D2Cu;
    // 0x2e8d30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8830u, 0x2E8D2Cu, 0x2E8D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D34u;
label_2e8d34:
    // 0x2e8d34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e8d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e8d38:
    // 0x2e8d38: 0xc0ba206  jal         func_2E8818
label_2e8d3c:
    if (ctx->pc == 0x2E8D3Cu) {
        ctx->pc = 0x2E8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D38u;
        // 0x2e8d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D40u;
        goto label_2e8d40;
    }
    ctx->pc = 0x2E8D38u;
    SET_GPR_U32(ctx, 31, 0x2E8D40u);
    ctx->pc = 0x2E8D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D38u;
    // 0x2e8d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8818u, 0x2E8D38u, 0x2E8D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D40u;
label_2e8d40:
    // 0x2e8d40: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2e8d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8d44:
    // 0x2e8d44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e8d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8d48:
    // 0x2e8d48: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e8d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e8d4c:
    // 0x2e8d4c: 0xc0b9e5c  jal         func_2E7970
label_2e8d50:
    if (ctx->pc == 0x2E8D50u) {
        ctx->pc = 0x2E8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D4Cu;
        // 0x2e8d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D54u;
        goto label_2e8d54;
    }
    ctx->pc = 0x2E8D4Cu;
    SET_GPR_U32(ctx, 31, 0x2E8D54u);
    ctx->pc = 0x2E8D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D4Cu;
    // 0x2e8d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7970u, 0x2E8D4Cu, 0x2E8D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D54u;
label_2e8d54:
    // 0x2e8d54: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e8d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e8d58:
    // 0x2e8d58: 0xc0a35d6  jal         func_28D758
label_2e8d5c:
    if (ctx->pc == 0x2E8D5Cu) {
        ctx->pc = 0x2E8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D58u;
        // 0x2e8d5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D60u;
        goto label_2e8d60;
    }
    ctx->pc = 0x2E8D58u;
    SET_GPR_U32(ctx, 31, 0x2E8D60u);
    ctx->pc = 0x2E8D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D58u;
    // 0x2e8d5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E8D58u, 0x2E8D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D60u;
label_2e8d60:
    // 0x2e8d60: 0xa2400045  sb          $zero, 0x45($s2)
    ctx->pc = 0x2e8d60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 0));
label_2e8d64:
    // 0x2e8d64: 0xc0e4060  jal         func_390180
label_2e8d68:
    if (ctx->pc == 0x2E8D68u) {
        ctx->pc = 0x2E8D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D64u;
        // 0x2e8d68: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D6Cu;
        goto label_2e8d6c;
    }
    ctx->pc = 0x2E8D64u;
    SET_GPR_U32(ctx, 31, 0x2E8D6Cu);
    ctx->pc = 0x2E8D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D64u;
    // 0x2e8d68: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E8D64u, 0x2E8D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D6Cu;
label_2e8d6c:
    // 0x2e8d6c: 0xc105e98  jal         func_417A60
label_2e8d70:
    if (ctx->pc == 0x2E8D70u) {
        ctx->pc = 0x2E8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D6Cu;
        // 0x2e8d70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D74u;
        goto label_2e8d74;
    }
    ctx->pc = 0x2E8D6Cu;
    SET_GPR_U32(ctx, 31, 0x2E8D74u);
    ctx->pc = 0x2E8D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8D6Cu;
    // 0x2e8d70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2E8D6Cu, 0x2E8D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D74u;
label_2e8d74:
    // 0x2e8d74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e8d78:
    if (ctx->pc == 0x2E8D78u) {
        ctx->pc = 0x2E8D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D74u;
        // 0x2e8d78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8D7Cu;
        goto label_2e8d7c;
    }
    ctx->pc = 0x2E8D74u;
    {
        const bool branch_taken_0x2e8d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D74u;
        // 0x2e8d78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d74) {
            ctx->pc = 0x2E8D84u;
            goto label_2e8d84;
        }
    }
    ctx->pc = 0x2E8D7Cu;
label_2e8d7c:
    // 0x2e8d7c: 0xa2400043  sb          $zero, 0x43($s2)
    ctx->pc = 0x2e8d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 67), (uint8_t)GPR_U32(ctx, 0));
label_2e8d80:
    // 0x2e8d80: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x2e8d80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_2e8d84:
    // 0x2e8d84: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2e8d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e8d88:
    // 0x2e8d88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2e8d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e8d8c:
    // 0x2e8d8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e8d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e8d90:
    // 0x2e8d90: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2e8d90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e8d94:
    // 0x2e8d94: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2e8d94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e8d98:
    // 0x2e8d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e8d9c:
    // 0x2e8d9c: 0x3e00008  jr          $ra
label_2e8da0:
    if (ctx->pc == 0x2E8DA0u) {
        ctx->pc = 0x2E8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D9Cu;
        // 0x2e8da0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8DA4u;
        goto label_2e8da4;
    }
    ctx->pc = 0x2E8D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D9Cu;
        // 0x2e8da0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8DA4u;
label_2e8da4:
    // 0x2e8da4: 0x0  nop
    ctx->pc = 0x2e8da4u;
    // NOP
    ctx->pc = 0x2e8da8u;
}
