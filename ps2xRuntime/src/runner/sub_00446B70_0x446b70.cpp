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

// Function: sub_00446B70
// Address: 0x446b70 - 0x446e30
void sub_00446B70_0x446b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446B70_0x446b70");
#endif

    switch (ctx->pc) {
        case 0x446c08u: goto label_446c08;
        case 0x446d98u: goto label_446d98;
        case 0x446da4u: goto label_446da4;
        case 0x446dd0u: goto label_446dd0;
        case 0x446de0u: goto label_446de0;
        default: break;
    }

    ctx->pc = 0x446b70u;

    // 0x446b70: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x446b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x446b74: 0xffb70170  sd          $s7, 0x170($sp)
    ctx->pc = 0x446b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x446b78: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x446b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x446b7c: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x446b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x446b80: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x446b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x446b84: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x446b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x446b88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x446b88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446b8c: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x446b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x446b90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x446b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446b94: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x446b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x446b98: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x446b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x446b9c: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x446b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x446ba0: 0x8e540868  lw          $s4, 0x868($s2)
    ctx->pc = 0x446ba0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x446ba4: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x446ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x446ba8: 0x26950010  addiu       $s5, $s4, 0x10
    ctx->pc = 0x446ba8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x446bac: 0x26960018  addiu       $s6, $s4, 0x18
    ctx->pc = 0x446bacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x446bb0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x446BB0u;
    {
        const bool branch_taken_0x446bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446BB0u;
        // 0x446bb4: 0x26970020  addiu       $s7, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446bb0) {
            ctx->pc = 0x446C40u;
            goto label_446c40;
        }
    }
    ctx->pc = 0x446BB8u;
    // 0x446bb8: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x446bb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x446bbc: 0x4630022  bgezl       $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x446BBCu;
    {
        const bool branch_taken_0x446bbc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x446bbc) {
            ctx->pc = 0x446BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446BBCu;
            // 0x446bc0: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446C48u;
            goto label_446c48;
        }
    }
    ctx->pc = 0x446BC4u;
    // 0x446bc4: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x446bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x446bc8: 0x442001f  bltzl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x446BC8u;
    {
        const bool branch_taken_0x446bc8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x446bc8) {
            ctx->pc = 0x446BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446BC8u;
            // 0x446bcc: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446C48u;
            goto label_446c48;
        }
    }
    ctx->pc = 0x446BD0u;
    // 0x446bd0: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x446bd0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x446bd4: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x446bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x446bd8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x446bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x446bdc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x446bdcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x446be0: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x446be0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x446be4: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x446be4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x446be8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x446be8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x446bec: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x446becu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x446bf0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x446bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x446bf4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x446bf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x446bf8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x446bf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x446bfc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x446bfcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x446c00: 0xc10b602  jal         func_42D808
    ctx->pc = 0x446C00u;
    SET_GPR_U32(ctx, 31, 0x446C08u);
    ctx->pc = 0x446C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446C00u;
    // 0x446c04: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x446C00u, 0x446C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446C08u;
label_446c08:
    // 0x446c08: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x446c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x446c0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x446c0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x446c10: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x446c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x446c14: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x446c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x446c18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x446c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x446c1c: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x446c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x446c20: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x446c20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x446c24: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x446c24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x446c28: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x446C28u;
    {
        const bool branch_taken_0x446c28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x446C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446C28u;
        // 0x446c2c: 0x8e540868  lw          $s4, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446c28) {
            ctx->pc = 0x446C48u;
            goto label_446c48;
        }
    }
    ctx->pc = 0x446C30u;
    // 0x446c30: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x446c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x446c34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x446c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x446c38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x446C38u;
    {
        const bool branch_taken_0x446c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446C38u;
        // 0x446c3c: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446c38) {
            ctx->pc = 0x446C48u;
            goto label_446c48;
        }
    }
    ctx->pc = 0x446C40u;
label_446c40:
    // 0x446c40: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x446c40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x446c44: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x446c44u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
