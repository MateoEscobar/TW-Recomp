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

// Function: sub_001F0E60
// Address: 0x1f0e60 - 0x1f1000
void sub_001F0E60_0x1f0e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0E60_0x1f0e60");
#endif

    switch (ctx->pc) {
        case 0x1f0e60u: goto label_1f0e60;
        case 0x1f0e64u: goto label_1f0e64;
        case 0x1f0e68u: goto label_1f0e68;
        case 0x1f0e6cu: goto label_1f0e6c;
        case 0x1f0e70u: goto label_1f0e70;
        case 0x1f0e74u: goto label_1f0e74;
        case 0x1f0e78u: goto label_1f0e78;
        case 0x1f0e7cu: goto label_1f0e7c;
        case 0x1f0e80u: goto label_1f0e80;
        case 0x1f0e84u: goto label_1f0e84;
        case 0x1f0e88u: goto label_1f0e88;
        case 0x1f0e8cu: goto label_1f0e8c;
        case 0x1f0e90u: goto label_1f0e90;
        case 0x1f0e94u: goto label_1f0e94;
        case 0x1f0e98u: goto label_1f0e98;
        case 0x1f0e9cu: goto label_1f0e9c;
        case 0x1f0ea0u: goto label_1f0ea0;
        case 0x1f0ea4u: goto label_1f0ea4;
        case 0x1f0ea8u: goto label_1f0ea8;
        case 0x1f0eacu: goto label_1f0eac;
        case 0x1f0eb0u: goto label_1f0eb0;
        case 0x1f0eb4u: goto label_1f0eb4;
        case 0x1f0eb8u: goto label_1f0eb8;
        case 0x1f0ebcu: goto label_1f0ebc;
        case 0x1f0ec0u: goto label_1f0ec0;
        case 0x1f0ec4u: goto label_1f0ec4;
        case 0x1f0ec8u: goto label_1f0ec8;
        case 0x1f0eccu: goto label_1f0ecc;
        case 0x1f0ed0u: goto label_1f0ed0;
        case 0x1f0ed4u: goto label_1f0ed4;
        case 0x1f0ed8u: goto label_1f0ed8;
        case 0x1f0edcu: goto label_1f0edc;
        case 0x1f0ee0u: goto label_1f0ee0;
        case 0x1f0ee4u: goto label_1f0ee4;
        case 0x1f0ee8u: goto label_1f0ee8;
        case 0x1f0eecu: goto label_1f0eec;
        case 0x1f0ef0u: goto label_1f0ef0;
        case 0x1f0ef4u: goto label_1f0ef4;
        case 0x1f0ef8u: goto label_1f0ef8;
        case 0x1f0efcu: goto label_1f0efc;
        case 0x1f0f00u: goto label_1f0f00;
        case 0x1f0f04u: goto label_1f0f04;
        case 0x1f0f08u: goto label_1f0f08;
        case 0x1f0f0cu: goto label_1f0f0c;
        case 0x1f0f10u: goto label_1f0f10;
        case 0x1f0f14u: goto label_1f0f14;
        case 0x1f0f18u: goto label_1f0f18;
        case 0x1f0f1cu: goto label_1f0f1c;
        case 0x1f0f20u: goto label_1f0f20;
        case 0x1f0f24u: goto label_1f0f24;
        case 0x1f0f28u: goto label_1f0f28;
        case 0x1f0f2cu: goto label_1f0f2c;
        case 0x1f0f30u: goto label_1f0f30;
        case 0x1f0f34u: goto label_1f0f34;
        case 0x1f0f38u: goto label_1f0f38;
        case 0x1f0f3cu: goto label_1f0f3c;
        case 0x1f0f40u: goto label_1f0f40;
        case 0x1f0f44u: goto label_1f0f44;
        case 0x1f0f48u: goto label_1f0f48;
        case 0x1f0f4cu: goto label_1f0f4c;
        case 0x1f0f50u: goto label_1f0f50;
        case 0x1f0f54u: goto label_1f0f54;
        case 0x1f0f58u: goto label_1f0f58;
        case 0x1f0f5cu: goto label_1f0f5c;
        case 0x1f0f60u: goto label_1f0f60;
        case 0x1f0f64u: goto label_1f0f64;
        case 0x1f0f68u: goto label_1f0f68;
        case 0x1f0f6cu: goto label_1f0f6c;
        case 0x1f0f70u: goto label_1f0f70;
        case 0x1f0f74u: goto label_1f0f74;
        case 0x1f0f78u: goto label_1f0f78;
        case 0x1f0f7cu: goto label_1f0f7c;
        case 0x1f0f80u: goto label_1f0f80;
        case 0x1f0f84u: goto label_1f0f84;
        case 0x1f0f88u: goto label_1f0f88;
        case 0x1f0f8cu: goto label_1f0f8c;
        case 0x1f0f90u: goto label_1f0f90;
        case 0x1f0f94u: goto label_1f0f94;
        case 0x1f0f98u: goto label_1f0f98;
        case 0x1f0f9cu: goto label_1f0f9c;
        case 0x1f0fa0u: goto label_1f0fa0;
        case 0x1f0fa4u: goto label_1f0fa4;
        case 0x1f0fa8u: goto label_1f0fa8;
        case 0x1f0facu: goto label_1f0fac;
        case 0x1f0fb0u: goto label_1f0fb0;
        case 0x1f0fb4u: goto label_1f0fb4;
        case 0x1f0fb8u: goto label_1f0fb8;
        case 0x1f0fbcu: goto label_1f0fbc;
        case 0x1f0fc0u: goto label_1f0fc0;
        case 0x1f0fc4u: goto label_1f0fc4;
        case 0x1f0fc8u: goto label_1f0fc8;
        case 0x1f0fccu: goto label_1f0fcc;
        case 0x1f0fd0u: goto label_1f0fd0;
        case 0x1f0fd4u: goto label_1f0fd4;
        case 0x1f0fd8u: goto label_1f0fd8;
        case 0x1f0fdcu: goto label_1f0fdc;
        case 0x1f0fe0u: goto label_1f0fe0;
        case 0x1f0fe4u: goto label_1f0fe4;
        case 0x1f0fe8u: goto label_1f0fe8;
        case 0x1f0fecu: goto label_1f0fec;
        case 0x1f0ff0u: goto label_1f0ff0;
        case 0x1f0ff4u: goto label_1f0ff4;
        case 0x1f0ff8u: goto label_1f0ff8;
        case 0x1f0ffcu: goto label_1f0ffc;
        default: break;
    }

    ctx->pc = 0x1f0e60u;

