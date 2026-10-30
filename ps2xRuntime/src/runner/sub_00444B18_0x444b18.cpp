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

// Function: sub_00444B18
// Address: 0x444b18 - 0x444ea0
void sub_00444B18_0x444b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444B18_0x444b18");
#endif

    switch (ctx->pc) {
        case 0x444b18u: goto label_444b18;
        case 0x444b1cu: goto label_444b1c;
        case 0x444b20u: goto label_444b20;
        case 0x444b24u: goto label_444b24;
        case 0x444b28u: goto label_444b28;
        case 0x444b2cu: goto label_444b2c;
        case 0x444b30u: goto label_444b30;
        case 0x444b34u: goto label_444b34;
        case 0x444b38u: goto label_444b38;
        case 0x444b3cu: goto label_444b3c;
        case 0x444b40u: goto label_444b40;
        case 0x444b44u: goto label_444b44;
        case 0x444b48u: goto label_444b48;
        case 0x444b4cu: goto label_444b4c;
        case 0x444b50u: goto label_444b50;
        case 0x444b54u: goto label_444b54;
        case 0x444b58u: goto label_444b58;
        case 0x444b5cu: goto label_444b5c;
        case 0x444b60u: goto label_444b60;
        case 0x444b64u: goto label_444b64;
        case 0x444b68u: goto label_444b68;
        case 0x444b6cu: goto label_444b6c;
        case 0x444b70u: goto label_444b70;
        case 0x444b74u: goto label_444b74;
        case 0x444b78u: goto label_444b78;
        case 0x444b7cu: goto label_444b7c;
        case 0x444b80u: goto label_444b80;
        case 0x444b84u: goto label_444b84;
        case 0x444b88u: goto label_444b88;
        case 0x444b8cu: goto label_444b8c;
        case 0x444b90u: goto label_444b90;
        case 0x444b94u: goto label_444b94;
        case 0x444b98u: goto label_444b98;
        case 0x444b9cu: goto label_444b9c;
        case 0x444ba0u: goto label_444ba0;
        case 0x444ba4u: goto label_444ba4;
        case 0x444ba8u: goto label_444ba8;
        case 0x444bacu: goto label_444bac;
        case 0x444bb0u: goto label_444bb0;
        case 0x444bb4u: goto label_444bb4;
        case 0x444bb8u: goto label_444bb8;
        case 0x444bbcu: goto label_444bbc;
        case 0x444bc0u: goto label_444bc0;
        case 0x444bc4u: goto label_444bc4;
        case 0x444bc8u: goto label_444bc8;
        case 0x444bccu: goto label_444bcc;
        case 0x444bd0u: goto label_444bd0;
        case 0x444bd4u: goto label_444bd4;
        case 0x444bd8u: goto label_444bd8;
        case 0x444bdcu: goto label_444bdc;
        case 0x444be0u: goto label_444be0;
        case 0x444be4u: goto label_444be4;
        case 0x444be8u: goto label_444be8;
        case 0x444becu: goto label_444bec;
        case 0x444bf0u: goto label_444bf0;
        case 0x444bf4u: goto label_444bf4;
        case 0x444bf8u: goto label_444bf8;
        case 0x444bfcu: goto label_444bfc;
        case 0x444c00u: goto label_444c00;
        case 0x444c04u: goto label_444c04;
        case 0x444c08u: goto label_444c08;
        case 0x444c0cu: goto label_444c0c;
        case 0x444c10u: goto label_444c10;
        case 0x444c14u: goto label_444c14;
        case 0x444c18u: goto label_444c18;
        case 0x444c1cu: goto label_444c1c;
        case 0x444c20u: goto label_444c20;
        case 0x444c24u: goto label_444c24;
        case 0x444c28u: goto label_444c28;
        case 0x444c2cu: goto label_444c2c;
        case 0x444c30u: goto label_444c30;
        case 0x444c34u: goto label_444c34;
        case 0x444c38u: goto label_444c38;
        case 0x444c3cu: goto label_444c3c;
        case 0x444c40u: goto label_444c40;
        case 0x444c44u: goto label_444c44;
        case 0x444c48u: goto label_444c48;
        case 0x444c4cu: goto label_444c4c;
        case 0x444c50u: goto label_444c50;
        case 0x444c54u: goto label_444c54;
        case 0x444c58u: goto label_444c58;
        case 0x444c5cu: goto label_444c5c;
        case 0x444c60u: goto label_444c60;
        case 0x444c64u: goto label_444c64;
        case 0x444c68u: goto label_444c68;
        case 0x444c6cu: goto label_444c6c;
        case 0x444c70u: goto label_444c70;
        case 0x444c74u: goto label_444c74;
        case 0x444c78u: goto label_444c78;
        case 0x444c7cu: goto label_444c7c;
        case 0x444c80u: goto label_444c80;
        case 0x444c84u: goto label_444c84;
        case 0x444c88u: goto label_444c88;
        case 0x444c8cu: goto label_444c8c;
        case 0x444c90u: goto label_444c90;
        case 0x444c94u: goto label_444c94;
        case 0x444c98u: goto label_444c98;
        case 0x444c9cu: goto label_444c9c;
        case 0x444ca0u: goto label_444ca0;
        case 0x444ca4u: goto label_444ca4;
        case 0x444ca8u: goto label_444ca8;
        case 0x444cacu: goto label_444cac;
        case 0x444cb0u: goto label_444cb0;
        case 0x444cb4u: goto label_444cb4;
        case 0x444cb8u: goto label_444cb8;
        case 0x444cbcu: goto label_444cbc;
        case 0x444cc0u: goto label_444cc0;
        case 0x444cc4u: goto label_444cc4;
        case 0x444cc8u: goto label_444cc8;
        case 0x444cccu: goto label_444ccc;
        case 0x444cd0u: goto label_444cd0;
        case 0x444cd4u: goto label_444cd4;
        case 0x444cd8u: goto label_444cd8;
        case 0x444cdcu: goto label_444cdc;
        case 0x444ce0u: goto label_444ce0;
        case 0x444ce4u: goto label_444ce4;
        case 0x444ce8u: goto label_444ce8;
        case 0x444cecu: goto label_444cec;
        case 0x444cf0u: goto label_444cf0;
        case 0x444cf4u: goto label_444cf4;
        case 0x444cf8u: goto label_444cf8;
        case 0x444cfcu: goto label_444cfc;
        case 0x444d00u: goto label_444d00;
        case 0x444d04u: goto label_444d04;
        case 0x444d08u: goto label_444d08;
        case 0x444d0cu: goto label_444d0c;
        case 0x444d10u: goto label_444d10;
        case 0x444d14u: goto label_444d14;
        case 0x444d18u: goto label_444d18;
        case 0x444d1cu: goto label_444d1c;
        case 0x444d20u: goto label_444d20;
        case 0x444d24u: goto label_444d24;
        case 0x444d28u: goto label_444d28;
        case 0x444d2cu: goto label_444d2c;
        case 0x444d30u: goto label_444d30;
        case 0x444d34u: goto label_444d34;
        case 0x444d38u: goto label_444d38;
        case 0x444d3cu: goto label_444d3c;
        case 0x444d40u: goto label_444d40;
        case 0x444d44u: goto label_444d44;
        case 0x444d48u: goto label_444d48;
        case 0x444d4cu: goto label_444d4c;
        case 0x444d50u: goto label_444d50;
        case 0x444d54u: goto label_444d54;
        case 0x444d58u: goto label_444d58;
        case 0x444d5cu: goto label_444d5c;
        case 0x444d60u: goto label_444d60;
        case 0x444d64u: goto label_444d64;
        case 0x444d68u: goto label_444d68;
        case 0x444d6cu: goto label_444d6c;
        case 0x444d70u: goto label_444d70;
        case 0x444d74u: goto label_444d74;
        case 0x444d78u: goto label_444d78;
        case 0x444d7cu: goto label_444d7c;
        case 0x444d80u: goto label_444d80;
        case 0x444d84u: goto label_444d84;
        case 0x444d88u: goto label_444d88;
        case 0x444d8cu: goto label_444d8c;
        case 0x444d90u: goto label_444d90;
        case 0x444d94u: goto label_444d94;
        case 0x444d98u: goto label_444d98;
        case 0x444d9cu: goto label_444d9c;
        case 0x444da0u: goto label_444da0;
        case 0x444da4u: goto label_444da4;
        case 0x444da8u: goto label_444da8;
        case 0x444dacu: goto label_444dac;
        case 0x444db0u: goto label_444db0;
        case 0x444db4u: goto label_444db4;
        case 0x444db8u: goto label_444db8;
        case 0x444dbcu: goto label_444dbc;
        case 0x444dc0u: goto label_444dc0;
        case 0x444dc4u: goto label_444dc4;
        case 0x444dc8u: goto label_444dc8;
        case 0x444dccu: goto label_444dcc;
        case 0x444dd0u: goto label_444dd0;
        case 0x444dd4u: goto label_444dd4;
        case 0x444dd8u: goto label_444dd8;
        case 0x444ddcu: goto label_444ddc;
        case 0x444de0u: goto label_444de0;
        case 0x444de4u: goto label_444de4;
        case 0x444de8u: goto label_444de8;
        case 0x444decu: goto label_444dec;
        case 0x444df0u: goto label_444df0;
        case 0x444df4u: goto label_444df4;
        case 0x444df8u: goto label_444df8;
        case 0x444dfcu: goto label_444dfc;
        case 0x444e00u: goto label_444e00;
        case 0x444e04u: goto label_444e04;
        case 0x444e08u: goto label_444e08;
        case 0x444e0cu: goto label_444e0c;
        case 0x444e10u: goto label_444e10;
        case 0x444e14u: goto label_444e14;
        case 0x444e18u: goto label_444e18;
        case 0x444e1cu: goto label_444e1c;
        case 0x444e20u: goto label_444e20;
        case 0x444e24u: goto label_444e24;
        case 0x444e28u: goto label_444e28;
        case 0x444e2cu: goto label_444e2c;
        case 0x444e30u: goto label_444e30;
        case 0x444e34u: goto label_444e34;
        case 0x444e38u: goto label_444e38;
        case 0x444e3cu: goto label_444e3c;
        case 0x444e40u: goto label_444e40;
        case 0x444e44u: goto label_444e44;
        case 0x444e48u: goto label_444e48;
        case 0x444e4cu: goto label_444e4c;
        case 0x444e50u: goto label_444e50;
        case 0x444e54u: goto label_444e54;
        case 0x444e58u: goto label_444e58;
        case 0x444e5cu: goto label_444e5c;
        case 0x444e60u: goto label_444e60;
        case 0x444e64u: goto label_444e64;
        case 0x444e68u: goto label_444e68;
        case 0x444e6cu: goto label_444e6c;
        case 0x444e70u: goto label_444e70;
        case 0x444e74u: goto label_444e74;
        case 0x444e78u: goto label_444e78;
        case 0x444e7cu: goto label_444e7c;
        case 0x444e80u: goto label_444e80;
        case 0x444e84u: goto label_444e84;
        case 0x444e88u: goto label_444e88;
        case 0x444e8cu: goto label_444e8c;
        case 0x444e90u: goto label_444e90;
        case 0x444e94u: goto label_444e94;
        case 0x444e98u: goto label_444e98;
        case 0x444e9cu: goto label_444e9c;
        default: break;
    }

    ctx->pc = 0x444b18u;