label_446c48:
    // 0x446c48: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x446c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x446c4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x446c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x446c50: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x446C50u;
    {
        const bool branch_taken_0x446c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x446c50) {
            ctx->pc = 0x446C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446C50u;
            // 0x446c54: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446C78u;
            goto label_446c78;
        }
    }
    ctx->pc = 0x446C58u;
    // 0x446c58: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x446c58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x446c5c: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x446C5Cu;
    {
        const bool branch_taken_0x446c5c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x446c5c) {
            ctx->pc = 0x446C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446C5Cu;
            // 0x446c60: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446C78u;
            goto label_446c78;
        }
    }
    ctx->pc = 0x446C64u;
    // 0x446c64: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x446c64u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x446c68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x446c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x446c6c: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x446c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x446c70: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x446c70u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x446c74: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x446c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_446c78:
    // 0x446c78: 0x3c080052  lui         $t0, 0x52
    ctx->pc = 0x446c78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)82 << 16));
    // 0x446c7c: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x446c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x446c80: 0x2508a538  addiu       $t0, $t0, -0x5AC8
    ctx->pc = 0x446c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944056));
    // 0x446c84: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x446c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x446c88: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x446c88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x446c8c: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x446c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x446c90: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x446c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x446c94: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x446c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x446c98: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x446c98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x446c9c: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x446c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x446ca0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x446ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x446ca4: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x446ca4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x446ca8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x446ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x446cac: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x446cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x446cb0: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x446cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x446cb4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x446cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x446cb8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x446cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x446cbc: 0xfec50000  sd          $a1, 0x0($s6)
    ctx->pc = 0x446cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 5));
    // 0x446cc0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x446cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x446cc4: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x446cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x446cc8: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x446cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x446ccc: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x446cccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x446cd0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x446cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x446cd4: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x446cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x446cd8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x446cd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x446cdc: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x446cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x446ce0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x446ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x446ce4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x446ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x446ce8: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x446ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x446cec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x446cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x446cf0: 0x9c440000  lwu         $a0, 0x0($v0)
    ctx->pc = 0x446cf0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x446cf4: 0xae4300e0  sw          $v1, 0xE0($s2)
    ctx->pc = 0x446cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
    // 0x446cf8: 0xfe4400a0  sd          $a0, 0xA0($s2)
    ctx->pc = 0x446cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 4));
    // 0x446cfc: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x446cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x446d00: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x446d00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
    // 0x446d04: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x446d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x446d08: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x446d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x446d0c: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x446d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x446d10: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x446d10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x446d14: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x446d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x446d18: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x446d18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
    // 0x446d1c: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x446d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x446d20: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x446d20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x446d24: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x446d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x446d28: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x446d28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
    // 0x446d2c: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x446d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x446d30: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x446D30u;
    {
        const bool branch_taken_0x446d30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x446D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446D30u;
        // 0x446d34: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446d30) {
            ctx->pc = 0x446D5Cu;
            goto label_446d5c;
        }
    }
    ctx->pc = 0x446D38u;
    // 0x446d38: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x446d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x446d3c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x446d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x446d40: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x446d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x446d44: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x446D44u;
    {
        const bool branch_taken_0x446d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x446D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446D44u;
        // 0x446d48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446d44) {
            ctx->pc = 0x446D74u;
            goto label_446d74;
        }
    }
    ctx->pc = 0x446D4Cu;
    // 0x446d4c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x446d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x446d50: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x446d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x446d54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x446D54u;
    {
        const bool branch_taken_0x446d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446D54u;
        // 0x446d58: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x446d54) {
            ctx->pc = 0x446D74u;
            goto label_446d74;
        }
    }
    ctx->pc = 0x446D5Cu;
