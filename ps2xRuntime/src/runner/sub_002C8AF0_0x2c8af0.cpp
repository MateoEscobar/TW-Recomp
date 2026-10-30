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

// Function: sub_002C8AF0
// Address: 0x2c8af0 - 0x2c8e18
void sub_002C8AF0_0x2c8af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8AF0_0x2c8af0");
#endif

    switch (ctx->pc) {
        case 0x2c8af0u: goto label_2c8af0;
        case 0x2c8af4u: goto label_2c8af4;
        case 0x2c8af8u: goto label_2c8af8;
        case 0x2c8afcu: goto label_2c8afc;
        case 0x2c8b00u: goto label_2c8b00;
        case 0x2c8b04u: goto label_2c8b04;
        case 0x2c8b08u: goto label_2c8b08;
        case 0x2c8b0cu: goto label_2c8b0c;
        case 0x2c8b10u: goto label_2c8b10;
        case 0x2c8b14u: goto label_2c8b14;
        case 0x2c8b18u: goto label_2c8b18;
        case 0x2c8b1cu: goto label_2c8b1c;
        case 0x2c8b20u: goto label_2c8b20;
        case 0x2c8b24u: goto label_2c8b24;
        case 0x2c8b28u: goto label_2c8b28;
        case 0x2c8b2cu: goto label_2c8b2c;
        case 0x2c8b30u: goto label_2c8b30;
        case 0x2c8b34u: goto label_2c8b34;
        case 0x2c8b38u: goto label_2c8b38;
        case 0x2c8b3cu: goto label_2c8b3c;
        case 0x2c8b40u: goto label_2c8b40;
        case 0x2c8b44u: goto label_2c8b44;
        case 0x2c8b48u: goto label_2c8b48;
        case 0x2c8b4cu: goto label_2c8b4c;
        case 0x2c8b50u: goto label_2c8b50;
        case 0x2c8b54u: goto label_2c8b54;
        case 0x2c8b58u: goto label_2c8b58;
        case 0x2c8b5cu: goto label_2c8b5c;
        case 0x2c8b60u: goto label_2c8b60;
        case 0x2c8b64u: goto label_2c8b64;
        case 0x2c8b68u: goto label_2c8b68;
        case 0x2c8b6cu: goto label_2c8b6c;
        case 0x2c8b70u: goto label_2c8b70;
        case 0x2c8b74u: goto label_2c8b74;
        case 0x2c8b78u: goto label_2c8b78;
        case 0x2c8b7cu: goto label_2c8b7c;
        case 0x2c8b80u: goto label_2c8b80;
        case 0x2c8b84u: goto label_2c8b84;
        case 0x2c8b88u: goto label_2c8b88;
        case 0x2c8b8cu: goto label_2c8b8c;
        case 0x2c8b90u: goto label_2c8b90;
        case 0x2c8b94u: goto label_2c8b94;
        case 0x2c8b98u: goto label_2c8b98;
        case 0x2c8b9cu: goto label_2c8b9c;
        case 0x2c8ba0u: goto label_2c8ba0;
        case 0x2c8ba4u: goto label_2c8ba4;
        case 0x2c8ba8u: goto label_2c8ba8;
        case 0x2c8bacu: goto label_2c8bac;
        case 0x2c8bb0u: goto label_2c8bb0;
        case 0x2c8bb4u: goto label_2c8bb4;
        case 0x2c8bb8u: goto label_2c8bb8;
        case 0x2c8bbcu: goto label_2c8bbc;
        case 0x2c8bc0u: goto label_2c8bc0;
        case 0x2c8bc4u: goto label_2c8bc4;
        case 0x2c8bc8u: goto label_2c8bc8;
        case 0x2c8bccu: goto label_2c8bcc;
        case 0x2c8bd0u: goto label_2c8bd0;
        case 0x2c8bd4u: goto label_2c8bd4;
        case 0x2c8bd8u: goto label_2c8bd8;
        case 0x2c8bdcu: goto label_2c8bdc;
        case 0x2c8be0u: goto label_2c8be0;
        case 0x2c8be4u: goto label_2c8be4;
        case 0x2c8be8u: goto label_2c8be8;
        case 0x2c8becu: goto label_2c8bec;
        case 0x2c8bf0u: goto label_2c8bf0;
        case 0x2c8bf4u: goto label_2c8bf4;
        case 0x2c8bf8u: goto label_2c8bf8;
        case 0x2c8bfcu: goto label_2c8bfc;
        case 0x2c8c00u: goto label_2c8c00;
        case 0x2c8c04u: goto label_2c8c04;
        case 0x2c8c08u: goto label_2c8c08;
        case 0x2c8c0cu: goto label_2c8c0c;
        case 0x2c8c10u: goto label_2c8c10;
        case 0x2c8c14u: goto label_2c8c14;
        case 0x2c8c18u: goto label_2c8c18;
        case 0x2c8c1cu: goto label_2c8c1c;
        case 0x2c8c20u: goto label_2c8c20;
        case 0x2c8c24u: goto label_2c8c24;
        case 0x2c8c28u: goto label_2c8c28;
        case 0x2c8c2cu: goto label_2c8c2c;
        case 0x2c8c30u: goto label_2c8c30;
        case 0x2c8c34u: goto label_2c8c34;
        case 0x2c8c38u: goto label_2c8c38;
        case 0x2c8c3cu: goto label_2c8c3c;
        case 0x2c8c40u: goto label_2c8c40;
        case 0x2c8c44u: goto label_2c8c44;
        case 0x2c8c48u: goto label_2c8c48;
        case 0x2c8c4cu: goto label_2c8c4c;
        case 0x2c8c50u: goto label_2c8c50;
        case 0x2c8c54u: goto label_2c8c54;
        case 0x2c8c58u: goto label_2c8c58;
        case 0x2c8c5cu: goto label_2c8c5c;
        case 0x2c8c60u: goto label_2c8c60;
        case 0x2c8c64u: goto label_2c8c64;
        case 0x2c8c68u: goto label_2c8c68;
        case 0x2c8c6cu: goto label_2c8c6c;
        case 0x2c8c70u: goto label_2c8c70;
        case 0x2c8c74u: goto label_2c8c74;
        case 0x2c8c78u: goto label_2c8c78;
        case 0x2c8c7cu: goto label_2c8c7c;
        case 0x2c8c80u: goto label_2c8c80;
        case 0x2c8c84u: goto label_2c8c84;
        case 0x2c8c88u: goto label_2c8c88;
        case 0x2c8c8cu: goto label_2c8c8c;
        case 0x2c8c90u: goto label_2c8c90;
        case 0x2c8c94u: goto label_2c8c94;
        case 0x2c8c98u: goto label_2c8c98;
        case 0x2c8c9cu: goto label_2c8c9c;
        case 0x2c8ca0u: goto label_2c8ca0;
        case 0x2c8ca4u: goto label_2c8ca4;
        case 0x2c8ca8u: goto label_2c8ca8;
        case 0x2c8cacu: goto label_2c8cac;
        case 0x2c8cb0u: goto label_2c8cb0;
        case 0x2c8cb4u: goto label_2c8cb4;
        case 0x2c8cb8u: goto label_2c8cb8;
        case 0x2c8cbcu: goto label_2c8cbc;
        case 0x2c8cc0u: goto label_2c8cc0;
        case 0x2c8cc4u: goto label_2c8cc4;
        case 0x2c8cc8u: goto label_2c8cc8;
        case 0x2c8cccu: goto label_2c8ccc;
        case 0x2c8cd0u: goto label_2c8cd0;
        case 0x2c8cd4u: goto label_2c8cd4;
        case 0x2c8cd8u: goto label_2c8cd8;
        case 0x2c8cdcu: goto label_2c8cdc;
        case 0x2c8ce0u: goto label_2c8ce0;
        case 0x2c8ce4u: goto label_2c8ce4;
        case 0x2c8ce8u: goto label_2c8ce8;
        case 0x2c8cecu: goto label_2c8cec;
        case 0x2c8cf0u: goto label_2c8cf0;
        case 0x2c8cf4u: goto label_2c8cf4;
        case 0x2c8cf8u: goto label_2c8cf8;
        case 0x2c8cfcu: goto label_2c8cfc;
        case 0x2c8d00u: goto label_2c8d00;
        case 0x2c8d04u: goto label_2c8d04;
        case 0x2c8d08u: goto label_2c8d08;
        case 0x2c8d0cu: goto label_2c8d0c;
        case 0x2c8d10u: goto label_2c8d10;
        case 0x2c8d14u: goto label_2c8d14;
        case 0x2c8d18u: goto label_2c8d18;
        case 0x2c8d1cu: goto label_2c8d1c;
        case 0x2c8d20u: goto label_2c8d20;
        case 0x2c8d24u: goto label_2c8d24;
        case 0x2c8d28u: goto label_2c8d28;
        case 0x2c8d2cu: goto label_2c8d2c;
        case 0x2c8d30u: goto label_2c8d30;
        case 0x2c8d34u: goto label_2c8d34;
        case 0x2c8d38u: goto label_2c8d38;
        case 0x2c8d3cu: goto label_2c8d3c;
        case 0x2c8d40u: goto label_2c8d40;
        case 0x2c8d44u: goto label_2c8d44;
        case 0x2c8d48u: goto label_2c8d48;
        case 0x2c8d4cu: goto label_2c8d4c;
        case 0x2c8d50u: goto label_2c8d50;
        case 0x2c8d54u: goto label_2c8d54;
        case 0x2c8d58u: goto label_2c8d58;
        case 0x2c8d5cu: goto label_2c8d5c;
        case 0x2c8d60u: goto label_2c8d60;
        case 0x2c8d64u: goto label_2c8d64;
        case 0x2c8d68u: goto label_2c8d68;
        case 0x2c8d6cu: goto label_2c8d6c;
        case 0x2c8d70u: goto label_2c8d70;
        case 0x2c8d74u: goto label_2c8d74;
        case 0x2c8d78u: goto label_2c8d78;
        case 0x2c8d7cu: goto label_2c8d7c;
        case 0x2c8d80u: goto label_2c8d80;
        case 0x2c8d84u: goto label_2c8d84;
        case 0x2c8d88u: goto label_2c8d88;
        case 0x2c8d8cu: goto label_2c8d8c;
        case 0x2c8d90u: goto label_2c8d90;
        case 0x2c8d94u: goto label_2c8d94;
        case 0x2c8d98u: goto label_2c8d98;
        case 0x2c8d9cu: goto label_2c8d9c;
        case 0x2c8da0u: goto label_2c8da0;
        case 0x2c8da4u: goto label_2c8da4;
        case 0x2c8da8u: goto label_2c8da8;
        case 0x2c8dacu: goto label_2c8dac;
        case 0x2c8db0u: goto label_2c8db0;
        case 0x2c8db4u: goto label_2c8db4;
        case 0x2c8db8u: goto label_2c8db8;
        case 0x2c8dbcu: goto label_2c8dbc;
        case 0x2c8dc0u: goto label_2c8dc0;
        case 0x2c8dc4u: goto label_2c8dc4;
        case 0x2c8dc8u: goto label_2c8dc8;
        case 0x2c8dccu: goto label_2c8dcc;
        case 0x2c8dd0u: goto label_2c8dd0;
        case 0x2c8dd4u: goto label_2c8dd4;
        case 0x2c8dd8u: goto label_2c8dd8;
        case 0x2c8ddcu: goto label_2c8ddc;
        case 0x2c8de0u: goto label_2c8de0;
        case 0x2c8de4u: goto label_2c8de4;
        case 0x2c8de8u: goto label_2c8de8;
        case 0x2c8decu: goto label_2c8dec;
        case 0x2c8df0u: goto label_2c8df0;
        case 0x2c8df4u: goto label_2c8df4;
        case 0x2c8df8u: goto label_2c8df8;
        case 0x2c8dfcu: goto label_2c8dfc;
        case 0x2c8e00u: goto label_2c8e00;
        case 0x2c8e04u: goto label_2c8e04;
        case 0x2c8e08u: goto label_2c8e08;
        case 0x2c8e0cu: goto label_2c8e0c;
        case 0x2c8e10u: goto label_2c8e10;
        case 0x2c8e14u: goto label_2c8e14;
        default: break;
    }

    ctx->pc = 0x2c8af0u;