label_444b18:
    // 0x444b18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x444b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_444b1c:
    // 0x444b1c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x444b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_444b20:
    // 0x444b20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x444b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_444b24:
    // 0x444b24: 0x2484ddf8  addiu       $a0, $a0, -0x2208
    ctx->pc = 0x444b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958584));
label_444b28:
    // 0x444b28: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x444b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_444b2c:
    // 0x444b2c: 0x3c120052  lui         $s2, 0x52
    ctx->pc = 0x444b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)82 << 16));
label_444b30:
    // 0x444b30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x444b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_444b34:
    // 0x444b34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x444b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_444b38:
    // 0x444b38: 0x2650a4f8  addiu       $s0, $s2, -0x5B08
    ctx->pc = 0x444b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943992));
label_444b3c:
    // 0x444b3c: 0x8e45a4f8  lw          $a1, -0x5B08($s2)
    ctx->pc = 0x444b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943992)));
label_444b40:
    // 0x444b40: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x444b40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_444b44:
    // 0x444b44: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x444b44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_444b48:
    // 0x444b48: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x444b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_444b4c:
    // 0x444b4c: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x444b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_444b50:
    // 0x444b50: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x444b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_444b54:
    // 0x444b54: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x444b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_444b58:
    // 0x444b58: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x444b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_444b5c:
    // 0x444b5c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x444b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_444b60:
    // 0x444b60: 0xc10fe3c  jal         func_43F8F0