label_446d5c:
    // 0x446d5c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x446d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x446d60: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x446d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x446d64: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x446d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x446d68: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x446d68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x446d6c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x446d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x446d70: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x446d70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_446d74:
    // 0x446d74: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x446D74u;
    {
        const bool branch_taken_0x446d74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x446d74) {
            ctx->pc = 0x446D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446D74u;
            // 0x446d78: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446DB0u;
            goto label_446db0;
        }
    }
    ctx->pc = 0x446D7Cu;
    // 0x446d7c: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x446d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x446d80: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x446d80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x446d84: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x446d84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x446d88: 0x24c6e0d8  addiu       $a2, $a2, -0x1F28
    ctx->pc = 0x446d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959320));
    // 0x446d8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x446d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446d90: 0xc10fe0a  jal         func_43F828
    ctx->pc = 0x446D90u;
    SET_GPR_U32(ctx, 31, 0x446D98u);
    ctx->pc = 0x446D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446D90u;
    // 0x446d94: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F828u, 0x446D90u, 0x446D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446D98u;
label_446d98:
    // 0x446d98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x446d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446d9c: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x446D9Cu;
    SET_GPR_U32(ctx, 31, 0x446DA4u);
    ctx->pc = 0x446DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446D9Cu;
    // 0x446da0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x446D9Cu, 0x446DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446DA4u;
label_446da4:
    // 0x446da4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x446DA4u;
    {
        const bool branch_taken_0x446da4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x446DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446DA4u;
        // 0x446da8: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446da4) {
            ctx->pc = 0x446E08u;
            goto label_446e08;
        }
    }
    ctx->pc = 0x446DACu;
    // 0x446dac: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x446dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_446db0:
    // 0x446db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x446db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x446db4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x446DB4u;
    {
        const bool branch_taken_0x446db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x446DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446DB4u;
        // 0x446db8: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446db4) {
            ctx->pc = 0x446E08u;
            goto label_446e08;
        }
    }
    ctx->pc = 0x446DBCu;
    // 0x446dbc: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x446dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x446dc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x446DC0u;
    {
        const bool branch_taken_0x446dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446DC0u;
        // 0x446dc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446dc0) {
            ctx->pc = 0x446DD8u;
            goto label_446dd8;
        }
    }
    ctx->pc = 0x446DC8u;
    // 0x446dc8: 0xc111d58  jal         func_447560
    ctx->pc = 0x446DC8u;
    SET_GPR_U32(ctx, 31, 0x446DD0u);
    ctx->pc = 0x446DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446DC8u;
    // 0x446dcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447560u, 0x446DC8u, 0x446DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446DD0u;
label_446dd0:
    // 0x446dd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x446DD0u;
    {
        const bool branch_taken_0x446dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446DD0u;
        // 0x446dd4: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446dd0) {
            ctx->pc = 0x446DE4u;
            goto label_446de4;
        }
    }
    ctx->pc = 0x446DD8u;
label_446dd8:
    // 0x446dd8: 0xc111a38  jal         func_4468E0
    ctx->pc = 0x446DD8u;
    SET_GPR_U32(ctx, 31, 0x446DE0u);
    ctx->pc = 0x446DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446DD8u;
    // 0x446ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4468E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4468E0u, 0x446DD8u, 0x446DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446DE0u;
label_446de0:
    // 0x446de0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x446de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_446de4:
    // 0x446de4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x446de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x446de8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x446DE8u;
    {
        const bool branch_taken_0x446de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x446DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446DE8u;
        // 0x446dec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446de8) {
            ctx->pc = 0x446E00u;
            goto label_446e00;
        }
    }
    ctx->pc = 0x446DF0u;
    // 0x446df0: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x446df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x446df4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x446df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x446df8: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x446df8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x446dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x446dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_446e00:
    // 0x446e00: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x446e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x446e04: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x446e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_446e08:
    // 0x446e08: 0xdfb70170  ld          $s7, 0x170($sp)
    ctx->pc = 0x446e08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x446e0c: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x446e0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x446e10: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x446e10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x446e14: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x446e14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x446e18: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x446e18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x446e1c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x446e1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x446e20: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x446e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x446e24: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x446e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x446e28: 0x3e00008  jr          $ra
    ctx->pc = 0x446E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446E28u;
        // 0x446e2c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x446E30u;
}