label_2c8af0:
    // 0x2c8af0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c8af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2c8af4:
    // 0x2c8af4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2c8af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2c8af8:
    // 0x2c8af8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2c8af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_2c8afc:
    // 0x2c8afc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b00:
    // 0x2c8b00: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2c8b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2c8b04:
    // 0x2c8b04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c8b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b08:
    // 0x2c8b08: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2c8b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2c8b0c:
    // 0x2c8b0c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c8b0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b10:
    // 0x2c8b10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c8b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2c8b14:
    // 0x2c8b14: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2c8b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2c8b18:
    // 0x2c8b18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c8b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c8b1c:
    // 0x2c8b1c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2c8b1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2c8b20:
    // 0x2c8b20: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2c8b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2c8b24:
    // 0x2c8b24: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c8b24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c8b28:
    // 0x2c8b28: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2c8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2c8b2c:
    // 0x2c8b2c: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2c8b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c8b30:
    // 0x2c8b30: 0xc0e409a  jal         func_390268
label_2c8b34:
    if (ctx->pc == 0x2C8B34u) {
        ctx->pc = 0x2C8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B30u;
        // 0x2c8b34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B38u;
        goto label_2c8b38;
    }
    ctx->pc = 0x2C8B30u;
    SET_GPR_U32(ctx, 31, 0x2C8B38u);
    ctx->pc = 0x2C8B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B30u;
    // 0x2c8b34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C8B30u, 0x2C8B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B38u;
