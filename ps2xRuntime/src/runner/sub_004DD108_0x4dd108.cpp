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

// Function: sub_004DD108
// Address: 0x4dd108 - 0x4dd1c8
void sub_004DD108_0x4dd108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD108_0x4dd108");
#endif

    switch (ctx->pc) {
        case 0x4dd108u: goto label_4dd108;
        case 0x4dd10cu: goto label_4dd10c;
        case 0x4dd110u: goto label_4dd110;
        case 0x4dd114u: goto label_4dd114;
        case 0x4dd118u: goto label_4dd118;
        case 0x4dd11cu: goto label_4dd11c;
        case 0x4dd120u: goto label_4dd120;
        case 0x4dd124u: goto label_4dd124;
        case 0x4dd128u: goto label_4dd128;
        case 0x4dd12cu: goto label_4dd12c;
        case 0x4dd130u: goto label_4dd130;
        case 0x4dd134u: goto label_4dd134;
        case 0x4dd138u: goto label_4dd138;
        case 0x4dd13cu: goto label_4dd13c;
        case 0x4dd140u: goto label_4dd140;
        case 0x4dd144u: goto label_4dd144;
        case 0x4dd148u: goto label_4dd148;
        case 0x4dd14cu: goto label_4dd14c;
        case 0x4dd150u: goto label_4dd150;
        case 0x4dd154u: goto label_4dd154;
        case 0x4dd158u: goto label_4dd158;
        case 0x4dd15cu: goto label_4dd15c;
        case 0x4dd160u: goto label_4dd160;
        case 0x4dd164u: goto label_4dd164;
        case 0x4dd168u: goto label_4dd168;
        case 0x4dd16cu: goto label_4dd16c;
        case 0x4dd170u: goto label_4dd170;
        case 0x4dd174u: goto label_4dd174;
        case 0x4dd178u: goto label_4dd178;
        case 0x4dd17cu: goto label_4dd17c;
        case 0x4dd180u: goto label_4dd180;
        case 0x4dd184u: goto label_4dd184;
        case 0x4dd188u: goto label_4dd188;
        case 0x4dd18cu: goto label_4dd18c;
        case 0x4dd190u: goto label_4dd190;
        case 0x4dd194u: goto label_4dd194;
        case 0x4dd198u: goto label_4dd198;
        case 0x4dd19cu: goto label_4dd19c;
        case 0x4dd1a0u: goto label_4dd1a0;
        case 0x4dd1a4u: goto label_4dd1a4;
        case 0x4dd1a8u: goto label_4dd1a8;
        case 0x4dd1acu: goto label_4dd1ac;
        case 0x4dd1b0u: goto label_4dd1b0;
        case 0x4dd1b4u: goto label_4dd1b4;
        case 0x4dd1b8u: goto label_4dd1b8;
        case 0x4dd1bcu: goto label_4dd1bc;
        case 0x4dd1c0u: goto label_4dd1c0;
        case 0x4dd1c4u: goto label_4dd1c4;
        default: break;
    }

    ctx->pc = 0x4dd108u;

label_4dd108:
    // 0x4dd108: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4dd108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4dd10c:
    // 0x4dd10c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4dd10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4dd110:
    // 0x4dd110: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4dd110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4dd114:
    // 0x4dd114: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4dd114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dd118:
    // 0x4dd118: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4dd118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4dd11c:
    // 0x4dd11c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4dd11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4dd120:
    // 0x4dd120: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4dd120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4dd124:
    // 0x4dd124: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x4dd124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4dd128:
    // 0x4dd128: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4dd128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4dd12c:
    // 0x4dd12c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4dd12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4dd130:
    // 0x4dd130: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4dd130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_4dd134:
    // 0x4dd134: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4dd138:
    if (ctx->pc == 0x4DD138u) {
        ctx->pc = 0x4DD138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD134u;
        // 0x4dd138: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD13Cu;
        goto label_4dd13c;
    }
    ctx->pc = 0x4DD134u;
    {
        const bool branch_taken_0x4dd134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD134u;
        // 0x4dd138: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd134) {
            ctx->pc = 0x4DD1A0u;
            goto label_4dd1a0;
        }
    }
    ctx->pc = 0x4DD13Cu;
