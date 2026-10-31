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

// Function: sub_001C7E80
// Address: 0x1c7e80 - 0x1c8010
void sub_001C7E80_0x1c7e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7E80_0x1c7e80");
#endif

    switch (ctx->pc) {
        case 0x1c7e80u: goto label_1c7e80;
        case 0x1c7e84u: goto label_1c7e84;
        case 0x1c7e88u: goto label_1c7e88;
        case 0x1c7e8cu: goto label_1c7e8c;
        case 0x1c7e90u: goto label_1c7e90;
        case 0x1c7e94u: goto label_1c7e94;
        case 0x1c7e98u: goto label_1c7e98;
        case 0x1c7e9cu: goto label_1c7e9c;
        case 0x1c7ea0u: goto label_1c7ea0;
        case 0x1c7ea4u: goto label_1c7ea4;
        case 0x1c7ea8u: goto label_1c7ea8;
        case 0x1c7eacu: goto label_1c7eac;
        case 0x1c7eb0u: goto label_1c7eb0;
        case 0x1c7eb4u: goto label_1c7eb4;
        case 0x1c7eb8u: goto label_1c7eb8;
        case 0x1c7ebcu: goto label_1c7ebc;
        case 0x1c7ec0u: goto label_1c7ec0;
        case 0x1c7ec4u: goto label_1c7ec4;
        case 0x1c7ec8u: goto label_1c7ec8;
        case 0x1c7eccu: goto label_1c7ecc;
        case 0x1c7ed0u: goto label_1c7ed0;
        case 0x1c7ed4u: goto label_1c7ed4;
        case 0x1c7ed8u: goto label_1c7ed8;
        case 0x1c7edcu: goto label_1c7edc;
        case 0x1c7ee0u: goto label_1c7ee0;
        case 0x1c7ee4u: goto label_1c7ee4;
        case 0x1c7ee8u: goto label_1c7ee8;
        case 0x1c7eecu: goto label_1c7eec;
        case 0x1c7ef0u: goto label_1c7ef0;
        case 0x1c7ef4u: goto label_1c7ef4;
        case 0x1c7ef8u: goto label_1c7ef8;
        case 0x1c7efcu: goto label_1c7efc;
        case 0x1c7f00u: goto label_1c7f00;
        case 0x1c7f04u: goto label_1c7f04;
        case 0x1c7f08u: goto label_1c7f08;
        case 0x1c7f0cu: goto label_1c7f0c;
        case 0x1c7f10u: goto label_1c7f10;
        case 0x1c7f14u: goto label_1c7f14;
        case 0x1c7f18u: goto label_1c7f18;
        case 0x1c7f1cu: goto label_1c7f1c;
        case 0x1c7f20u: goto label_1c7f20;
        case 0x1c7f24u: goto label_1c7f24;
        case 0x1c7f28u: goto label_1c7f28;
        case 0x1c7f2cu: goto label_1c7f2c;
        case 0x1c7f30u: goto label_1c7f30;
        case 0x1c7f34u: goto label_1c7f34;
        case 0x1c7f38u: goto label_1c7f38;
        case 0x1c7f3cu: goto label_1c7f3c;
        case 0x1c7f40u: goto label_1c7f40;
        case 0x1c7f44u: goto label_1c7f44;
        case 0x1c7f48u: goto label_1c7f48;
        case 0x1c7f4cu: goto label_1c7f4c;
        case 0x1c7f50u: goto label_1c7f50;
        case 0x1c7f54u: goto label_1c7f54;
        case 0x1c7f58u: goto label_1c7f58;
        case 0x1c7f5cu: goto label_1c7f5c;
        case 0x1c7f60u: goto label_1c7f60;
        case 0x1c7f64u: goto label_1c7f64;
        case 0x1c7f68u: goto label_1c7f68;
        case 0x1c7f6cu: goto label_1c7f6c;
        case 0x1c7f70u: goto label_1c7f70;
        case 0x1c7f74u: goto label_1c7f74;
        case 0x1c7f78u: goto label_1c7f78;
        case 0x1c7f7cu: goto label_1c7f7c;
        case 0x1c7f80u: goto label_1c7f80;
        case 0x1c7f84u: goto label_1c7f84;
        case 0x1c7f88u: goto label_1c7f88;
        case 0x1c7f8cu: goto label_1c7f8c;
        case 0x1c7f90u: goto label_1c7f90;
        case 0x1c7f94u: goto label_1c7f94;
        case 0x1c7f98u: goto label_1c7f98;
        case 0x1c7f9cu: goto label_1c7f9c;
        case 0x1c7fa0u: goto label_1c7fa0;
        case 0x1c7fa4u: goto label_1c7fa4;
        case 0x1c7fa8u: goto label_1c7fa8;
        case 0x1c7facu: goto label_1c7fac;
        case 0x1c7fb0u: goto label_1c7fb0;
        case 0x1c7fb4u: goto label_1c7fb4;
        case 0x1c7fb8u: goto label_1c7fb8;
        case 0x1c7fbcu: goto label_1c7fbc;
        case 0x1c7fc0u: goto label_1c7fc0;
        case 0x1c7fc4u: goto label_1c7fc4;
        case 0x1c7fc8u: goto label_1c7fc8;
        case 0x1c7fccu: goto label_1c7fcc;
        case 0x1c7fd0u: goto label_1c7fd0;
        case 0x1c7fd4u: goto label_1c7fd4;
        case 0x1c7fd8u: goto label_1c7fd8;
        case 0x1c7fdcu: goto label_1c7fdc;
        case 0x1c7fe0u: goto label_1c7fe0;
        case 0x1c7fe4u: goto label_1c7fe4;
        case 0x1c7fe8u: goto label_1c7fe8;
        case 0x1c7fecu: goto label_1c7fec;
        case 0x1c7ff0u: goto label_1c7ff0;
        case 0x1c7ff4u: goto label_1c7ff4;
        case 0x1c7ff8u: goto label_1c7ff8;
        case 0x1c7ffcu: goto label_1c7ffc;
        case 0x1c8000u: goto label_1c8000;
        case 0x1c8004u: goto label_1c8004;
        case 0x1c8008u: goto label_1c8008;
        case 0x1c800cu: goto label_1c800c;
        default: break;
    }

    ctx->pc = 0x1c7e80u;