label_2c8b38:
    // 0x2c8b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b3c:
    // 0x2c8b3c: 0xc0a34d6  jal         func_28D358
label_2c8b40:
    if (ctx->pc == 0x2C8B40u) {
        ctx->pc = 0x2C8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B3Cu;
        // 0x2c8b40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B44u;
        goto label_2c8b44;
    }
    ctx->pc = 0x2C8B3Cu;
    SET_GPR_U32(ctx, 31, 0x2C8B44u);
    ctx->pc = 0x2C8B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B3Cu;
    // 0x2c8b40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2C8B3Cu, 0x2C8B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B44u;
label_2c8b44:
    // 0x2c8b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b48:
    // 0x2c8b48: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x2c8b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_2c8b4c:
    // 0x2c8b4c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2c8b50:
    if (ctx->pc == 0x2C8B50u) {
        ctx->pc = 0x2C8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B4Cu;
        // 0x2c8b50: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B54u;
        goto label_2c8b54;
    }
    ctx->pc = 0x2C8B4Cu;
    {
        const bool branch_taken_0x2c8b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8b4c) {
            ctx->pc = 0x2C8B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B4Cu;
            // 0x2c8b50: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8B78u;
            goto label_2c8b78;
        }
    }
    ctx->pc = 0x2C8B54u;
label_2c8b54:
    // 0x2c8b54: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2c8b58:
    if (ctx->pc == 0x2C8B58u) {
        ctx->pc = 0x2C8B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B54u;
        // 0x2c8b58: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B5Cu;
        goto label_2c8b5c;
    }
    ctx->pc = 0x2C8B54u;
    {
        const bool branch_taken_0x2c8b54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B54u;
        // 0x2c8b58: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b54) {
            ctx->pc = 0x2C8B7Cu;
            goto label_2c8b7c;
        }
    }
    ctx->pc = 0x2C8B5Cu;
label_2c8b5c:
    // 0x2c8b5c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c8b60:
    // 0x2c8b60: 0xc0a3792  jal         func_28DE48
label_2c8b64:
    if (ctx->pc == 0x2C8B64u) {
        ctx->pc = 0x2C8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B60u;
        // 0x2c8b64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B68u;
        goto label_2c8b68;
    }
    ctx->pc = 0x2C8B60u;
    SET_GPR_U32(ctx, 31, 0x2C8B68u);
    ctx->pc = 0x2C8B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B60u;
    // 0x2c8b64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2C8B60u, 0x2C8B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B68u;
label_2c8b68:
    // 0x2c8b68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c8b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8b6c:
    // 0x2c8b6c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2c8b70:
    if (ctx->pc == 0x2C8B70u) {
        ctx->pc = 0x2C8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B6Cu;
        // 0x2c8b70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B74u;
        goto label_2c8b74;
    }
    ctx->pc = 0x2C8B6Cu;
    {
        const bool branch_taken_0x2c8b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B6Cu;
        // 0x2c8b70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b6c) {
            ctx->pc = 0x2C8B7Cu;
            goto label_2c8b7c;
        }
    }
    ctx->pc = 0x2C8B74u;
label_2c8b74:
    // 0x2c8b74: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2c8b74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8b78:
    // 0x2c8b78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c8b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c8b7c:
    // 0x2c8b7c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2c8b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c8b80:
    // 0x2c8b80: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2c8b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2c8b84:
    // 0x2c8b84: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x2c8b84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2c8b88:
    // 0x2c8b88: 0x92250018  lbu         $a1, 0x18($s1)
    ctx->pc = 0x2c8b88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_2c8b8c:
    // 0x2c8b8c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2c8b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2c8b90:
    // 0x2c8b90: 0x80c2002e  lb          $v0, 0x2E($a2)
    ctx->pc = 0x2c8b90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 46)));