label_1f0e60:
    // 0x1f0e60: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1f0e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1f0e64:
    // 0x1f0e64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f0e68:
    // 0x1f0e68: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1f0e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1f0e6c:
    // 0x1f0e6c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1f0e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1f0e70:
    // 0x1f0e70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f0e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f0e74:
    // 0x1f0e74: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1f0e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1f0e78:
    // 0x1f0e78: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f0e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f0e7c:
    // 0x1f0e7c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1f0e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_1f0e80:
    // 0x1f0e80: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f0e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f0e84:
    // 0x1f0e84: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1f0e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_1f0e88:
    // 0x1f0e88: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x1f0e88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1f0e8c:
    // 0x1f0e8c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1f0e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1f0e90:
    // 0x1f0e90: 0x315500ff  andi        $s5, $t2, 0xFF
    ctx->pc = 0x1f0e90u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_1f0e94:
    // 0x1f0e94: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1f0e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1f0e98:
    // 0x1f0e98: 0x30f600ff  andi        $s6, $a3, 0xFF
    ctx->pc = 0x1f0e98u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1f0e9c:
    // 0x1f0e9c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f0e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f0ea0:
    // 0x1f0ea0: 0x311700ff  andi        $s7, $t0, 0xFF
    ctx->pc = 0x1f0ea0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_1f0ea4:
    // 0x1f0ea4: 0xa7a40000  sh          $a0, 0x0($sp)
    ctx->pc = 0x1f0ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
label_1f0ea8:
    // 0x1f0ea8: 0x313effff  andi        $fp, $t1, 0xFFFF
    ctx->pc = 0x1f0ea8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_1f0eac:
    // 0x1f0eac: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1f0eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1f0eb0:
    // 0x1f0eb0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1f0eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1f0eb4:
    // 0x1f0eb4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f0eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f0eb8:
    // 0x1f0eb8: 0x24a57160  addiu       $a1, $a1, 0x7160
    ctx->pc = 0x1f0eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29024));
label_1f0ebc:
    // 0x1f0ebc: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1f0ebcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1f0ec0:
    // 0x1f0ec0: 0x25087170  addiu       $t0, $t0, 0x7170
    ctx->pc = 0x1f0ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29040));
label_1f0ec4:
    // 0x1f0ec4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f0ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f0ec8:
    // 0x1f0ec8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f0ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f0ecc:
    // 0x1f0ecc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f0ed0:
    // 0x1f0ed0: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x1f0ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f0ed4:
    // 0x1f0ed4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f0ed4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ed8:
    // 0x1f0ed8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f0ed8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0edc:
    // 0x1f0edc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f0edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f0ee0:
    // 0x1f0ee0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f0ee4:
    // 0x1f0ee4: 0x40f809  jalr        $v0
label_1f0ee8:
    if (ctx->pc == 0x1F0EE8u) {
        ctx->pc = 0x1F0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EE4u;
        // 0x1f0ee8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0EECu;
        goto label_1f0eec;
    }
    ctx->pc = 0x1F0EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0EECu);
        ctx->pc = 0x1F0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EE4u;
        // 0x1f0ee8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0EE4u, 0x1F0EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0EECu;
