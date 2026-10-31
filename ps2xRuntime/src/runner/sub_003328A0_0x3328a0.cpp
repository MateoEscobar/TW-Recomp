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

// Function: sub_003328A0
// Address: 0x3328a0 - 0x3329d8
void sub_003328A0_0x3328a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003328A0_0x3328a0");
#endif

    switch (ctx->pc) {
        case 0x3328c8u: goto label_3328c8;
        case 0x3328d8u: goto label_3328d8;
        case 0x3328e4u: goto label_3328e4;
        case 0x332944u: goto label_332944;
        case 0x3329b0u: goto label_3329b0;
        default: break;
    }

    ctx->pc = 0x3328a0u;

    // 0x3328a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3328a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3328a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3328a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3328a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3328a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3328ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3328acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3328b0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3328b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3328b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3328b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3328b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3328b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3328bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3328bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3328c0: 0xc0cc914  jal         func_332450
    ctx->pc = 0x3328C0u;
    SET_GPR_U32(ctx, 31, 0x3328C8u);
    ctx->pc = 0x3328C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3328C0u;
    // 0x3328c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332450u, 0x3328C0u, 0x3328C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3328C8u;
label_3328c8:
    // 0x3328c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3328c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3328cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3328ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3328d0: 0xc0cc99a  jal         func_332668
    ctx->pc = 0x3328D0u;
    SET_GPR_U32(ctx, 31, 0x3328D8u);
    ctx->pc = 0x3328D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3328D0u;
    // 0x3328d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332668u, 0x3328D0u, 0x3328D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3328D8u;
label_3328d8:
    // 0x3328d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3328d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3328dc: 0xc0cc940  jal         func_332500
    ctx->pc = 0x3328DCu;
    SET_GPR_U32(ctx, 31, 0x3328E4u);
    ctx->pc = 0x3328E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3328DCu;
    // 0x3328e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332500u, 0x3328DCu, 0x3328E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3328E4u;
label_3328e4:
    // 0x3328e4: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3328E4u;
    {
        const bool branch_taken_0x3328e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3328e4) {
            ctx->pc = 0x3328E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3328E4u;
            // 0x3328e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332948u;
            goto label_332948;
        }
    }
    ctx->pc = 0x3328ECu;
    // 0x3328ec: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x3328ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x3328f0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3328f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3328f4: 0x24636458  addiu       $v1, $v1, 0x6458
    ctx->pc = 0x3328f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25688));
    // 0x3328f8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x3328f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x3328fc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x3328fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332900: 0x24845b40  addiu       $a0, $a0, 0x5B40
    ctx->pc = 0x332900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23360));
    // 0x332904: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x332904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x332908: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x332908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x33290c: 0x24a56578  addiu       $a1, $a1, 0x6578
    ctx->pc = 0x33290cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25976));
    // 0x332910: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332914: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x332914u;
    {
        const bool branch_taken_0x332914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x332918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332914u;
        // 0x332918: 0x443821  addu        $a3, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332914) {
            ctx->pc = 0x332924u;
            goto label_332924;
        }
    }
    ctx->pc = 0x33291Cu;
    // 0x33291c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33291Cu;
    {
        const bool branch_taken_0x33291c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x332920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33291Cu;
        // 0x332920: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33291c) {
            ctx->pc = 0x332930u;
            goto label_332930;
        }
    }
    ctx->pc = 0x332924u;
label_332924:
    // 0x332924: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x332924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x332928: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x332928u;
    {
        const bool branch_taken_0x332928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332928u;
        // 0x33292c: 0x244865b0  addiu       $t0, $v0, 0x65B0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 26032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332928) {
            ctx->pc = 0x332934u;
            goto label_332934;
        }
    }
    ctx->pc = 0x332930u;
label_332930:
    // 0x332930: 0x24486518  addiu       $t0, $v0, 0x6518
    ctx->pc = 0x332930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 25880));
label_332934:
    // 0x332934: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x332934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x332938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33293c: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x33293Cu;
    SET_GPR_U32(ctx, 31, 0x332944u);
    ctx->pc = 0x332940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33293Cu;
    // 0x332940: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x33293Cu, 0x332944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332944u;
label_332944:
    // 0x332944: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x332944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_332948:
    // 0x332948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x332948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33294c: 0x24478000  addiu       $a3, $v0, -0x8000
    ctx->pc = 0x33294cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x332950: 0x8ce47ff0  lw          $a0, 0x7FF0($a3)
    ctx->pc = 0x332950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32752)));
    // 0x332954: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x332954u;
    {
        const bool branch_taken_0x332954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x332958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332954u;
        // 0x332958: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332954) {
            ctx->pc = 0x33296Cu;
            goto label_33296c;
        }
    }
    ctx->pc = 0x33295Cu;
    // 0x33295c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33295Cu;
    {
        const bool branch_taken_0x33295c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x332960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33295Cu;
        // 0x332960: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33295c) {
            ctx->pc = 0x332988u;
            goto label_332988;
        }
    }
    ctx->pc = 0x332964u;
    // 0x332964: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x332964u;
    {
        const bool branch_taken_0x332964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332964u;
        // 0x332968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332964) {
            ctx->pc = 0x3329A8u;
            goto label_3329a8;
        }
    }
    ctx->pc = 0x33296Cu;
label_33296c:
    // 0x33296c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x33296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x332970: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x332970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x332974: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x332974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x332978: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x332978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33297c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33297cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332980: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x332980u;
    {
        const bool branch_taken_0x332980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332980u;
        // 0x332984: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332980) {
            ctx->pc = 0x3329B0u;
            goto label_3329b0;
        }
    }
    ctx->pc = 0x332988u;
label_332988:
    // 0x332988: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x332988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x33298c: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x33298cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x332990: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x332990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x332994: 0x8ce47ff8  lw          $a0, 0x7FF8($a3)
    ctx->pc = 0x332994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32760)));
    // 0x332998: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x332998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33299c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3329a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3329A0u;
    {
        const bool branch_taken_0x3329a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3329A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3329A0u;
        // 0x3329a4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3329a0) {
            ctx->pc = 0x3329B0u;
            goto label_3329b0;
        }
    }
    ctx->pc = 0x3329A8u;
label_3329a8:
    // 0x3329a8: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x3329A8u;
    SET_GPR_U32(ctx, 31, 0x3329B0u);
    ctx->pc = 0x3329ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3329A8u;
    // 0x3329ac: 0x24a565c8  addiu       $a1, $a1, 0x65C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x3329A8u, 0x3329B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3329B0u;
label_3329b0:
    // 0x3329b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3329b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3329b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3329b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3329b8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3329b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3329bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3329bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3329c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3329c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3329c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3329c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3329c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3329c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3329cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3329CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3329D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3329CCu;
        // 0x3329d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3329CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3329D4u;
    // 0x3329d4: 0x0  nop
    ctx->pc = 0x3329d4u;
    // NOP
    ctx->pc = 0x3329d8u;
}