label_2c8b94:
    // 0x2c8b94: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2c8b94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8b98:
    // 0x2c8b98: 0x8c740048  lw          $s4, 0x48($v1)
    ctx->pc = 0x2c8b98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2c8b9c:
    // 0x2c8b9c: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
label_2c8ba0:
    if (ctx->pc == 0x2C8BA0u) {
        ctx->pc = 0x2C8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B9Cu;
        // 0x2c8ba0: 0x85a80b  movn        $s5, $a0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BA4u;
        goto label_2c8ba4;
    }
    ctx->pc = 0x2C8B9Cu;
    {
        const bool branch_taken_0x2c8b9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B9Cu;
        // 0x2c8ba0: 0x85a80b  movn        $s5, $a0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b9c) {
            ctx->pc = 0x2C8C3Cu;
            goto label_2c8c3c;
        }
    }
    ctx->pc = 0x2C8BA4u;
label_2c8ba4:
    // 0x2c8ba4: 0xc0a36c2  jal         func_28DB08
label_2c8ba8:
    if (ctx->pc == 0x2C8BA8u) {
        ctx->pc = 0x2C8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BA4u;
        // 0x2c8ba8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BACu;
        goto label_2c8bac;
    }
    ctx->pc = 0x2C8BA4u;
    SET_GPR_U32(ctx, 31, 0x2C8BACu);
    ctx->pc = 0x2C8BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8BA4u;
    // 0x2c8ba8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2C8BA4u, 0x2C8BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8BACu;
label_2c8bac:
    // 0x2c8bac: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c8bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2c8bb0:
    // 0x2c8bb0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2c8bb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2c8bb4:
    // 0x2c8bb4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2c8bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c8bb8:
    // 0x2c8bb8: 0xa0f809  jalr        $a1
label_2c8bbc:
    if (ctx->pc == 0x2C8BBCu) {
        ctx->pc = 0x2C8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BB8u;
        // 0x2c8bbc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BC0u;
        goto label_2c8bc0;
    }
    ctx->pc = 0x2C8BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2C8BC0u);
        ctx->pc = 0x2C8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BB8u;
        // 0x2c8bbc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8BB8u, 0x2C8BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C8BC0u;
label_2c8bc0:
    // 0x2c8bc0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c8bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c8bc4:
    // 0x2c8bc4: 0x14430089  bne         $v0, $v1, . + 4 + (0x89 << 2)
label_2c8bc8:
    if (ctx->pc == 0x2C8BC8u) {
        ctx->pc = 0x2C8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BC4u;
        // 0x2c8bc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BCCu;
        goto label_2c8bcc;
    }
    ctx->pc = 0x2C8BC4u;
    {
        const bool branch_taken_0x2c8bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BC4u;
        // 0x2c8bc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bc4) {
            ctx->pc = 0x2C8DECu;
            goto label_2c8dec;
        }
    }
    ctx->pc = 0x2C8BCCu;
label_2c8bcc:
    // 0x2c8bcc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2c8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2c8bd0:
    // 0x2c8bd0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_2c8bd4:
    if (ctx->pc == 0x2C8BD4u) {
        ctx->pc = 0x2C8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BD0u;
        // 0x2c8bd4: 0x54102b  sltu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BD8u;
        goto label_2c8bd8;
    }
    ctx->pc = 0x2C8BD0u;
    {
        const bool branch_taken_0x2c8bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BD0u;
        // 0x2c8bd4: 0x54102b  sltu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bd0) {
            ctx->pc = 0x2C8C6Cu;
            goto label_2c8c6c;
        }
    }
    ctx->pc = 0x2C8BD8u;
label_2c8bd8:
    // 0x2c8bd8: 0x50400084  beql        $v0, $zero, . + 4 + (0x84 << 2)
label_2c8bdc:
    if (ctx->pc == 0x2C8BDCu) {
        ctx->pc = 0x2C8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BD8u;
        // 0x2c8bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BE0u;
        goto label_2c8be0;
    }
    ctx->pc = 0x2C8BD8u;
    {
        const bool branch_taken_0x2c8bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8bd8) {
            ctx->pc = 0x2C8BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BD8u;
            // 0x2c8bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8DECu;
            goto label_2c8dec;
        }
    }
    ctx->pc = 0x2C8BE0u;
label_2c8be0:
    // 0x2c8be0: 0x56d30022  bnel        $s6, $s3, . + 4 + (0x22 << 2)
label_2c8be4:
    if (ctx->pc == 0x2C8BE4u) {
        ctx->pc = 0x2C8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BE0u;
        // 0x2c8be4: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BE8u;
        goto label_2c8be8;
    }
    ctx->pc = 0x2C8BE0u;
    {
        const bool branch_taken_0x2c8be0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 19));
        if (branch_taken_0x2c8be0) {
            ctx->pc = 0x2C8BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BE0u;
            // 0x2c8be4: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C6Cu;
            goto label_2c8c6c;
        }
    }
    ctx->pc = 0x2C8BE8u;
label_2c8be8:
    // 0x2c8be8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c8bec:
    // 0x2c8bec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c8becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c8bf0:
    // 0x2c8bf0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2c8bf4:
    if (ctx->pc == 0x2C8BF4u) {
        ctx->pc = 0x2C8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BF0u;
        // 0x2c8bf4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BF8u;
        goto label_2c8bf8;
    }
    ctx->pc = 0x2C8BF0u;
    {
        const bool branch_taken_0x2c8bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BF0u;
        // 0x2c8bf4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bf0) {
            ctx->pc = 0x2C8C14u;
            goto label_2c8c14;
        }
    }
    ctx->pc = 0x2C8BF8u;
label_2c8bf8:
    // 0x2c8bf8: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2c8bf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_2c8bfc:
    // 0x2c8bfc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c8bfcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2c8c00:
    // 0x2c8c00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c8c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c8c04:
    // 0x2c8c04: 0x14560003  bne         $v0, $s6, . + 4 + (0x3 << 2)