label_1c7e80:
    // 0x1c7e80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c7e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c7e84:
    // 0x1c7e84: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1c7e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1c7e88:
    // 0x1c7e88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c7e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c7e8c:
    // 0x1c7e8c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c7e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c7e90:
    // 0x1c7e90: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1c7e90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1c7e94:
    // 0x1c7e94: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c7e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1c7e98:
    // 0x1c7e98: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c7e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1c7e9c:
    // 0x1c7e9c: 0x24a55420  addiu       $a1, $a1, 0x5420
    ctx->pc = 0x1c7e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21536));
label_1c7ea0:
    // 0x1c7ea0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c7ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1c7ea4:
    // 0x1c7ea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c7ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7ea8:
    // 0x1c7ea8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c7ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c7eac:
    // 0x1c7eac: 0x24525430  addiu       $s2, $v0, 0x5430
    ctx->pc = 0x1c7eacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 21552));
label_1c7eb0:
    // 0x1c7eb0: 0x8e6a27e4  lw          $t2, 0x27E4($s3)
    ctx->pc = 0x1c7eb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_1c7eb4:
    // 0x1c7eb4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1c7eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c7eb8:
    // 0x1c7eb8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c7eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c7ebc:
    // 0x1c7ebc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1c7ebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c7ec0:
    // 0x1c7ec0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1c7ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1c7ec4:
    // 0x1c7ec4: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x1c7ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c7ec8:
    // 0x1c7ec8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c7ec8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7ecc:
    // 0x1c7ecc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c7eccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c7ed0:
    // 0x1c7ed0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c7ed4:
    // 0x1c7ed4: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1c7ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1c7ed8:
    // 0x1c7ed8: 0x40f809  jalr        $v0