label_444b64:
    if (ctx->pc == 0x444B64u) {
        ctx->pc = 0x444B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444B60u;
        // 0x444b64: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444B68u;
        goto label_444b68;
    }
    ctx->pc = 0x444B60u;
    SET_GPR_U32(ctx, 31, 0x444B68u);
    ctx->pc = 0x444B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444B60u;
    // 0x444b64: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F8F0u, 0x444B60u, 0x444B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444B68u;
label_444b68:
    // 0x444b68: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x444b68u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
label_444b6c:
    // 0x444b6c: 0x40f  sync.p
    ctx->pc = 0x444b6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_444b70:
    // 0x444b70: 0x8e51a4f8  lw          $s1, -0x5B08($s2)
    ctx->pc = 0x444b70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943992)));
label_444b74:
    // 0x444b74: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x444b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_444b78:
    // 0x444b78: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_444b7c:
    if (ctx->pc == 0x444B7Cu) {
        ctx->pc = 0x444B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444B78u;
        // 0x444b7c: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444B80u;
        goto label_444b80;
    }
    ctx->pc = 0x444B78u;
    {
        const bool branch_taken_0x444b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x444B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444B78u;
        // 0x444b7c: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444b78) {
            ctx->pc = 0x444B94u;
            goto label_444b94;
        }
    }
    ctx->pc = 0x444B80u;
label_444b80:
    // 0x444b80: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x444b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_444b84:
    // 0x444b84: 0xc10fe3c  jal         func_43F8F0
label_444b88:
    if (ctx->pc == 0x444B88u) {
        ctx->pc = 0x444B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444B84u;
        // 0x444b88: 0x2484de30  addiu       $a0, $a0, -0x21D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444B8Cu;
        goto label_444b8c;
    }
    ctx->pc = 0x444B84u;
    SET_GPR_U32(ctx, 31, 0x444B8Cu);
    ctx->pc = 0x444B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444B84u;
    // 0x444b88: 0x2484de30  addiu       $a0, $a0, -0x21D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F8F0u, 0x444B84u, 0x444B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444B8Cu;