label_2c8c08:
    if (ctx->pc == 0x2C8C08u) {
        ctx->pc = 0x2C8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C04u;
        // 0x2c8c08: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C0Cu;
        goto label_2c8c0c;
    }
    ctx->pc = 0x2C8C04u;
    {
        const bool branch_taken_0x2c8c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2C8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C04u;
        // 0x2c8c08: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c04) {
            ctx->pc = 0x2C8C14u;
            goto label_2c8c14;
        }
    }
    ctx->pc = 0x2C8C0Cu;
label_2c8c0c:
    // 0x2c8c0c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2c8c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2c8c10:
    // 0x2c8c10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c8c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c8c14:
    // 0x2c8c14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c8c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c18:
    // 0x2c8c18: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2c8c18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c8c1c:
    // 0x2c8c1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c8c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c20:
    // 0x2c8c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c8c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c24:
    // 0x2c8c24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c8c24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c28:
    // 0x2c8c28: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c8c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8c2c:
    // 0x2c8c2c: 0xc088178  jal         func_2205E0
label_2c8c30:
    if (ctx->pc == 0x2C8C30u) {
        ctx->pc = 0x2C8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C2Cu;
        // 0x2c8c30: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C34u;
        goto label_2c8c34;
    }
    ctx->pc = 0x2C8C2Cu;
    SET_GPR_U32(ctx, 31, 0x2C8C34u);
    ctx->pc = 0x2C8C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8C2Cu;
    // 0x2c8c30: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C8C2Cu, 0x2C8C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C34u;
label_2c8c34:
    // 0x2c8c34: 0x1000000d  b           . + 4 + (0xD << 2)
label_2c8c38:
    if (ctx->pc == 0x2C8C38u) {
        ctx->pc = 0x2C8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C34u;
        // 0x2c8c38: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C3Cu;
        goto label_2c8c3c;
    }
    ctx->pc = 0x2C8C34u;
    {
        const bool branch_taken_0x2c8c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C34u;
        // 0x2c8c38: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c34) {
            ctx->pc = 0x2C8C6Cu;
            goto label_2c8c6c;
        }
    }
    ctx->pc = 0x2C8C3Cu;
label_2c8c3c:
    // 0x2c8c3c: 0xc08a08a  jal         func_228228
label_2c8c40:
    if (ctx->pc == 0x2C8C40u) {
        ctx->pc = 0x2C8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C3Cu;
        // 0x2c8c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C44u;
        goto label_2c8c44;
    }
    ctx->pc = 0x2C8C3Cu;
    SET_GPR_U32(ctx, 31, 0x2C8C44u);
    ctx->pc = 0x2C8C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8C3Cu;
    // 0x2c8c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2C8C3Cu, 0x2C8C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C44u;
label_2c8c44:
    // 0x2c8c44: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
label_2c8c48:
    if (ctx->pc == 0x2C8C48u) {
        ctx->pc = 0x2C8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C44u;
        // 0x2c8c48: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C4Cu;
        goto label_2c8c4c;
    }
    ctx->pc = 0x2C8C44u;
    {
        const bool branch_taken_0x2c8c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2c8c44) {
            ctx->pc = 0x2C8C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C44u;
            // 0x2c8c48: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C60u;
            goto label_2c8c60;
        }
    }
    ctx->pc = 0x2C8C4Cu;
label_2c8c4c:
    // 0x2c8c4c: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x2c8c4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_2c8c50:
    // 0x2c8c50: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2c8c54:
    if (ctx->pc == 0x2C8C54u) {
        ctx->pc = 0x2C8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C50u;
        // 0x2c8c54: 0xa2330019  sb          $s3, 0x19($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C58u;
        goto label_2c8c58;
    }
    ctx->pc = 0x2C8C50u;
    {
        const bool branch_taken_0x2c8c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c50) {
            ctx->pc = 0x2C8C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C50u;
            // 0x2c8c54: 0xa2330019  sb          $s3, 0x19($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C6Cu;
            goto label_2c8c6c;
        }
    }
    ctx->pc = 0x2C8C58u;
label_2c8c58:
    // 0x2c8c58: 0x10000064  b           . + 4 + (0x64 << 2)
label_2c8c5c:
    if (ctx->pc == 0x2C8C5Cu) {
        ctx->pc = 0x2C8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C58u;
        // 0x2c8c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C60u;
        goto label_2c8c60;
    }
    ctx->pc = 0x2C8C58u;
    {
        const bool branch_taken_0x2c8c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C58u;
        // 0x2c8c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c58) {
            ctx->pc = 0x2C8DECu;
            goto label_2c8dec;
        }
    }
    ctx->pc = 0x2C8C60u;
label_2c8c60:
    // 0x2c8c60: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2c8c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c8c64:
    // 0x2c8c64: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2c8c68:
    if (ctx->pc == 0x2C8C68u) {
        ctx->pc = 0x2C8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C64u;
        // 0x2c8c68: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C6Cu;
        goto label_2c8c6c;
    }
    ctx->pc = 0x2C8C64u;
    {
        const bool branch_taken_0x2c8c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c64) {
            ctx->pc = 0x2C8C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C64u;
            // 0x2c8c68: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C74u;
            goto label_2c8c74;
        }
    }
    ctx->pc = 0x2C8C6Cu;
label_2c8c6c:
    // 0x2c8c6c: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2c8c70:
    if (ctx->pc == 0x2C8C70u) {
        ctx->pc = 0x2C8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C6Cu;
        // 0x2c8c70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C74u;
        goto label_2c8c74;
    }
    ctx->pc = 0x2C8C6Cu;
    {
        const bool branch_taken_0x2c8c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C6Cu;
        // 0x2c8c70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c6c) {
            ctx->pc = 0x2C8DECu;
            goto label_2c8dec;
        }
    }
    ctx->pc = 0x2C8C74u;
label_2c8c74:
    // 0x2c8c74: 0xc08bfa0  jal         func_22FE80