label_1c7edc:
    if (ctx->pc == 0x1C7EDCu) {
        ctx->pc = 0x1C7EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7ED8u;
        // 0x1c7edc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7EE0u;
        goto label_1c7ee0;
    }
    ctx->pc = 0x1C7ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7EE0u);
        ctx->pc = 0x1C7EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7ED8u;
        // 0x1c7edc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7ED8u, 0x1C7EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7EE0u;
label_1c7ee0:
    // 0x1c7ee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7ee4:
    // 0x1c7ee4: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1c7ee8:
    if (ctx->pc == 0x1C7EE8u) {
        ctx->pc = 0x1C7EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EE4u;
        // 0x1c7ee8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7EECu;
        goto label_1c7eec;
    }
    ctx->pc = 0x1C7EE4u;
    {
        const bool branch_taken_0x1c7ee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EE4u;
        // 0x1c7ee8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ee4) {
            ctx->pc = 0x1C7F3Cu;
            goto label_1c7f3c;
        }
    }
    ctx->pc = 0x1C7EECu;
label_1c7eec:
    // 0x1c7eec: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c7eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c7ef0:
    // 0x1c7ef0: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x1c7ef0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1c7ef4:
    // 0x1c7ef4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1c7ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1c7ef8:
    // 0x1c7ef8: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1c7ef8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1c7efc:
    // 0x1c7efc: 0x24a553e0  addiu       $a1, $a1, 0x53E0
    ctx->pc = 0x1c7efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21472));
label_1c7f00:
    // 0x1c7f00: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1c7f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1c7f04:
    // 0x1c7f04: 0x250853e8  addiu       $t0, $t0, 0x53E8
    ctx->pc = 0x1c7f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21480));
label_1c7f08:
    // 0x1c7f08: 0x254a5410  addiu       $t2, $t2, 0x5410
    ctx->pc = 0x1c7f08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 21520));
label_1c7f0c:
    // 0x1c7f0c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1c7f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c7f10:
    // 0x1c7f10: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c7f10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c7f14:
    // 0x1c7f14: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c7f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c7f18:
    // 0x1c7f18: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c7f1c:
    // 0x1c7f1c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1c7f1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1c7f20:
    // 0x1c7f20: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1c7f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1c7f24:
    // 0x1c7f24: 0x40f809  jalr        $v0
label_1c7f28:
    if (ctx->pc == 0x1C7F28u) {
        ctx->pc = 0x1C7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F24u;
        // 0x1c7f28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F2Cu;
        goto label_1c7f2c;
    }
    ctx->pc = 0x1C7F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7F2Cu);
        ctx->pc = 0x1C7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F24u;
        // 0x1c7f28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7F24u, 0x1C7F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7F2Cu;
label_1c7f2c:
    // 0x1c7f2c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1c7f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1c7f30:
    // 0x1c7f30: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x1c7f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
label_1c7f34:
    // 0x1c7f34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c7f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c7f38:
    // 0x1c7f38: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1c7f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
label_1c7f3c:
    // 0x1c7f3c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1c7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1c7f40:
    // 0x1c7f40: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c7f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c7f44:
    // 0x1c7f44: 0x8e6c27e4  lw          $t4, 0x27E4($s3)
    ctx->pc = 0x1c7f44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_1c7f48:
    // 0x1c7f48: 0x24a55460  addiu       $a1, $a1, 0x5460
    ctx->pc = 0x1c7f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21600));
label_1c7f4c:
    // 0x1c7f4c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1c7f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f50:
    // 0x1c7f50: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c7f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c7f54:
    // 0x1c7f54: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1c7f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1c7f58:
    // 0x1c7f58: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c7f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c7f5c:
    // 0x1c7f5c: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x1c7f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c7f60:
    // 0x1c7f60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c7f60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f64:
    // 0x1c7f64: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c7f64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c7f68:
    // 0x1c7f68: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c7f68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f6c:
    // 0x1c7f6c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c7f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c7f70:
    // 0x1c7f70: 0x40f809  jalr        $v0
label_1c7f74:
    if (ctx->pc == 0x1C7F74u) {
        ctx->pc = 0x1C7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F70u;
        // 0x1c7f74: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F78u;
        goto label_1c7f78;
    }
    ctx->pc = 0x1C7F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7F78u);
        ctx->pc = 0x1C7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F70u;
        // 0x1c7f74: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7F70u, 0x1C7F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7F78u;