label_444b8c:
    // 0x444b8c: 0xc110dd0  jal         func_443740
label_444b90:
    if (ctx->pc == 0x444B90u) {
        ctx->pc = 0x444B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444B8Cu;
        // 0x444b90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444B94u;
        goto label_444b94;
    }
    ctx->pc = 0x444B8Cu;
    SET_GPR_U32(ctx, 31, 0x444B94u);
    ctx->pc = 0x444B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444B8Cu;
    // 0x444b90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443740u, 0x444B8Cu, 0x444B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444B94u;
label_444b94:
    // 0x444b94: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x444b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_444b98:
    // 0x444b98: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_444b9c:
    if (ctx->pc == 0x444B9Cu) {
        ctx->pc = 0x444B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444B98u;
        // 0x444b9c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444BA0u;
        goto label_444ba0;
    }
    ctx->pc = 0x444B98u;
    {
        const bool branch_taken_0x444b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444B98u;
        // 0x444b9c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444b98) {
            ctx->pc = 0x444BD0u;
            goto label_444bd0;
        }
    }
    ctx->pc = 0x444BA0u;
label_444ba0:
    // 0x444ba0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x444ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_444ba4:
    // 0x444ba4: 0x0  nop
    ctx->pc = 0x444ba4u;
    // NOP
label_444ba8:
    // 0x444ba8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x444ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_444bac:
    // 0x444bac: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x444bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_444bb0:
    // 0x444bb0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x444bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_444bb4:
    // 0x444bb4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x444bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_444bb8:
    // 0x444bb8: 0xc1112b2  jal         func_444AC8
label_444bbc:
    if (ctx->pc == 0x444BBCu) {
        ctx->pc = 0x444BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444BB8u;
        // 0x444bbc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444BC0u;
        goto label_444bc0;
    }
    ctx->pc = 0x444BB8u;
    SET_GPR_U32(ctx, 31, 0x444BC0u);
    ctx->pc = 0x444BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444BB8u;
    // 0x444bbc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444AC8u, 0x444BB8u, 0x444BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444BC0u;
label_444bc0:
    // 0x444bc0: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x444bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_444bc4:
    // 0x444bc4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x444bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_444bc8:
    // 0x444bc8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_444bcc:
    if (ctx->pc == 0x444BCCu) {
        ctx->pc = 0x444BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444BC8u;
        // 0x444bcc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444BD0u;
        goto label_444bd0;
    }
    ctx->pc = 0x444BC8u;
    {
        const bool branch_taken_0x444bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x444bc8) {
            ctx->pc = 0x444BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444BC8u;
            // 0x444bcc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_444ba8;
        }
    }
    ctx->pc = 0x444BD0u;
label_444bd0:
    // 0x444bd0: 0x2650a4f8  addiu       $s0, $s2, -0x5B08
    ctx->pc = 0x444bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943992));
label_444bd4:
    // 0x444bd4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x444bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_444bd8:
    // 0x444bd8: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x444bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_444bdc:
    // 0x444bdc: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x444bdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_444be0:
    // 0x444be0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_444be4:
    if (ctx->pc == 0x444BE4u) {
        ctx->pc = 0x444BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444BE0u;
        // 0x444be4: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x444BE8u;
        goto label_444be8;
    }
    ctx->pc = 0x444BE0u;
    {
        const bool branch_taken_0x444be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x444BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444BE0u;
        // 0x444be4: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x444be0) {
            ctx->pc = 0x444C00u;
            goto label_444c00;
        }
    }
    ctx->pc = 0x444BE8u;
label_444be8:
    // 0x444be8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x444be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_444bec:
    // 0x444bec: 0xc10fe3c  jal         func_43F8F0
label_444bf0:
    if (ctx->pc == 0x444BF0u) {
        ctx->pc = 0x444BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444BECu;
        // 0x444bf0: 0x2484de48  addiu       $a0, $a0, -0x21B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444BF4u;
        goto label_444bf4;
    }
    ctx->pc = 0x444BECu;
    SET_GPR_U32(ctx, 31, 0x444BF4u);
    ctx->pc = 0x444BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444BECu;
    // 0x444bf0: 0x2484de48  addiu       $a0, $a0, -0x21B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F8F0u, 0x444BECu, 0x444BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444BF4u;
label_444bf4:
    // 0x444bf4: 0xc110dd0  jal         func_443740
label_444bf8:
    if (ctx->pc == 0x444BF8u) {
        ctx->pc = 0x444BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444BF4u;
        // 0x444bf8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444BFCu;
        goto label_444bfc;
    }
    ctx->pc = 0x444BF4u;
    SET_GPR_U32(ctx, 31, 0x444BFCu);
    ctx->pc = 0x444BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444BF4u;
    // 0x444bf8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443740u, 0x444BF4u, 0x444BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444BFCu;