label_2c8c78:
    if (ctx->pc == 0x2C8C78u) {
        ctx->pc = 0x2C8C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C74u;
        // 0x2c8c78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C7Cu;
        goto label_2c8c7c;
    }
    ctx->pc = 0x2C8C74u;
    SET_GPR_U32(ctx, 31, 0x2C8C7Cu);
    ctx->pc = 0x2C8C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8C74u;
    // 0x2c8c78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2C8C74u, 0x2C8C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C7Cu;
label_2c8c7c:
    // 0x2c8c7c: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
label_2c8c80:
    if (ctx->pc == 0x2C8C80u) {
        ctx->pc = 0x2C8C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C7Cu;
        // 0x2c8c80: 0x92220018  lbu         $v0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C84u;
        goto label_2c8c84;
    }
    ctx->pc = 0x2C8C7Cu;
    {
        const bool branch_taken_0x2c8c7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c7c) {
            ctx->pc = 0x2C8C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C7Cu;
            // 0x2c8c80: 0x92220018  lbu         $v0, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8D04u;
            goto label_2c8d04;
        }
    }
    ctx->pc = 0x2C8C84u;
label_2c8c84:
    // 0x2c8c84: 0x92220019  lbu         $v0, 0x19($s1)
    ctx->pc = 0x2c8c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
label_2c8c88:
    // 0x2c8c88: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2c8c8c:
    if (ctx->pc == 0x2C8C8Cu) {
        ctx->pc = 0x2C8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C88u;
        // 0x2c8c8c: 0x92220018  lbu         $v0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C90u;
        goto label_2c8c90;
    }
    ctx->pc = 0x2C8C88u;
    {
        const bool branch_taken_0x2c8c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c88) {
            ctx->pc = 0x2C8C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C88u;
            // 0x2c8c8c: 0x92220018  lbu         $v0, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8D04u;
            goto label_2c8d04;
        }
    }
    ctx->pc = 0x2C8C90u;
label_2c8c90:
    // 0x2c8c90: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2c8c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2c8c94:
    // 0x2c8c94: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2c8c98:
    // 0x2c8c98: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2c8c98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2c8c9c:
    // 0x2c8c9c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2c8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2c8ca0:
    // 0x2c8ca0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c8ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c8ca4:
    // 0x2c8ca4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c8ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2c8ca8:
    // 0x2c8ca8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c8ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c8cac:
    // 0x2c8cac: 0xc0cdb62  jal         func_336D88
label_2c8cb0:
    if (ctx->pc == 0x2C8CB0u) {
        ctx->pc = 0x2C8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CACu;
        // 0x2c8cb0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8CB4u;
        goto label_2c8cb4;
    }
    ctx->pc = 0x2C8CACu;
    SET_GPR_U32(ctx, 31, 0x2C8CB4u);
    ctx->pc = 0x2C8CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8CACu;
    // 0x2c8cb0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2C8CACu, 0x2C8CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CB4u;
label_2c8cb4:
    // 0x2c8cb4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c8cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c8cb8:
    // 0x2c8cb8: 0xc0a367c  jal         func_28D9F0
label_2c8cbc:
    if (ctx->pc == 0x2C8CBCu) {
        ctx->pc = 0x2C8CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CB8u;
        // 0x2c8cbc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8CC0u;
        goto label_2c8cc0;
    }
    ctx->pc = 0x2C8CB8u;
    SET_GPR_U32(ctx, 31, 0x2C8CC0u);
    ctx->pc = 0x2C8CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8CB8u;
    // 0x2c8cbc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C8CB8u, 0x2C8CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CC0u;
label_2c8cc0:
    // 0x2c8cc0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2c8cc4:
    if (ctx->pc == 0x2C8CC4u) {
        ctx->pc = 0x2C8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CC0u;
        // 0x2c8cc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8CC8u;
        goto label_2c8cc8;
    }
    ctx->pc = 0x2C8CC0u;
    {
        const bool branch_taken_0x2c8cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CC0u;
        // 0x2c8cc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8cc0) {
            ctx->pc = 0x2C8CF4u;
            goto label_2c8cf4;
        }
    }
    ctx->pc = 0x2C8CC8u;
label_2c8cc8:
    // 0x2c8cc8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c8cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2c8ccc:
    // 0x2c8ccc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c8cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c8cd0:
    // 0x2c8cd0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2c8cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2c8cd4:
    // 0x2c8cd4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c8cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2c8cd8:
    // 0x2c8cd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c8cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8cdc:
    // 0x2c8cdc: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x2c8cdcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
label_2c8ce0:
    // 0x2c8ce0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c8ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c8ce4:
    // 0x2c8ce4: 0x460da340  add.s       $f13, $f20, $f13
    ctx->pc = 0x2c8ce4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[13]);
label_2c8ce8:
    // 0x2c8ce8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c8ce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8cec:
    // 0x2c8cec: 0xc0bf3d4  jal         func_2FCF50
label_2c8cf0:
    if (ctx->pc == 0x2C8CF0u) {
        ctx->pc = 0x2C8CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CECu;
        // 0x2c8cf0: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8CF4u;
        goto label_2c8cf4;
    }
    ctx->pc = 0x2C8CECu;
    SET_GPR_U32(ctx, 31, 0x2C8CF4u);
    ctx->pc = 0x2C8CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8CECu;
    // 0x2c8cf0: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2C8CECu, 0x2C8CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CF4u;
label_2c8cf4:
    // 0x2c8cf4: 0x268201f4  addiu       $v0, $s4, 0x1F4
    ctx->pc = 0x2c8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 500));
label_2c8cf8:
    // 0x2c8cf8: 0xa2330019  sb          $s3, 0x19($s1)
    ctx->pc = 0x2c8cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 19));
label_2c8cfc:
    // 0x2c8cfc: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_2c8d00:
    if (ctx->pc == 0x2C8D00u) {
        ctx->pc = 0x2C8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CFCu;
        // 0x2c8d00: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D04u;
        goto label_2c8d04;
    }
    ctx->pc = 0x2C8CFCu;
    {
        const bool branch_taken_0x2c8cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CFCu;
        // 0x2c8d00: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8cfc) {
            ctx->pc = 0x2C8C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8c6c;
        }
    }
    ctx->pc = 0x2C8D04u;