label_1c7f78:
    // 0x1c7f78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f7c:
    // 0x1c7f7c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_1c7f80:
    if (ctx->pc == 0x1C7F80u) {
        ctx->pc = 0x1C7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F7Cu;
        // 0x1c7f80: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F84u;
        goto label_1c7f84;
    }
    ctx->pc = 0x1C7F7Cu;
    {
        const bool branch_taken_0x1c7f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F7Cu;
        // 0x1c7f80: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f7c) {
            ctx->pc = 0x1C7FF0u;
            goto label_1c7ff0;
        }
    }
    ctx->pc = 0x1C7F84u;
label_1c7f84:
    // 0x1c7f84: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c7f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1c7f88:
    // 0x1c7f88: 0x8c49b9c0  lw          $t1, -0x4640($v0)
    ctx->pc = 0x1c7f88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1c7f8c:
    // 0x1c7f8c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c7f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c7f90:
    // 0x1c7f90: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1c7f90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1c7f94:
    // 0x1c7f94: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1c7f94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1c7f98:
    // 0x1c7f98: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1c7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1c7f9c:
    // 0x1c7f9c: 0x24a553e0  addiu       $a1, $a1, 0x53E0
    ctx->pc = 0x1c7f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21472));
label_1c7fa0:
    // 0x1c7fa0: 0x250853e8  addiu       $t0, $t0, 0x53E8
    ctx->pc = 0x1c7fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21480));
label_1c7fa4:
    // 0x1c7fa4: 0x254a5410  addiu       $t2, $t2, 0x5410
    ctx->pc = 0x1c7fa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 21520));
label_1c7fa8:
    // 0x1c7fa8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c7fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c7fac:
    // 0x1c7fac: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1c7facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c7fb0:
    // 0x1c7fb0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c7fb4:
    // 0x1c7fb4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c7fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c7fb8:
    // 0x1c7fb8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1c7fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1c7fbc:
    // 0x1c7fbc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c7fbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7fc0:
    // 0x1c7fc0: 0x40f809  jalr        $v0
label_1c7fc4:
    if (ctx->pc == 0x1C7FC4u) {
        ctx->pc = 0x1C7FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FC0u;
        // 0x1c7fc4: 0x24090042  addiu       $t1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7FC8u;
        goto label_1c7fc8;
    }
    ctx->pc = 0x1C7FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7FC8u);
        ctx->pc = 0x1C7FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FC0u;
        // 0x1c7fc4: 0x24090042  addiu       $t1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7FC0u, 0x1C7FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7FC8u;
label_1c7fc8:
    // 0x1c7fc8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1c7fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1c7fcc:
    // 0x1c7fcc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c7fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1c7fd0:
    // 0x1c7fd0: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x1c7fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_1c7fd4:
    // 0x1c7fd4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c7fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1c7fd8:
    // 0x1c7fd8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c7fdc:
    // 0x1c7fdc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c7fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1c7fe0:
    // 0x1c7fe0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c7fe4:
    // 0x1c7fe4: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1c7fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1c7fe8:
    // 0x1c7fe8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c7fec:
    // 0x1c7fec: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x1c7fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
label_1c7ff0:
    // 0x1c7ff0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1c7ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_1c7ff4:
    // 0x1c7ff4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c7ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c7ff8:
    // 0x1c7ff8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c7ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c7ffc:
    // 0x1c7ffc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c7ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c8000:
    // 0x1c8000: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c8000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c8004:
    // 0x1c8004: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c8004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8008:
    // 0x1c8008: 0x3e00008  jr          $ra
label_1c800c:
    if (ctx->pc == 0x1C800Cu) {
        ctx->pc = 0x1C800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8008u;
        // 0x1c800c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8010u;
        goto label_fallthrough_0x1c8008;
    }
    ctx->pc = 0x1C8008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8008u;
        // 0x1c800c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c8008:
    ctx->pc = 0x1C8010u;
}