label_444bfc:
    // 0x444bfc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x444bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_444c00:
    // 0x444c00: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_444c04:
    if (ctx->pc == 0x444C04u) {
        ctx->pc = 0x444C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C00u;
        // 0x444c04: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444C08u;
        goto label_444c08;
    }
    ctx->pc = 0x444C00u;
    {
        const bool branch_taken_0x444c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C00u;
        // 0x444c04: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444c00) {
            ctx->pc = 0x444C38u;
            goto label_444c38;
        }
    }
    ctx->pc = 0x444C08u;
label_444c08:
    // 0x444c08: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x444c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_444c0c:
    // 0x444c0c: 0x0  nop
    ctx->pc = 0x444c0cu;
    // NOP
label_444c10:
    // 0x444c10: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x444c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_444c14:
    // 0x444c14: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x444c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_444c18:
    // 0x444c18: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x444c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_444c1c:
    // 0x444c1c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x444c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_444c20:
    // 0x444c20: 0xc1112b2  jal         func_444AC8
label_444c24:
    if (ctx->pc == 0x444C24u) {
        ctx->pc = 0x444C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C20u;
        // 0x444c24: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444C28u;
        goto label_444c28;
    }
    ctx->pc = 0x444C20u;
    SET_GPR_U32(ctx, 31, 0x444C28u);
    ctx->pc = 0x444C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444C20u;
    // 0x444c24: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444AC8u, 0x444C20u, 0x444C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444C28u;
label_444c28:
    // 0x444c28: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x444c28u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_444c2c:
    // 0x444c2c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x444c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_444c30:
    // 0x444c30: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_444c34:
    if (ctx->pc == 0x444C34u) {
        ctx->pc = 0x444C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C30u;
        // 0x444c34: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444C38u;
        goto label_444c38;
    }
    ctx->pc = 0x444C30u;
    {
        const bool branch_taken_0x444c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x444c30) {
            ctx->pc = 0x444C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444C30u;
            // 0x444c34: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_444c10;
        }
    }
    ctx->pc = 0x444C38u;
label_444c38:
    // 0x444c38: 0x2650a4f8  addiu       $s0, $s2, -0x5B08
    ctx->pc = 0x444c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943992));
label_444c3c:
    // 0x444c3c: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x444c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
label_444c40:
    // 0x444c40: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x444c40u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
label_444c44:
    // 0x444c44: 0x40f  sync.p
    ctx->pc = 0x444c44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_444c48:
    // 0x444c48: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x444c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_444c4c:
    // 0x444c4c: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
label_444c50:
    if (ctx->pc == 0x444C50u) {
        ctx->pc = 0x444C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C4Cu;
        // 0x444c50: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444C54u;
        goto label_444c54;
    }
    ctx->pc = 0x444C4Cu;
    {
        const bool branch_taken_0x444c4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x444c4c) {
            ctx->pc = 0x444C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444C4Cu;
            // 0x444c50: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444CB4u;
            goto label_444cb4;
        }
    }
    ctx->pc = 0x444C54u;
label_444c54:
    // 0x444c54: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x444c54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_444c58:
    // 0x444c58: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x444c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_444c5c:
    // 0x444c5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_444c60:
    if (ctx->pc == 0x444C60u) {
        ctx->pc = 0x444C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C5Cu;
        // 0x444c60: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x444C64u;
        goto label_444c64;
    }
    ctx->pc = 0x444C5Cu;
    {
        const bool branch_taken_0x444c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x444C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C5Cu;
        // 0x444c60: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x444c5c) {
            ctx->pc = 0x444C7Cu;
            goto label_444c7c;
        }
    }
    ctx->pc = 0x444C64u;
label_444c64:
    // 0x444c64: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x444c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_444c68:
    // 0x444c68: 0xc10fe3c  jal         func_43F8F0
label_444c6c:
    if (ctx->pc == 0x444C6Cu) {
        ctx->pc = 0x444C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C68u;
        // 0x444c6c: 0x2484de60  addiu       $a0, $a0, -0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444C70u;
        goto label_444c70;
    }
    ctx->pc = 0x444C68u;
    SET_GPR_U32(ctx, 31, 0x444C70u);
    ctx->pc = 0x444C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444C68u;
    // 0x444c6c: 0x2484de60  addiu       $a0, $a0, -0x21A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F8F0u, 0x444C68u, 0x444C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444C70u;
label_444c70:
    // 0x444c70: 0xc110dd0  jal         func_443740
label_444c74:
    if (ctx->pc == 0x444C74u) {
        ctx->pc = 0x444C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C70u;
        // 0x444c74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444C78u;
        goto label_444c78;
    }
    ctx->pc = 0x444C70u;
    SET_GPR_U32(ctx, 31, 0x444C78u);
    ctx->pc = 0x444C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444C70u;
    // 0x444c74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443740u, 0x444C70u, 0x444C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444C78u;