label_2c8d04:
    // 0x2c8d04: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_2c8d08:
    if (ctx->pc == 0x2C8D08u) {
        ctx->pc = 0x2C8D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D04u;
        // 0x2c8d08: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D0Cu;
        goto label_2c8d0c;
    }
    ctx->pc = 0x2C8D04u;
    {
        const bool branch_taken_0x2c8d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8d04) {
            ctx->pc = 0x2C8D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D04u;
            // 0x2c8d08: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8DC8u;
            goto label_2c8dc8;
        }
    }
    ctx->pc = 0x2C8D0Cu;
label_2c8d0c:
    // 0x2c8d0c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2c8d10:
    if (ctx->pc == 0x2C8D10u) {
        ctx->pc = 0x2C8D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D0Cu;
        // 0x2c8d10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D14u;
        goto label_2c8d14;
    }
    ctx->pc = 0x2C8D0Cu;
    {
        const bool branch_taken_0x2c8d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D0Cu;
        // 0x2c8d10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d0c) {
            ctx->pc = 0x2C8D20u;
            goto label_2c8d20;
        }
    }
    ctx->pc = 0x2C8D14u;
label_2c8d14:
    // 0x2c8d14: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x2c8d14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
label_2c8d18:
    // 0x2c8d18: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
label_2c8d1c:
    if (ctx->pc == 0x2C8D1Cu) {
        ctx->pc = 0x2C8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D18u;
        // 0x2c8d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D20u;
        goto label_2c8d20;
    }
    ctx->pc = 0x2C8D18u;
    {
        const bool branch_taken_0x2c8d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D18u;
        // 0x2c8d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d18) {
            ctx->pc = 0x2C8DECu;
            goto label_2c8dec;
        }
    }
    ctx->pc = 0x2C8D20u;
label_2c8d20:
    // 0x2c8d20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c8d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c8d24:
    // 0x2c8d24: 0xc0a2ab0  jal         func_28AAC0
label_2c8d28:
    if (ctx->pc == 0x2C8D28u) {
        ctx->pc = 0x2C8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D24u;
        // 0x2c8d28: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D2Cu;
        goto label_2c8d2c;
    }
    ctx->pc = 0x2C8D24u;
    SET_GPR_U32(ctx, 31, 0x2C8D2Cu);
    ctx->pc = 0x2C8D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8D24u;
    // 0x2c8d28: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2C8D24u, 0x2C8D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D2Cu;
label_2c8d2c:
    // 0x2c8d2c: 0xc08c716  jal         func_231C58
label_2c8d30:
    if (ctx->pc == 0x2C8D30u) {
        ctx->pc = 0x2C8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D2Cu;
        // 0x2c8d30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D34u;
        goto label_2c8d34;
    }
    ctx->pc = 0x2C8D2Cu;
    SET_GPR_U32(ctx, 31, 0x2C8D34u);
    ctx->pc = 0x2C8D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8D2Cu;
    // 0x2c8d30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C58u, 0x2C8D2Cu, 0x2C8D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D34u;
label_2c8d34:
    // 0x2c8d34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c8d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d38:
    // 0x2c8d38: 0xc105bc2  jal         func_416F08
label_2c8d3c:
    if (ctx->pc == 0x2C8D3Cu) {
        ctx->pc = 0x2C8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D38u;
        // 0x2c8d3c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D40u;
        goto label_2c8d40;
    }
    ctx->pc = 0x2C8D38u;
    SET_GPR_U32(ctx, 31, 0x2C8D40u);
    ctx->pc = 0x2C8D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8D38u;
    // 0x2c8d3c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416F08u, 0x2C8D38u, 0x2C8D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D40u;
label_2c8d40:
    // 0x2c8d40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c8d40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d44:
    // 0x2c8d44: 0x1260ffc9  beqz        $s3, . + 4 + (-0x37 << 2)
label_2c8d48:
    if (ctx->pc == 0x2C8D48u) {
        ctx->pc = 0x2C8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D44u;
        // 0x2c8d48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D4Cu;
        goto label_2c8d4c;
    }
    ctx->pc = 0x2C8D44u;
    {
        const bool branch_taken_0x2c8d44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D44u;
        // 0x2c8d48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d44) {
            ctx->pc = 0x2C8C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8c6c;
        }
    }
    ctx->pc = 0x2C8D4Cu;
label_2c8d4c:
    // 0x2c8d4c: 0x16c2000b  bne         $s6, $v0, . + 4 + (0xB << 2)
label_2c8d50:
    if (ctx->pc == 0x2C8D50u) {
        ctx->pc = 0x2C8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D4Cu;
        // 0x2c8d50: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D54u;
        goto label_2c8d54;
    }
    ctx->pc = 0x2C8D4Cu;
    {
        const bool branch_taken_0x2c8d4c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D4Cu;
        // 0x2c8d50: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d4c) {
            ctx->pc = 0x2C8D7Cu;
            goto label_2c8d7c;
        }
    }
    ctx->pc = 0x2C8D54u;
label_2c8d54:
    // 0x2c8d54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c8d58:
    // 0x2c8d58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c8d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c8d5c:
    // 0x2c8d5c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2c8d5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c8d60:
    // 0x2c8d60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c8d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d64:
    // 0x2c8d64: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c8d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2c8d68:
    // 0x2c8d68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c8d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d6c:
    // 0x2c8d6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8d70:
    // 0x2c8d70: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c8d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8d74:
    // 0x2c8d74: 0xc088178  jal         func_2205E0