label_1f0eec:
    // 0x1f0eec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f0eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ef0:
    // 0x1f0ef0: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_1f0ef4:
    if (ctx->pc == 0x1F0EF4u) {
        ctx->pc = 0x1F0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EF0u;
        // 0x1f0ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0EF8u;
        goto label_1f0ef8;
    }
    ctx->pc = 0x1F0EF0u;
    {
        const bool branch_taken_0x1f0ef0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EF0u;
        // 0x1f0ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ef0) {
            ctx->pc = 0x1F0F44u;
            goto label_1f0f44;
        }
    }
    ctx->pc = 0x1F0EF8u;
label_1f0ef8:
    // 0x1f0ef8: 0xc07f7f8  jal         func_1FDFE0
label_1f0efc:
    if (ctx->pc == 0x1F0EFCu) {
        ctx->pc = 0x1F0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EF8u;
        // 0x1f0efc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0F00u;
        goto label_1f0f00;
    }
    ctx->pc = 0x1F0EF8u;
    SET_GPR_U32(ctx, 31, 0x1F0F00u);
    ctx->pc = 0x1F0EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0EF8u;
    // 0x1f0efc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFE0u, 0x1F0EF8u, 0x1F0F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F00u;
label_1f0f00:
    // 0x1f0f00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f0f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f04:
    // 0x1f0f04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f0f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f08:
    // 0x1f0f08: 0xc07f7f8  jal         func_1FDFE0
label_1f0f0c:
    if (ctx->pc == 0x1F0F0Cu) {
        ctx->pc = 0x1F0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F08u;
        // 0x1f0f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0F10u;
        goto label_1f0f10;
    }
    ctx->pc = 0x1F0F08u;
    SET_GPR_U32(ctx, 31, 0x1F0F10u);
    ctx->pc = 0x1F0F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F08u;
    // 0x1f0f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFE0u, 0x1F0F08u, 0x1F0F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F10u;
label_1f0f10:
    // 0x1f0f10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f0f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f14:
    // 0x1f0f14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f0f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f18:
    // 0x1f0f18: 0xc07f7f8  jal         func_1FDFE0
label_1f0f1c:
    if (ctx->pc == 0x1F0F1Cu) {
        ctx->pc = 0x1F0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F18u;
        // 0x1f0f1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0F20u;
        goto label_1f0f20;
    }
    ctx->pc = 0x1F0F18u;
    SET_GPR_U32(ctx, 31, 0x1F0F20u);
    ctx->pc = 0x1F0F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F18u;
    // 0x1f0f1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFE0u, 0x1F0F18u, 0x1F0F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F20u;
label_1f0f20:
    // 0x1f0f20: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x1f0f20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0f24:
    // 0x1f0f24: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1f0f24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_1f0f28:
    // 0x1f0f28: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1f0f28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1f0f2c:
    // 0x1f0f2c: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x1f0f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_1f0f30:
    // 0x1f0f30: 0xa256000c  sb          $s6, 0xC($s2)
    ctx->pc = 0x1f0f30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 22));
label_1f0f34:
    // 0x1f0f34: 0xa257000d  sb          $s7, 0xD($s2)
    ctx->pc = 0x1f0f34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13), (uint8_t)GPR_U32(ctx, 23));
label_1f0f38:
    // 0x1f0f38: 0xa65e000e  sh          $fp, 0xE($s2)
    ctx->pc = 0x1f0f38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 30));
label_1f0f3c:
    // 0x1f0f3c: 0xa2550010  sb          $s5, 0x10($s2)
    ctx->pc = 0x1f0f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 21));
label_1f0f40:
    // 0x1f0f40: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1f0f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_1f0f44:
    // 0x1f0f44: 0xc07f80e  jal         func_1FE038
label_1f0f48:
    if (ctx->pc == 0x1F0F48u) {
        ctx->pc = 0x1F0F4Cu;
        goto label_1f0f4c;
    }
    ctx->pc = 0x1F0F44u;
    SET_GPR_U32(ctx, 31, 0x1F0F4Cu);
    ctx->pc = 0x1FE038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE038u, 0x1F0F44u, 0x1F0F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F4Cu;
label_1f0f4c:
    // 0x1f0f4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f0f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f50:
    // 0x1f0f50: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f0f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f0f54:
    // 0x1f0f54: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x1f0f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f58:
    // 0x1f0f58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f0f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f5c:
    // 0x1f0f5c: 0xc13a798  jal         func_4E9E60