label_4dd13c:
    // 0x4dd13c: 0x24160054  addiu       $s6, $zero, 0x54
    ctx->pc = 0x4dd13cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd140:
    // 0x4dd140: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x4dd140u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_4dd144:
    // 0x4dd144: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x4dd144u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_4dd148:
    // 0x4dd148: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x4dd148u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_4dd14c:
    // 0x4dd14c: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x4dd14cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_4dd150:
    // 0x4dd150: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
label_4dd154:
    if (ctx->pc == 0x4DD154u) {
        ctx->pc = 0x4DD154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD150u;
        // 0x4dd154: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD158u;
        goto label_4dd158;
    }
    ctx->pc = 0x4DD150u;
    {
        const bool branch_taken_0x4dd150 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd150) {
            ctx->pc = 0x4DD154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DD150u;
            // 0x4dd154: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DD158u;
            goto label_4dd158;
        }
    }
    ctx->pc = 0x4DD158u;
label_4dd158:
    // 0x4dd158: 0x2685e5f8  addiu       $a1, $s4, -0x1A08
    ctx->pc = 0x4dd158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294960632));
label_4dd15c:
    // 0x4dd15c: 0x8eacb9c0  lw          $t4, -0x4640($s5)
    ctx->pc = 0x4dd15cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949312)));
label_4dd160:
    // 0x4dd160: 0x240601f8  addiu       $a2, $zero, 0x1F8
    ctx->pc = 0x4dd160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
label_4dd164:
    // 0x4dd164: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4dd164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4dd168:
    // 0x4dd168: 0x2668e600  addiu       $t0, $s3, -0x1A00
    ctx->pc = 0x4dd168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960640));
label_4dd16c:
    // 0x4dd16c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4dd16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4dd170:
    // 0x4dd170: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4dd170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4dd174:
    // 0x4dd174: 0x264ae628  addiu       $t2, $s2, -0x19D8
    ctx->pc = 0x4dd174u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960680));
label_4dd178:
    // 0x4dd178: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4dd178u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd17c:
    // 0x4dd17c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4dd17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4dd180:
    // 0x4dd180: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4dd180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4dd184:
    // 0x4dd184: 0x40f809  jalr        $v0
label_4dd188:
    if (ctx->pc == 0x4DD188u) {
        ctx->pc = 0x4DD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD184u;
        // 0x4dd188: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD18Cu;
        goto label_4dd18c;
    }
    ctx->pc = 0x4DD184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DD18Cu);
        ctx->pc = 0x4DD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD184u;
        // 0x4dd188: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD184u, 0x4DD18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DD18Cu;
label_4dd18c:
    // 0x4dd18c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4dd18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4dd190:
    // 0x4dd190: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4dd190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4dd194:
    // 0x4dd194: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x4dd194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4dd198:
    // 0x4dd198: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_4dd19c:
    if (ctx->pc == 0x4DD19Cu) {
        ctx->pc = 0x4DD1A0u;
        goto label_4dd1a0;
    }
    ctx->pc = 0x4DD198u;
    {
        const bool branch_taken_0x4dd198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dd198) {
            ctx->pc = 0x4DD150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dd150;
        }
    }
    ctx->pc = 0x4DD1A0u;
label_4dd1a0:
    // 0x4dd1a0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4dd1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dd1a4:
    // 0x4dd1a4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4dd1a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dd1a8:
    // 0x4dd1a8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4dd1a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4dd1ac:
    // 0x4dd1ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4dd1acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dd1b0:
    // 0x4dd1b0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4dd1b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dd1b4:
    // 0x4dd1b4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4dd1b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dd1b8:
    // 0x4dd1b8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4dd1b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd1bc:
    // 0x4dd1bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dd1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dd1c0:
    // 0x4dd1c0: 0x3e00008  jr          $ra
label_4dd1c4:
    if (ctx->pc == 0x4DD1C4u) {
        ctx->pc = 0x4DD1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD1C0u;
        // 0x4dd1c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD1C8u;
        goto label_fallthrough_0x4dd1c0;
    }
    ctx->pc = 0x4DD1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD1C0u;
        // 0x4dd1c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dd1c0:
    ctx->pc = 0x4DD1C8u;
}