label_2c8d78:
    if (ctx->pc == 0x2C8D78u) {
        ctx->pc = 0x2C8D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D74u;
        // 0x2c8d78: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D7Cu;
        goto label_2c8d7c;
    }
    ctx->pc = 0x2C8D74u;
    SET_GPR_U32(ctx, 31, 0x2C8D7Cu);
    ctx->pc = 0x2C8D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8D74u;
    // 0x2c8d78: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C8D74u, 0x2C8D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D7Cu;
label_2c8d7c:
    // 0x2c8d7c: 0xc0a4e54  jal         func_293950
label_2c8d80:
    if (ctx->pc == 0x2C8D80u) {
        ctx->pc = 0x2C8D84u;
        goto label_2c8d84;
    }
    ctx->pc = 0x2C8D7Cu;
    SET_GPR_U32(ctx, 31, 0x2C8D84u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C8D7Cu, 0x2C8D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D84u;
label_2c8d84:
    // 0x2c8d84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d88:
    // 0x2c8d88: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2c8d8c:
    if (ctx->pc == 0x2C8D8Cu) {
        ctx->pc = 0x2C8D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D88u;
        // 0x2c8d8c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D90u;
        goto label_2c8d90;
    }
    ctx->pc = 0x2C8D88u;
    {
        const bool branch_taken_0x2c8d88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D88u;
        // 0x2c8d8c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d88) {
            ctx->pc = 0x2C8DB4u;
            goto label_2c8db4;
        }
    }
    ctx->pc = 0x2C8D90u;
label_2c8d90:
    // 0x2c8d90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c8d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c8d94:
    // 0x2c8d94: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c8d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c8d98:
    // 0x2c8d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d9c:
    // 0x2c8d9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c8da0:
    // 0x2c8da0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2c8da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2c8da4:
    // 0x2c8da4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2c8da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c8da8:
    // 0x2c8da8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c8da8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c8dac:
    // 0x2c8dac: 0xc0b6a3e  jal         func_2DA8F8
label_2c8db0:
    if (ctx->pc == 0x2C8DB0u) {
        ctx->pc = 0x2C8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DACu;
        // 0x2c8db0: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8DB4u;
        goto label_2c8db4;
    }
    ctx->pc = 0x2C8DACu;
    SET_GPR_U32(ctx, 31, 0x2C8DB4u);
    ctx->pc = 0x2C8DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8DACu;
    // 0x2c8db0: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8F8u, 0x2C8DACu, 0x2C8DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DB4u;
label_2c8db4:
    // 0x2c8db4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c8db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c8db8:
    // 0x2c8db8: 0xc0a35d6  jal         func_28D758
label_2c8dbc:
    if (ctx->pc == 0x2C8DBCu) {
        ctx->pc = 0x2C8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DB8u;
        // 0x2c8dbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8DC0u;
        goto label_2c8dc0;
    }
    ctx->pc = 0x2C8DB8u;
    SET_GPR_U32(ctx, 31, 0x2C8DC0u);
    ctx->pc = 0x2C8DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8DB8u;
    // 0x2c8dbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C8DB8u, 0x2C8DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DC0u;
label_2c8dc0:
    // 0x2c8dc0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2c8dc4:
    if (ctx->pc == 0x2C8DC4u) {
        ctx->pc = 0x2C8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DC0u;
        // 0x2c8dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8DC8u;
        goto label_2c8dc8;
    }
    ctx->pc = 0x2C8DC0u;
    {
        const bool branch_taken_0x2c8dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DC0u;
        // 0x2c8dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8dc0) {
            ctx->pc = 0x2C8DECu;
            goto label_2c8dec;
        }
    }
    ctx->pc = 0x2C8DC8u;
label_2c8dc8:
    // 0x2c8dc8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c8dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c8dcc:
    // 0x2c8dcc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c8dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c8dd0:
    // 0x2c8dd0: 0x40f809  jalr        $v0
label_2c8dd4:
    if (ctx->pc == 0x2C8DD4u) {
        ctx->pc = 0x2C8DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DD0u;
        // 0x2c8dd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8DD8u;
        goto label_2c8dd8;
    }
    ctx->pc = 0x2C8DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C8DD8u);
        ctx->pc = 0x2C8DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DD0u;
        // 0x2c8dd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8DD0u, 0x2C8DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C8DD8u;
label_2c8dd8:
    // 0x2c8dd8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2c8dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2c8ddc:
    // 0x2c8ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8de0:
    // 0x2c8de0: 0xc08e150  jal         func_238540
label_2c8de4:
    if (ctx->pc == 0x2C8DE4u) {
        ctx->pc = 0x2C8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DE0u;
        // 0x2c8de4: 0x24a556b0  addiu       $a1, $a1, 0x56B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8DE8u;
        goto label_2c8de8;
    }
    ctx->pc = 0x2C8DE0u;
    SET_GPR_U32(ctx, 31, 0x2C8DE8u);
    ctx->pc = 0x2C8DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8DE0u;
    // 0x2c8de4: 0x24a556b0  addiu       $a1, $a1, 0x56B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2C8DE0u, 0x2C8DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DE8u;
label_2c8de8:
    // 0x2c8de8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c8de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c8dec:
    // 0x2c8dec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2c8decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c8df0:
    // 0x2c8df0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2c8df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c8df4:
    // 0x2c8df4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2c8df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c8df8:
    // 0x2c8df8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2c8df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c8dfc:
    // 0x2c8dfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c8dfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c8e00:
    // 0x2c8e00: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2c8e00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c8e04:
    // 0x2c8e04: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2c8e04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8e08:
    // 0x2c8e08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8e0c:
    // 0x2c8e0c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2c8e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c8e10:
    // 0x2c8e10: 0x3e00008  jr          $ra
label_2c8e14:
    if (ctx->pc == 0x2C8E14u) {
        ctx->pc = 0x2C8E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E10u;
        // 0x2c8e14: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8E18u;
        goto label_fallthrough_0x2c8e10;
    }
    ctx->pc = 0x2C8E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E10u;
        // 0x2c8e14: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c8e10:
    ctx->pc = 0x2C8E18u;
}