label_1f0f60:
    if (ctx->pc == 0x1F0F60u) {
        ctx->pc = 0x1F0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F5Cu;
        // 0x1f0f60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0F64u;
        goto label_1f0f64;
    }
    ctx->pc = 0x1F0F5Cu;
    SET_GPR_U32(ctx, 31, 0x1F0F64u);
    ctx->pc = 0x1F0F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F5Cu;
    // 0x1f0f60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9E60u, 0x1F0F5Cu, 0x1F0F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F64u;
label_1f0f64:
    // 0x1f0f64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f0f68:
    // 0x1f0f68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f0f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f6c:
    // 0x1f0f6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f0f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f0f70:
    // 0x1f0f70: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1f0f74:
    if (ctx->pc == 0x1F0F74u) {
        ctx->pc = 0x1F0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F70u;
        // 0x1f0f74: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0F78u;
        goto label_1f0f78;
    }
    ctx->pc = 0x1F0F70u;
    {
        const bool branch_taken_0x1f0f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F70u;
        // 0x1f0f74: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f70) {
            ctx->pc = 0x1F0F8Cu;
            goto label_1f0f8c;
        }
    }
    ctx->pc = 0x1F0F78u;
label_1f0f78:
    // 0x1f0f78: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x1f0f78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1f0f7c:
    // 0x1f0f7c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x1f0f7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0f80:
    // 0x1f0f80: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1f0f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f0f84:
    // 0x1f0f84: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1f0f88:
    if (ctx->pc == 0x1F0F88u) {
        ctx->pc = 0x1F0F8Cu;
        goto label_1f0f8c;
    }
    ctx->pc = 0x1F0F84u;
    {
        const bool branch_taken_0x1f0f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f84) {
            ctx->pc = 0x1F0F90u;
            goto label_1f0f90;
        }
    }
    ctx->pc = 0x1F0F8Cu;
label_1f0f8c:
    // 0x1f0f8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0f90:
    // 0x1f0f90: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1f0f94:
    if (ctx->pc == 0x1F0F94u) {
        ctx->pc = 0x1F0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F90u;
        // 0x1f0f94: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0F98u;
        goto label_1f0f98;
    }
    ctx->pc = 0x1F0F90u;
    {
        const bool branch_taken_0x1f0f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F90u;
        // 0x1f0f94: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f90) {
            ctx->pc = 0x1F0FC8u;
            goto label_1f0fc8;
        }
    }
    ctx->pc = 0x1F0F98u;
label_1f0f98:
    // 0x1f0f98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f0f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f9c:
    // 0x1f0f9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f0f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f0fa0:
    // 0x1f0fa0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1f0fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f0fa4:
    // 0x1f0fa4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1f0fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1f0fa8:
    // 0x1f0fa8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1f0fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f0fac:
    // 0x1f0fac: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1f0facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1f0fb0:
    // 0x1f0fb0: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1f0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_1f0fb4:
    // 0x1f0fb4: 0xa7a20050  sh          $v0, 0x50($sp)
    ctx->pc = 0x1f0fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 2));
label_1f0fb8:
    // 0x1f0fb8: 0xc13a8f2  jal         func_4EA3C8
label_1f0fbc:
    if (ctx->pc == 0x1F0FBCu) {
        ctx->pc = 0x1F0FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FB8u;
        // 0x1f0fbc: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0FC0u;
        goto label_1f0fc0;
    }
    ctx->pc = 0x1F0FB8u;
    SET_GPR_U32(ctx, 31, 0x1F0FC0u);
    ctx->pc = 0x1F0FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FB8u;
    // 0x1f0fbc: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA3C8u, 0x1F0FB8u, 0x1F0FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0FC0u;
label_1f0fc0:
    // 0x1f0fc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0fc4:
    // 0x1f0fc4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f0fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f0fc8:
    // 0x1f0fc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f0fcc:
    // 0x1f0fcc: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1f0fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1f0fd0:
    // 0x1f0fd0: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x1f0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
label_1f0fd4:
    // 0x1f0fd4: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1f0fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1f0fd8:
    // 0x1f0fd8: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1f0fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1f0fdc:
    // 0x1f0fdc: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1f0fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1f0fe0:
    // 0x1f0fe0: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1f0fe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1f0fe4:
    // 0x1f0fe4: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1f0fe4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1f0fe8:
    // 0x1f0fe8: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1f0fe8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f0fec:
    // 0x1f0fec: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1f0fecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f0ff0:
    // 0x1f0ff0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f0ff0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f0ff4:
    // 0x1f0ff4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f0ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f0ff8:
    // 0x1f0ff8: 0x3e00008  jr          $ra
label_1f0ffc:
    if (ctx->pc == 0x1F0FFCu) {
        ctx->pc = 0x1F0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FF8u;
        // 0x1f0ffc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1000u;
        goto label_fallthrough_0x1f0ff8;
    }
    ctx->pc = 0x1F0FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FF8u;
        // 0x1f0ffc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f0ff8:
    ctx->pc = 0x1F1000u;
}