label_444c78:
    // 0x444c78: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x444c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_444c7c:
    // 0x444c7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_444c80:
    if (ctx->pc == 0x444C80u) {
        ctx->pc = 0x444C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C7Cu;
        // 0x444c80: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444C84u;
        goto label_444c84;
    }
    ctx->pc = 0x444C7Cu;
    {
        const bool branch_taken_0x444c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C7Cu;
        // 0x444c80: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444c7c) {
            ctx->pc = 0x444CB0u;
            goto label_444cb0;
        }
    }
    ctx->pc = 0x444C84u;
label_444c84:
    // 0x444c84: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x444c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_444c88:
    // 0x444c88: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x444c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_444c8c:
    // 0x444c8c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x444c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_444c90:
    // 0x444c90: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x444c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_444c94:
    // 0x444c94: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x444c94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_444c98:
    // 0x444c98: 0xc1112b2  jal         func_444AC8
label_444c9c:
    if (ctx->pc == 0x444C9Cu) {
        ctx->pc = 0x444C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C98u;
        // 0x444c9c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444CA0u;
        goto label_444ca0;
    }
    ctx->pc = 0x444C98u;
    SET_GPR_U32(ctx, 31, 0x444CA0u);
    ctx->pc = 0x444C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444C98u;
    // 0x444c9c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444AC8u, 0x444C98u, 0x444CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444CA0u;
label_444ca0:
    // 0x444ca0: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x444ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_444ca4:
    // 0x444ca4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x444ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_444ca8:
    // 0x444ca8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_444cac:
    if (ctx->pc == 0x444CACu) {
        ctx->pc = 0x444CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444CA8u;
        // 0x444cac: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444CB0u;
        goto label_444cb0;
    }
    ctx->pc = 0x444CA8u;
    {
        const bool branch_taken_0x444ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x444ca8) {
            ctx->pc = 0x444CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444CA8u;
            // 0x444cac: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_444c88;
        }
    }
    ctx->pc = 0x444CB0u;
label_444cb0:
    // 0x444cb0: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x444cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_444cb4:
    // 0x444cb4: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x444cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_444cb8:
    // 0x444cb8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_444cbc:
    if (ctx->pc == 0x444CBCu) {
        ctx->pc = 0x444CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444CB8u;
        // 0x444cbc: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444CC0u;
        goto label_444cc0;
    }
    ctx->pc = 0x444CB8u;
    {
        const bool branch_taken_0x444cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444CB8u;
        // 0x444cbc: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444cb8) {
            ctx->pc = 0x444CF0u;
            goto label_444cf0;
        }
    }
    ctx->pc = 0x444CC0u;
label_444cc0:
    // 0x444cc0: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x444cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
label_444cc4:
    // 0x444cc4: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x444cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_444cc8:
    // 0x444cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x444cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_444ccc:
    // 0x444ccc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x444cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_444cd0:
    // 0x444cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x444cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_444cd4:
    // 0x444cd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x444cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_444cd8:
    // 0x444cd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x444cd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_444cdc:
    // 0x444cdc: 0xc1112b2  jal         func_444AC8
label_444ce0:
    if (ctx->pc == 0x444CE0u) {
        ctx->pc = 0x444CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444CDCu;
        // 0x444ce0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444CE4u;
        goto label_444ce4;
    }
    ctx->pc = 0x444CDCu;
    SET_GPR_U32(ctx, 31, 0x444CE4u);
    ctx->pc = 0x444CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444CDCu;
    // 0x444ce0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444AC8u, 0x444CDCu, 0x444CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444CE4u;
label_444ce4:
    // 0x444ce4: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x444ce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_444ce8:
    // 0x444ce8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_444cec:
    if (ctx->pc == 0x444CECu) {
        ctx->pc = 0x444CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444CE8u;
        // 0x444cec: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444CF0u;
        goto label_444cf0;
    }
    ctx->pc = 0x444CE8u;
    {
        const bool branch_taken_0x444ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x444CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444CE8u;
        // 0x444cec: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444ce8) {
            ctx->pc = 0x444CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_444cc8;
        }
    }
    ctx->pc = 0x444CF0u;
label_444cf0:
    // 0x444cf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x444cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_444cf4:
    // 0x444cf4: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x444cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_444cf8:
    // 0x444cf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x444cf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_444cfc:
    // 0x444cfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x444cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_444d00:
    // 0x444d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x444d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_444d04:
    // 0x444d04: 0x3e00008  jr          $ra
label_444d08:
    if (ctx->pc == 0x444D08u) {
        ctx->pc = 0x444D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444D04u;
        // 0x444d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444D0Cu;
        goto label_444d0c;
    }
    ctx->pc = 0x444D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444D04u;
        // 0x444d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444D0Cu;
label_444d0c:
    // 0x444d0c: 0x0  nop
    ctx->pc = 0x444d0cu;
    // NOP
label_444d10:
    // 0x444d10: 0x0  nop
    ctx->pc = 0x444d10u;
    // NOP
label_444d14:
    // 0x444d14: 0x0  nop
    ctx->pc = 0x444d14u;
    // NOP
label_444d18:
    // 0x444d18: 0x0  nop
    ctx->pc = 0x444d18u;
    // NOP
label_444d1c:
    // 0x444d1c: 0x0  nop
    ctx->pc = 0x444d1cu;
    // NOP
label_444d20:
    // 0x444d20: 0x0  nop
    ctx->pc = 0x444d20u;
    // NOP
label_444d24:
    // 0x444d24: 0x0  nop
    ctx->pc = 0x444d24u;
    // NOP
label_444d28:
    // 0x444d28: 0x0  nop
    ctx->pc = 0x444d28u;
    // NOP
label_444d2c:
    // 0x444d2c: 0x0  nop
    ctx->pc = 0x444d2cu;
    // NOP
label_444d30:
    // 0x444d30: 0x0  nop
    ctx->pc = 0x444d30u;
    // NOP
label_444d34:
    // 0x444d34: 0x0  nop
    ctx->pc = 0x444d34u;
    // NOP
label_444d38:
    // 0x444d38: 0x0  nop
    ctx->pc = 0x444d38u;
    // NOP
label_444d3c:
    // 0x444d3c: 0x0  nop
    ctx->pc = 0x444d3cu;
    // NOP
label_444d40:
    // 0x444d40: 0x3c010000  lui         $at, 0x0
    ctx->pc = 0x444d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)0 << 16));
label_444d44:
    // 0x444d44: 0x8c210000  lw          $at, 0x0($at)
    ctx->pc = 0x444d44u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
label_444d48:
    // 0x444d48: 0x3c1d0000  lui         $sp, 0x0
    ctx->pc = 0x444d48u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)0 << 16));
label_444d4c:
    // 0x444d4c: 0x20f809  jalr        $at
label_444d50:
    if (ctx->pc == 0x444D50u) {
        ctx->pc = 0x444D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444D4Cu;
        // 0x444d50: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444D54u;
        goto label_444d54;
    }
    ctx->pc = 0x444D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x444D54u);
        ctx->pc = 0x444D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444D4Cu;
        // 0x444d50: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444D4Cu, 0x444D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x444D54u;
label_444d54:
    // 0x444d54: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x444d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_444d58:
    // 0x444d58: 0xc  syscall     0
    ctx->pc = 0x444d58u;
    ctx->pc = 0x444D5Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_444d5c:
    // 0x444d5c: 0x0  nop
    ctx->pc = 0x444d5cu;
    // NOP
label_444d60:
    // 0x444d60: 0x0  nop
    ctx->pc = 0x444d60u;
    // NOP
label_444d64:
    // 0x444d64: 0x0  nop
    ctx->pc = 0x444d64u;
    // NOP
label_444d68:
    // 0x444d68: 0x0  nop
    ctx->pc = 0x444d68u;
    // NOP
label_444d6c:
    // 0x444d6c: 0x0  nop
    ctx->pc = 0x444d6cu;
    // NOP
label_444d70:
    // 0x444d70: 0x0  nop
    ctx->pc = 0x444d70u;
    // NOP
label_444d74:
    // 0x444d74: 0x0  nop
    ctx->pc = 0x444d74u;
    // NOP
label_444d78:
    // 0x444d78: 0x0  nop
    ctx->pc = 0x444d78u;
    // NOP
label_444d7c:
    // 0x444d7c: 0x0  nop
    ctx->pc = 0x444d7cu;
    // NOP
label_444d80:
    // 0x444d80: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x444d80u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_444d84:
    // 0x444d84: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x444d84u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_444d88:
    // 0x444d88: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x444d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_444d8c:
    // 0x444d8c: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x444d8cu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_444d90:
    // 0x444d90: 0x40f  sync.p
    ctx->pc = 0x444d90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_444d94:
    // 0x444d94: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x444d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_444d98:
    // 0x444d98: 0x8c4273e8  lw          $v0, 0x73E8($v0)
    ctx->pc = 0x444d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29672)));
label_444d9c:
    // 0x444d9c: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x444d9cu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
label_444da0:
    // 0x444da0: 0x40f  sync.p
    ctx->pc = 0x444da0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_444da4:
    // 0x444da4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x444da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_444da8:
    // 0x444da8: 0xdc4273c0  ld          $v0, 0x73C0($v0)
    ctx->pc = 0x444da8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 29632)));
label_444dac:
    // 0x444dac: 0x400011  mthi        $v0
    ctx->pc = 0x444dacu;
    ctx->hi = GPR_U64(ctx, 2);
label_444db0:
    // 0x444db0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x444db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_444db4:
    // 0x444db4: 0xdc4273c8  ld          $v0, 0x73C8($v0)
    ctx->pc = 0x444db4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 29640)));
label_444db8:
    // 0x444db8: 0x70400011  mthi1       $v0
    ctx->pc = 0x444db8u;
    ctx->hi1 = GPR_U64(ctx, 2);
label_444dbc:
    // 0x444dbc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x444dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_444dc0:
    // 0x444dc0: 0xdc4273d0  ld          $v0, 0x73D0($v0)
    ctx->pc = 0x444dc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 29648)));
label_444dc4:
    // 0x444dc4: 0x400013  mtlo        $v0
    ctx->pc = 0x444dc4u;
    ctx->lo = GPR_U64(ctx, 2);
label_444dc8:
    // 0x444dc8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x444dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_444dcc:
    // 0x444dcc: 0xdc4273d8  ld          $v0, 0x73D8($v0)
    ctx->pc = 0x444dccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 29656)));
label_444dd0:
    // 0x444dd0: 0x70400013  mtlo1       $v0
    ctx->pc = 0x444dd0u;
    ctx->lo1 = GPR_U64(ctx, 2);
label_444dd4:
    // 0x444dd4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x444dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_444dd8:
    // 0x444dd8: 0xdc4273e0  ld          $v0, 0x73E0($v0)
    ctx->pc = 0x444dd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 29664)));
label_444ddc:
    // 0x444ddc: 0x400029  mtsa        $v0
    ctx->pc = 0x444ddcu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_444de0:
    // 0x444de0: 0x40f  sync.p
    ctx->pc = 0x444de0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_444de4:
    // 0x444de4: 0x3c1a0070  lui         $k0, 0x70
    ctx->pc = 0x444de4u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)112 << 16));
label_444de8:
    // 0x444de8: 0x275a71c0  addiu       $k0, $k0, 0x71C0
    ctx->pc = 0x444de8u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 29120));
label_444dec:
    // 0x444dec: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x444decu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
label_444df0:
    // 0x444df0: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x444df0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
label_444df4:
    // 0x444df4: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x444df4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
label_444df8:
    // 0x444df8: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x444df8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
label_444dfc:
    // 0x444dfc: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x444dfcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
label_444e00:
    // 0x444e00: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x444e00u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
label_444e04:
    // 0x444e04: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x444e04u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
label_444e08:
    // 0x444e08: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x444e08u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
label_444e0c:
    // 0x444e0c: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x444e0cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
label_444e10:
    // 0x444e10: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x444e10u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
label_444e14:
    // 0x444e14: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x444e14u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
label_444e18:
    // 0x444e18: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x444e18u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
label_444e1c:
    // 0x444e1c: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x444e1cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
label_444e20:
    // 0x444e20: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x444e20u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
label_444e24:
    // 0x444e24: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x444e24u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
label_444e28:
    // 0x444e28: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x444e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
label_444e2c:
    // 0x444e2c: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x444e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
label_444e30:
    // 0x444e30: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x444e30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
label_444e34:
    // 0x444e34: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x444e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
label_444e38:
    // 0x444e38: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x444e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
label_444e3c:
    // 0x444e3c: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x444e3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
label_444e40:
    // 0x444e40: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x444e40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
label_444e44:
    // 0x444e44: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x444e44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
label_444e48:
    // 0x444e48: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x444e48u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
label_444e4c:
    // 0x444e4c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x444e4cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
label_444e50:
    // 0x444e50: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x444e50u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
label_444e54:
    // 0x444e54: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x444e54u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
label_444e58:
    // 0x444e58: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x444e58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
label_444e5c:
    // 0x444e5c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x444e5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
label_444e60:
    // 0x444e60: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x444e60u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_444e64:
    // 0x444e64: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x444e64u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
label_444e68:
    // 0x444e68: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x444e68u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_444e6c:
    // 0x444e6c: 0x40f  sync.p
    ctx->pc = 0x444e6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_444e70:
    // 0x444e70: 0x42000018  eret
    ctx->pc = 0x444e70u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_444e74:
    // 0x444e74: 0x0  nop
    ctx->pc = 0x444e74u;
    // NOP
label_444e78:
    // 0x444e78: 0x0  nop
    ctx->pc = 0x444e78u;
    // NOP
label_444e7c:
    // 0x444e7c: 0x0  nop
    ctx->pc = 0x444e7cu;
    // NOP
label_444e80:
    // 0x444e80: 0x3c010000  lui         $at, 0x0
    ctx->pc = 0x444e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)0 << 16));
label_444e84:
    // 0x444e84: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x444e84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_444e88:
    // 0x444e88: 0x8c210000  lw          $at, 0x0($at)
    ctx->pc = 0x444e88u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
label_444e8c:
    // 0x444e8c: 0x3c1d0000  lui         $sp, 0x0
    ctx->pc = 0x444e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)0 << 16));
label_444e90:
    // 0x444e90: 0x20f809  jalr        $at
label_444e94:
    if (ctx->pc == 0x444E94u) {
        ctx->pc = 0x444E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444E90u;
        // 0x444e94: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444E98u;
        goto label_444e98;
    }
    ctx->pc = 0x444E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x444E98u);
        ctx->pc = 0x444E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444E90u;
        // 0x444e94: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444E90u, 0x444E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x444E98u;
label_444e98:
    // 0x444e98: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x444e98u;
    runtime->handleBreak(rdram, ctx);
label_444e9c:
    // 0x444e9c: 0x0  nop
    ctx->pc = 0x444e9cu;
    // NOP
    ctx->pc = 0x444ea0u;
}
